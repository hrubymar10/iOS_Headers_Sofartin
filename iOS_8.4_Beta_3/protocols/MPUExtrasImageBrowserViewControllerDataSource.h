/* Generated by RuntimeBrowser.
 */

@protocol MPUExtrasImageBrowserViewControllerDataSource <NSObject>

@required

- (void)imageBrowserViewController:(MPUExtrasImageBrowserViewController *)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(MPUExtrasImageBrowserViewController *)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(MPUExtrasImageBrowserViewController *)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (void)imageBrowserViewController:(MPUExtrasImageBrowserViewController *)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (unsigned long long)numberOfImagesForBrowserViewController:(MPUExtrasImageBrowserViewController *)arg1;

@end
