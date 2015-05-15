/* Generated by RuntimeBrowser.
 */

@protocol SWRunWorkoutObserver <NSObject>

@required

- (void)observeRunWorkoutControllerDataChange:(SWRunWorkoutController *)arg1 elapsedTime:(unsigned long long)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(CLLocation *)arg6;
- (void)observeRunWorkoutStateChange:(SWRunWorkoutController *)arg1 oldState:(NSString *)arg2 newState:(NSString *)arg3;
- (void)observeRunWorkoutUserEvent:(SWRunWorkoutController *)arg1 userEvent:(NSString *)arg2;

@end