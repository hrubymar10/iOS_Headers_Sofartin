/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {
    NSArray *_previewItems;
}

@property(assign,copy) NSArray * previewItems;

- (id)currentPreviewItem;
- (void)dealloc;
- (id)init;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewItems;
- (void)setDataSource:(id)arg1;
- (void)setPreviewItems:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end