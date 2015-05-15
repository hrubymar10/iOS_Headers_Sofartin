/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingPlaybackControlsView : MPPlaybackControlsView <MPDetailSliderDelegate, MPUNowPlayingTransportControlsDelegate, UIActionSheetDelegate> {
    MPUApplicationDefaults *_applicationDefaults;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _artworkFrame;
    UIActionSheet *_createActionSheet;
    SKUICircleProgressIndicator *_createActivityIndicatorView;
    UIButton *_createButton;
    NSArray *_createButtonActions;
    bool _isDetailScrubbing;
    long long _orientation;
    MPUSkipLimitView *_skipLimitView;
    UIView *_titlesView;
    MPUNowPlayingTransportControls *_transportControls;
    bool _usesMiniProgressControl;
    MPVolumeSlider *_volumeSlider;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _boundsForCenteringCreateActivityIndicatorView;
@property (nonatomic, readonly) UIView *_createButton;
@property (nonatomic, readonly) double _textButtonBottomVerticalInsetBaselinePhone;
@property (nonatomic, readonly) double _textButtonVerticalInsetBaselinePad;
@property (nonatomic, readonly) double _titlesLastResortVerticalOffsetPhone;
@property (nonatomic, readonly) double _transportControlsLastResortVerticalOffsetPhone;
@property (nonatomic, readonly) double _volumeBottomVerticalInsetPhone;
@property (nonatomic, retain) MPUApplicationDefaults *applicationDefaults;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } artworkFrame;
@property (nonatomic, readonly) UIActionSheet *createActionSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (getter=isShowingCreateLoadingIndicator, nonatomic) bool showingCreateLoadingIndicator;
@property (nonatomic, readonly) MPUSkipLimitView *skipLimitView;
@property (readonly) Class superclass;
@property (nonatomic) UIView *titlesView;
@property (nonatomic) bool usesMiniProgressControl;

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (id)_availableCreateActionsForItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForCenteringCreateActivityIndicatorView;
- (void)_createAction:(id)arg1;
- (id)_createButton;
- (void)_defaultsDidChangeNotification:(id)arg1;
- (bool)_isCreateAvailable;
- (void)_layoutSkipLimitView;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (bool)_shouldAddBottomGap;
- (double)_textButtonBottomVerticalInsetBaselinePhone;
- (double)_textButtonVerticalInsetBaselinePad;
- (id)_titleForCreateAction:(long long)arg1;
- (double)_titlesLastResortVerticalOffsetPhone;
- (Class)_transportControlsClass;
- (double)_transportControlsLastResortVerticalOffsetPhone;
- (void)_updateForItemDidChangeAnimated:(bool)arg1;
- (double)_volumeBottomVerticalInsetPhone;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)applicationDefaults;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })artworkFrame;
- (long long)buttonType;
- (id)createActionSheet;
- (void)dealloc;
- (bool)detailScrubbingHidesControls;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingCreateLoadingIndicator;
- (void)layoutSubviews;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newProgressIndicator;
- (long long)orientation;
- (void)registerForPlayerNotifications;
- (void)reloadView;
- (id)repeatButtonImage;
- (void)setApplicationDefaults:(id)arg1;
- (void)setArtworkFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setShowingCreateLoadingIndicator:(bool)arg1;
- (void)setTitlesView:(id)arg1;
- (void)setUsesMiniProgressControl:(bool)arg1;
- (void)setUsesMiniProgressControl:(bool)arg1 animated:(bool)arg2;
- (bool)shouldOverrideProgressTimeLabelStyle;
- (id)shuffleButtonImage;
- (id)skipLimitView;
- (void)tintColorDidChange;
- (id)titlesView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transportControlsDidLayoutSubviews:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (bool)usesMiniProgressControl;

@end
