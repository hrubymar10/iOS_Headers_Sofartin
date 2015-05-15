/* Generated by RuntimeBrowser.
 */

@protocol SKUIDocumentViewController <NSObject>

@required

- (void)documentDidUpdate:(IKAppDocument *)arg1;

@optional

+ (bool)managesNavigationBarContents;

- (void)delayPresentationIfNeededForParentViewController:(UIViewController *)arg1;
- (void)documentMediaQueriesDidUpdate:(IKAppDocument *)arg1;
- (NSArray *)impressionableViewElements;
- (NSArray *)leftBarButtonItemsForDocument:(IKAppDocument *)arg1;
- (UIView *)navigationPaletteView;

@end