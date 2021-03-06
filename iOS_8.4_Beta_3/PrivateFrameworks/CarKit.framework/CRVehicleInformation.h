/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleInformation : NSObject {
    unsigned long long _vehicleAmbientBrightness;
}

@property (nonatomic, readonly) unsigned long long driverPosition;
@property (nonatomic, readonly) unsigned long long interactionRestrictions;
@property (nonatomic, readonly) unsigned long long vehicleAmbientBrightness;

- (unsigned long long)ambientBrightness;
- (void)dealloc;
- (unsigned long long)driverPosition;
- (void)handleLimitedUIChanged:(id)arg1;
- (void)handleNightModeChanged:(id)arg1;
- (id)init;
- (unsigned long long)interactionRestrictions;
- (unsigned long long)vehicleAmbientBrightness;

@end
