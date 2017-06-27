#import "GsnGeocoder.h"
#import <AddressBookUI/AddressBookUI.h>

@implementation GsnGeocoder

+(GsnGeocoder*)shared
{
	static dispatch_once_t predicate = 0;
	__strong static id shared = nil;
	
	dispatch_once(&predicate, ^{
		NSLog(@"Creating GsnGeocoder!");
		shared = [[self alloc] init];
	});
	return shared;
}

-(void)initGeocoder
{
	// instantiate the CCLocationManager to reverse geolocate based on the provided lat and long
	self.locationManager = [[CLLocationManager alloc] init];
	self.locationManager.desiredAccuracy = kCLLocationAccuracyBest;
	self.locationManager.delegate = self;
}

-(void)requestLocation
{
	NSLog(@"requestLocation");
	// start updating the reverse geolocate system
	[self.locationManager startUpdatingLocation];
}

// handler of a delegate called by iOS when a location has been found
-(void)locationManager:(CLLocationManager *)manager didUpdateLocations:(NSArray *)locations
{
	[self.locationManager stopUpdatingLocation];

	CLGeocoder* geocoder = [[CLGeocoder alloc] init];
	CLLocation* location = self.locationManager.location;

	[geocoder reverseGeocodeLocation:location completionHandler:^(NSArray *placemarks, NSError *error)
	{
		NSLog(@"Finding address");

		if (error)
		{
			NSLog(@"Error %@", error.description);
			UnitySendMessage("Geolocation", "ReceivedLocationError", [[NSString stringWithFormat:@"%@/%@/%@", @"{\"error\":", error.description, @"\"}"] UTF8String]);
		}
		else
		{
			CLPlacemark *placemark = [placemarks lastObject];

			NSMutableDictionary* addressDictionary = [NSMutableDictionary dictionaryWithDictionary:placemark.addressDictionary];

			[addressDictionary setObject:[NSNumber numberWithDouble:location.coordinate.latitude] forKey:@"Latitude"];
			[addressDictionary setObject:[NSNumber numberWithDouble:location.coordinate.longitude] forKey:@"Longitude"];

			NSData *jsonData = [NSJSONSerialization dataWithJSONObject:addressDictionary options:0 error:&error];
			if (!jsonData)
			{
				NSLog(@"Json encoding error: %@", error);
				UnitySendMessage("Geolocation", "ReceivedLocationError", [[NSString stringWithFormat:@"%@/%@/%@", @"{\"error\":", error.description, @"\"}"] UTF8String]);
			}
			else
			{
				NSString *json = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
				UnitySendMessage("Geolocation", "ReceivedLocation", [json UTF8String]);
			}
		}
	}];
}


@end

extern "C"
{
	
   void _initGeocoder()
	{
		[[GsnGeocoder shared] initGeocoder];
	}
	
	void _requestLocation()
	{
		[[GsnGeocoder shared] requestLocation];
	}
	
}

