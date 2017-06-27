#import <CoreLocation/CLLocationManager.h>

int GsnGeoLocationLocationServicesAuthorizationStatus()
{
    CLAuthorizationStatus authStatus = [CLLocationManager authorizationStatus];
    
    if (authStatus == kCLAuthorizationStatusAuthorizedWhenInUse)
        authStatus = kCLAuthorizationStatusAuthorizedAlways;
    
    return authStatus;
}

void GsnGeolocationOpenSettings()
{
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:UIApplicationOpenSettingsURLString]];
}
