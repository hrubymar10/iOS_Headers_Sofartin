/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridMagnifiedImageViewController : UIViewController {
    bool _canShowFullScreen;
    id _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    } _gestureWindLocation;
    int _imageFormat;
    NSIndexPath *_itemIndexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _itemWindFrame;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastLocation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _magnifiedDragEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    } _magnifiedSize;
    PUGridMagnifiedView *_magnifiedView;
    double _magnifiedYOffset;
    struct CGSize { 
        double width; 
        double height; 
    } _shadowOffset;
    double _shadowOpacity;
    double _shadowRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _trackingWindFrame;
}

@property(assign,readonly) bool canShowFullScreen;
@property(assign,readwrite) id delegate;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } gestureWindLocation;
@property(assign,readwrite) int imageFormat;
@property(assign,retain) NSIndexPath * itemIndexPath;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemWindFrame;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } lastLocation;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } magnifiedDragEdgeInsets;
@property(assign,readwrite) struct CGSize { double x1; double x2; } magnifiedSize;
@property(assign,retain) PUGridMagnifiedView * magnifiedView;
@property(assign,readwrite) double magnifiedYOffset;
@property(assign,readwrite) struct CGSize { double x1; double x2; } shadowOffset;
@property(assign,readwrite) double shadowOpacity;
@property(assign,readwrite) double shadowRadius;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackingWindFrame;

- (void).cxx_destruct;
- (void)beginMagnification;
- (bool)canShowFullScreen;
- (void)continueMagnification;
- (id)delegate;
- (void)endMagnification;
- (bool)gestureInNewLocation;
- (struct CGPoint { double x1; double x2; })gestureWindLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(bool)arg1;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint { double x1; double x2; })arg1;
- (int)imageFormat;
- (id)initWithDelegate:(id)arg1;
- (id)installMagnifiedView;
- (bool)isValidMagnifyLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)itemIndexPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemWindFrame;
- (struct CGPoint { double x1; double x2; })lastLocation;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })magnifiedImageWindFrame;
- (struct CGSize { double x1; double x2; })magnifiedSize;
- (id)magnifiedView;
- (double)magnifiedYOffset;
- (void)prepareForRelease;
- (void)setDelegate:(id)arg1;
- (void)setGestureWindLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setImageFormat:(int)arg1;
- (void)setItemIndexPath:(id)arg1;
- (void)setItemWindFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagnifiedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMagnifiedView:(id)arg1;
- (void)setMagnifiedYOffset:(double)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setTrackingWindFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupMagnifiedView;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackingWindFrame;

@end
