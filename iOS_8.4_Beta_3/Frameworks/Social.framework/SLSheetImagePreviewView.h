/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetImagePreviewView : UIView {
    UIImage *_image;
    UIImageView *_imageView;
    NSMutableDictionary *_intrinsicSizes;
    NSArray *_principalAttachments;
    long long _verticalSizeClass;
}

@property(assign,retain) UIImage * image;
@property(assign,retain) UIImageView * imageView;
@property(assign,retain) NSArray * principalAttachments;
@property(assign,readwrite) long long verticalSizeClass;

+ (id)fallbackPreviewImage;

- (void).cxx_destruct;
- (void)ensurePlaceholderPreviewImage;
- (bool)generatePreviewImageFromAttachments;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)principalAttachments;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (void)setPrincipalAttachments:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 forVerticalSizeClass:(long long)arg2;
- (void)setVerticalSizeClass:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForVerticalSizeClass:(long long)arg1;
- (long long)verticalSizeClass;
- (void)verticalSizeClassDidChange;

@end
