/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPolaroidImageView : PLImageView {
    UILabel *_nameLabel;
    bool _polaroidBorderVisible;
    UIView *_posterView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _roi;
    double _thinBorderWidth;
}

@property (nonatomic, retain) UIImage *posterImage;

+ (Class)layerClass;

- (void)_adjustLabel;
- (double)_tunedProgress;
- (void)_updatePolaroidFramePath:(bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)posterImage;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setBorderAndAccessoriesVisible:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setTransitionProgress:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 allowRounding:(bool)arg2;

@end
