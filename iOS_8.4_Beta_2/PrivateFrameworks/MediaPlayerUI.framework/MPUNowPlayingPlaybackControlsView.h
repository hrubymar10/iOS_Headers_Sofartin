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

@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _boundsForCenteringCreateActivityIndicatorView;
@property(assign,readonly) UIView * _createButton;
@property(assign,readonly) double _textButtonBottomVerticalInsetBaselinePhone;
@property(assign,readonly) double _textButtonVerticalInsetBaselinePad;
@property(assign,readonly) double _titlesLastResortVerticalOffsetPhone;
@property(assign,readonly) double _transportControlsLastResortVerticalOffsetPhone;
@property(assign,readonly) double _volumeBottomVerticalInsetPhone;
@property(assign,retain) MPUApplicationDefaults * applicationDefaults;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } artworkFrame;
@property(assign,readonly) UIActionSheet * createActionSheet;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MPUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long orientation;
@property(getter=isShowingCreateLoadingIndicator,assign,readwrite) bool showingCreateLoadingIndicator;
@property(assign,readonly) MPUSkipLimitView * skipLimitView;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) UIView * titlesView;
@property(assign,readwrite) bool usesMiniProgressControl;

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
