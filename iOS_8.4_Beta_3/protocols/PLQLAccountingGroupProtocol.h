/* Generated by RuntimeBrowser.
 */

@protocol PLQLAccountingGroupProtocol <NSObject>

@required

- (NSString *)accountingGroupName;
- (short)accountingGroupType;
- (NSArray *)getEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (PLEntry *)getLastOpenSnapshot;
- (PLEntry *)getLastSnapshot;
- (double)safeTimeForAccounting;
- (double)timeOfLastSnapshot;

@end
