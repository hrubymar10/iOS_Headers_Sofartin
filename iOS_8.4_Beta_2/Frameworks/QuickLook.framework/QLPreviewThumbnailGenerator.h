/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewThumbnailGenerator : NSObject {
    NSString *_contentType;
    <QLPreviewItem> *_item;
    double _scale;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    int _status;
    UIImage *_thumbnailImage;
}

@property(assign,readonly) UIImage * thumbnailImage;

+ (bool)canGenerateThumbnailForPreviewItem:(id)arg1;
+ (id)generatorForPreviewItem:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (struct CGContext { }*)_beginContext;
- (id)_endContextWithContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })_pixelSize;
- (id)_thumbnailForImage;
- (id)_thumbnailForMovie;
- (id)_thumbnailForPDF;
- (void)cancel;
- (void)dealloc;
- (void)generateWithCompletionBlock:(id)arg1;
- (id)thumbnailImage;

@end
