/* Generated by RuntimeBrowser.
 */

@protocol _HKActiveWorkoutClient <NSObject>

@required

- (void)serverPausedWithDate:(NSDate *)arg1 completion:(id)arg2;
- (void)updateTotalsWithEnergyBurned:(HKQuantity *)arg1 distance:(HKQuantity *)arg2 resumeData:(NSDictionary *)arg3 UUIDs:(NSArray *)arg4;

@end
