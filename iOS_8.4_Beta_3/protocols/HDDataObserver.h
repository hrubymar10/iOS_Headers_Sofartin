/* Generated by RuntimeBrowser.
 */

@protocol HDDataObserver <NSObject>

@required

- (void)samplesAdded:(NSArray *)arg1 anchor:(NSNumber *)arg2;

@optional

- (void)samplesJournaled:(NSArray *)arg1 type:(HKSampleType *)arg2;
- (void)samplesOfTypeWereRemoved:(HKSampleType *)arg1;

@end
