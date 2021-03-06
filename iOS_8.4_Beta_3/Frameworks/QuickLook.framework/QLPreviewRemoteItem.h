/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem> {
    id _completionBlock;
    QLServicePreviewContentController *_contentController;
    long long _index;
    QLPreviewItemProxy *_proxy;
    bool _resolving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *previewItemTitle;
@property (readonly) NSURL *previewItemURL;
@property (readonly) QLPreviewItemProxy *proxy;
@property (readonly) Class superclass;

- (void)_clearCompletionBlock;
- (double)autoPlaybackPosition;
- (id)backgroundColorOverride;
- (void)dealloc;
- (id)description;
- (id)initWithContentController:(id)arg1 index:(long long)arg2;
- (void)invalidate;
- (bool)isPromisedItem;
- (id)previewItemContentType;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)previewItemURLForDisplay;
- (id)proxy;
- (void)resolveWithCompletionBlock:(id)arg1;

@end
