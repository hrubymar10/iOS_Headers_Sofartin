/* Generated by RuntimeBrowser.
 */

@protocol RUPreviewSessionObserver <NSObject>

@optional

- (void)previewSession:(RUPreviewSession *)arg1 didChangeFromItem:(MPAVItem *)arg2 toItem:(MPAVItem *)arg3;
- (void)previewSession:(RUPreviewSession *)arg1 didStopWithOptions:(long long)arg2 withFinalItem:(MPAVItem *)arg3 didFinalItemPlayToCompletion:(bool)arg4;

@end