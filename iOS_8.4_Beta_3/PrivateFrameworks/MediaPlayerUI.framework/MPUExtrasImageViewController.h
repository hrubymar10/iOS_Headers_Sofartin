/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasImageViewController : UIViewController <MPUExtrasZoomingImageTransitionParticipant> {
    UIActivityIndicatorView *_activityIndicatorView;
    bool _allowsPinchingImageForInteractiveZoomingImageTransition;
    MPUContentSizeLayoutConstraint *_bottomLabelConstraint;
    UILabel *_descriptionLabel;
    MPUContentSizeLayoutConstraint *_descriptionLeadingConstraint;
    NSArray *_gestureRecognizers;
    unsigned long long _imageIndex;
    MPUExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    bool _overlayHidden;
    UILabel *_subtitleLabel;
    MPUContentSizeLayoutConstraint *_subtitleLeadingConstraint;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUExtrasZoomableImageView *_zoomableImageView;
    NSString *_zoomingImageTransitionIdentifier;
}

@property(assign,retain) UIActivityIndicatorView * activityIndicatorView;
@property(assign,readwrite) bool allowsPinchingImageForInteractiveZoomingImageTransition;
@property(assign,retain) MPUContentSizeLayoutConstraint * bottomLabelConstraint;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UILabel * descriptionLabel;
@property(assign,retain) MPUContentSizeLayoutConstraint * descriptionLeadingConstraint;
@property(assign,retain) NSAttributedString * descriptionString;
@property(assign,copy) NSArray * gestureRecognizers;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIImage * image;
@property(assign,readwrite) unsigned long long imageIndex;
@property(assign,retain) MPUExtrasZoomingImageInteractiveTransitionSourceContext * interactiveTransitionSourceContext;
@property(assign,readwrite) bool overlayHidden;
@property(assign,retain) UILabel * subtitleLabel;
@property(assign,retain) MPUContentSizeLayoutConstraint * subtitleLeadingConstraint;
@property(assign,retain) NSAttributedString * subtitleString;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIView * textContainmentView;
@property(assign,retain) UILabel * titleLabel;
@property(assign,retain) NSAttributedString * titleString;
@property(assign,retain) MPUContentSizeLayoutConstraint * topLabelConstraint;
@property(assign,retain) MPUExtrasZoomableImageView * zoomableImageView;
@property(assign,copy) NSString * zoomingImageTransitionIdentifier;

- (void).cxx_destruct;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePinch:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (id)activityIndicatorView;
- (bool)allowsPinchingImageForInteractiveZoomingImageTransition;
- (id)bottomLabelConstraint;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLeadingConstraint;
- (id)descriptionString;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)gestureRecognizers;
- (id)image;
- (unsigned long long)imageIndex;
- (id)interactiveTransitionSourceContext;
- (bool)overlayHidden;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(bool)arg1;
- (void)setBottomLabelConstraint:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLeadingConstraint:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setGestureRecognizers:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageIndex:(unsigned long long)arg1;
- (void)setInteractiveTransitionSourceContext:(id)arg1;
- (void)setOverlayHidden:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleLeadingConstraint:(id)arg1;
- (void)setSubtitleString:(id)arg1;
- (void)setTextContainmentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setTopLabelConstraint:(id)arg1;
- (void)setZoomableImageView:(id)arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleLeadingConstraint;
- (id)subtitleString;
- (id)textContainmentView;
- (id)titleLabel;
- (id)titleString;
- (id)topLabelConstraint;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)zoomableImageView;
- (id)zoomingImageTransitionIdentifier;

@end
