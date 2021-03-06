/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {
    long long _index;
    <QLPreviewItem> *_previewItem;
    QLPreviewThumbnailGenerator *_thumbnailGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UIImage *icon;
@property (readonly) bool isFolder;
@property (readonly) long long level;
@property (readonly) long long previewItemIndex;
@property (readonly) NSString *previewItemTitle;
@property (readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

+ (id)genericIconForPreviewItem:(id)arg1;
+ (id)uiItemForPreviewItem:(id)arg1 index:(long long)arg2;

- (void)cancelIconUpdate;
- (void)dealloc;
- (id)icon;
- (bool)isFolder;
- (long long)level;
- (long long)previewItemIndex;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)updateIconWithSize:(struct CGSize { double x1; double x2; })arg1 completionBlock:(id)arg2;

@end
