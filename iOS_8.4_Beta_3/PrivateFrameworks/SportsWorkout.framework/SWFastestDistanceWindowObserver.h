/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWFastestDistanceWindowObserver : NSObject <SWRunWorkoutObserver> {
    float _distanceWindow;
    double _fastestTimeInSeconds;
    NSMutableArray *_snapshots;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)fastestTimeForDistanceInSeconds;
- (id)initWithDistanceWindowInMiles:(float)arg1;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned long long)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;

@end