/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsContentView : UIView {
    NSAttributedString *_attributedTitle;
    NSString *_auxSubtitle;
    UILabel *_auxSubtitleLabel;
    double _clippingOffsetY;
    UIView *_clippingView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    double _draggingOffsetX;
    struct CGSize { 
        double width; 
        double height; 
    } _imageSize;
    NSMutableArray *_imageViews;
    NSPointerArray *_images;
    unsigned long long _maxImageCount;
    NSString *_subtitle;
    UILabel *_subtitleLabel;
    NSAttributedString *_title;
    UILabel *_titleLabel;
}

@property(assign,copy) NSString * auxSubtitle;
@property(assign,readwrite) double clippingOffsetY;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(assign,readwrite) double draggingOffsetX;
@property(assign,readwrite) struct CGSize { double x1; double x2; } imageSize;
@property(assign,readwrite) unsigned long long maxImageCount;
@property(assign,copy) NSString * subtitle;
@property(assign,copy) NSAttributedString * title;

+ (id)defaultAttributes;
+ (id)highlightedAttributes;
+ (id)subtitleTextColor;

- (void).cxx_destruct;
- (void)_updateImageContainers;
- (void)_updateSubviews;
- (id)auxSubtitle;
- (void)clearImages;
- (double)clippingOffsetY;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)draggingOffsetX;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)maxImageCount;
- (void)setAuxSubtitle:(id)arg1;
- (void)setClippingOffsetY:(double)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDraggingOffsetX:(double)arg1;
- (void)setImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaxImageCount:(unsigned long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
