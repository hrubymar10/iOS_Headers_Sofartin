/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGridCell : UICollectionViewCell {
    UIImageView *_cloudIconImageView;
    bool _cloudIconVisible;
    int _currentImageRequestID;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _fillerEdgeInsets;
    UIView *_highlightOverlayView;
    PUPhotoView *_photoContentView;
    NSNumber *_progress;
    PUProgressIndicatorView *_progressIndicatorView;
    NSArray *_progressIndicatorViewConstraints;
    UIImageView *_selectionBadgeImageView;
    bool _selectionBadgeVisible;
    UIView *_selectionOverlayView;
    PUPhotoView *_temporaryPhotoContentView;
    UIView *_transitionFillerView;
    bool _transitionFillerViewEnabled;
    bool _transitionIsAppearing;
}

@property(getter=isCloudIconVisible,assign,readwrite) bool cloudIconVisible;
@property(assign,readwrite) int currentImageRequestID;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fillerEdgeInsets;
@property(getter=isHighlighted,assign,readwrite) bool highlighted;
@property(assign,retain) PUPhotoView * photoContentView;
@property(assign,retain) NSNumber * progress;
@property(getter=isSelectionBadgeVisible,assign,readwrite) bool selectionBadgeVisible;
@property(assign,retain) PUPhotoView * temporaryPhotoContentView;
@property(assign,readonly) UIView * transitionFillerView;
@property(assign,readwrite) bool transitionFillerViewEnabled;
@property(assign,readwrite) bool transitionIsAppearing;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_layoutTransitionFillerView;
- (void)_updateCloudIcon;
- (void)_updateContentViewClipsToBounds;
- (void)_updateHighlight;
- (void)_updateProgressImmediately:(bool)arg1;
- (void)_updateSelectionBadge;
- (void)_updateSubviewOrdering;
- (void)addTemporaryPhotoContentView;
- (void)applyLayoutAttributes:(id)arg1;
- (int)currentImageRequestID;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fillerEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCloudIconVisible;
- (bool)isSelectionBadgeVisible;
- (void)layoutSubviews;
- (id)photoContentView;
- (void)prepareForReuse;
- (id)progress;
- (void)removeTemporaryPhotoContentView;
- (void)setCloudIconVisible:(bool)arg1;
- (void)setCurrentImageRequestID:(int)arg1;
- (void)setFillerEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPhotoContentView:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProgress:(id)arg1 immediately:(bool)arg2;
- (void)setSelectionBadgeVisible:(bool)arg1;
- (void)setTemporaryPhotoContentView:(id)arg1;
- (void)setTemporaryPhotoImage:(id)arg1 with:(long long)arg2;
- (void)setTransitionFillerViewEnabled:(bool)arg1;
- (void)setTransitionIsAppearing:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)temporaryPhotoContentView;
- (id)transitionFillerView;
- (bool)transitionFillerViewEnabled;
- (bool)transitionIsAppearing;
- (void)updateConstraints;

@end
