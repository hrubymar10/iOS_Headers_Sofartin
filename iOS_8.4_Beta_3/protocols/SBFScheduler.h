/* Generated by RuntimeBrowser.
 */

@protocol SBFScheduler <NSObject>

@required

- (<SBFCancelable> *)afterDelay:(double)arg1 performBlock:(id)arg2;
- (<SBFCancelable> *)performBlock:(id)arg1;
- (<SBFCancelable> *)performCancelableBlock:(id)arg1;

@end