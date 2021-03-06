/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMNatalimeter : NSObject {
    CMNatalimeterInternal *_internal;
}

@property (nonatomic, readonly) CMNatalimeterInternal *_internal;

+ (id)defaultUserProfile;
+ (bool)isNatalimeterAvailable;
+ (id)maxNatalieEntries;
+ (bool)setUserProfile:(id)arg1 error:(id*)arg2;
+ (id)userProfile;

- (id)_internal;
- (void)dealloc;
- (unsigned long long)getSupportedMetricsForSession:(long long)arg1;
- (id)init;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(id)arg2;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(id)arg2;
- (void)setSession:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id)arg1;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
