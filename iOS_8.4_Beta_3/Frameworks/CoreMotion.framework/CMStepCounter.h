/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMStepCounter : NSObject {
    CMStepCounterProxy *_stepcounterProxy;
}

@property(assign,readwrite) bool enabled;
@property(assign,readonly) bool everRequested;
@property(assign,readonly) CMStepCounterProxy * stepcounterProxy;

+ (bool)isStepCountingAvailable;

- (void)dealloc;
- (void)deleteHistory;
- (bool)enabled;
- (bool)everRequested;
- (void)getTotalCountToQueue:(id)arg1 withHandler:(id)arg2;
- (id)init;
- (void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(id)arg4;
- (void)setEnabled:(bool)arg1;
- (void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(id)arg3;
- (id)stepcounterProxy;
- (void)stopStepCountingUpdates;

@end
