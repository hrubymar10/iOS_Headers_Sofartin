/* Generated by RuntimeBrowser.
 */

@protocol WBSHistoryLoader <NSObject>

@required

- (id)initWithURL:(NSURL *)arg1 itemCountLimit:(unsigned long long)arg2 ageLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void)startLoading;
- (void)waitForLoadingToComplete;

@end
