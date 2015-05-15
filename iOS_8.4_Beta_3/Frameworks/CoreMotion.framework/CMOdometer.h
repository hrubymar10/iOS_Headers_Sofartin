/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometer : NSObject {
    <CMOdometerDelegate> *_delegate;
    CMOdometerProxy *_odometerProxy;
}

@property(assign,readwrite) <CMOdometerDelegate> * delegate;
@property(assign,readonly) CMOdometerProxy * odometerProxy;

+ (bool)isOdometerAvailableForActivity:(long long)arg1;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)odometerProxy;
- (void)setDelegate:(id)arg1;
- (void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(id)arg2;
- (void)stopOdometerUpdates;

@end