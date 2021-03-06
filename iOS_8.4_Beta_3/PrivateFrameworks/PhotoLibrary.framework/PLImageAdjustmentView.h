/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImageAdjustmentView : UIView <UIGestureRecognizerDelegate> {
    double _animationDuration;
    double _autoCropScale;
    unsigned int _canRotate;
    double _cropAngle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _cropInsets;
    PLCropModel *_cropModel;
    unsigned int _currentCropAction;
    <PLImageAdjustmentViewDelegate> *_delegate;
    unsigned int _delegateDidCropImage;
    unsigned int _delegateDidTouchImage;
    unsigned int _delegateWillCropImage;
    UIImage *_editedImage;
    int _gestureCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _imageCropRect;
    UIImageView *_imageView;
    unsigned int _isAdjustingCropRect;
    unsigned int _isAnimating;
    unsigned int _isCropMode;
    NSTimer *_manualCropTimer;
    unsigned int _needsRecenterImage;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _originalTransform;
    PLCropOverlayLayer *_overlayLayer;
    double _photoViewScale;
    double _previousCropAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _previousImageCropRect;
    double _sourceAspectRatio;
}

@property (nonatomic) struct CGSize { double x1; double x2; } aspectRatio;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cropInsets;
@property (getter=isCropMode, nonatomic) bool cropMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLImageAdjustmentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *editedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_beginCropGesture:(id)arg1;
- (void)_cropTimer:(id)arg1;
- (void)_endCropGesture:(id)arg1;
- (double)_imageScale;
- (bool)_isInCropGesture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_maxOverlayCropRect;
- (double)_minimumImageScale;
- (void)_performCropAction:(int)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_updateCropAngle;
- (bool)_updateCropRect;
- (void)_updateGestureRecognizers;
- (void)_updateImageView;
- (void)_updateOverlayCropRect;
- (struct CGSize { double x1; double x2; })aspectRatio;
- (void)beginAnimation:(double)arg1;
- (void)commitAnimations;
- (double)computeScaleToFillRelativeToPointInImage:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointFromImage:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToImage:(struct CGPoint { double x1; double x2; })arg1;
- (void)crop:(id)arg1;
- (int)cropActionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)cropAngle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cropInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (id)delegate;
- (void)displayProgressIndicatorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)editedImage;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCropMode;
- (bool)isDisplayingProgressIndicators;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayCropRect;
- (id)overlayLayer;
- (void)pan:(id)arg1;
- (double)previousCropAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousCropRect;
- (void)removeProgressIndicatorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)removeProgressIndicators;
- (void)replaceEditedImage:(id)arg1;
- (void)reset;
- (void)rotate:(id)arg1;
- (double)rotationAngle;
- (void)scale:(id)arg1;
- (void)setAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setCropInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCropMode:(bool)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cropAngle:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEditedImage:(id)arg1;
- (void)setNeedsRecenterImage;
- (void)setRotationAngle:(double)arg1;
- (void)showIndicatorAtPointInImage:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (void)touch:(id)arg1;

@end
