#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

extern "C" {

@interface GsnGeocoder : NSObject<CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;

+(GsnGeocoder*)shared;

@end

}