/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUAudioPreviewView : UIView <RUPreviewSessionObserver> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _artworkEdgeInsets;
    UIImage *_artworkImage;
    UIImageView *_artworkImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _artworkOverlayEdgeInsets;
    UIImage *_artworkOverlayImage;
    UIImageView *_artworkOverlayImageView;
    SKUIItemOfferButton *_circleProgressIndicator;
    double _currentTimeOverride;
    double _customDuration;
    <RUAudioPreviewViewDelegate> *_delegate;
    CADisplayLink *_displayLink;
    MPUDownloadProgressIndicator *_downloadProgressIndicator;
    double _durationOverride;
    RUPreviewSession *_previewSession;
    _RUAudioPreviewTicker *_previewTicker;
    long long _style;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } artworkEdgeInsets;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } artworkOverlayEdgeInsets;
@property (nonatomic, retain) UIImage *artworkOverlayImage;
@property (nonatomic) double customDuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUAudioPreviewViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUPreviewSession *previewSession;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (void)_cancelAnimationTimer;
- (void)_displayLinkTickAction:(id)arg1;
- (void)_setProgress:(float)arg1;
- (void)_startAnimating;
- (void)_stopAnimating;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })artworkEdgeInsets;
- (id)artworkImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })artworkOverlayEdgeInsets;
- (id)artworkOverlayImage;
- (double)customDuration;
- (void)dealloc;
- (id)delegate;
- (void)flipFromPreviewProgressAnimated:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)flipToPreviewProgressAnimated:(bool)arg1 withCompletionHandler:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (id)previewSession;
- (void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)previewSession:(id)arg1 didStopWithOptions:(long long)arg2 withFinalItem:(id)arg3 didFinalItemPlayToCompletion:(bool)arg4;
- (void)setArtworkEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setArtworkOverlayEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setArtworkOverlayImage:(id)arg1;
- (void)setCustomDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewSession:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

@end
