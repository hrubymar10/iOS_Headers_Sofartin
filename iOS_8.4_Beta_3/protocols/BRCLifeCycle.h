/* Generated by RuntimeBrowser.
 */

@protocol BRCLifeCycle <NSObject>

@required

- (void)cancel;
- (void)close;
- (bool)isCancelled;
- (void)resume;
- (void)setIsCancelled:(bool)arg1;
- (void)suspend;

@end