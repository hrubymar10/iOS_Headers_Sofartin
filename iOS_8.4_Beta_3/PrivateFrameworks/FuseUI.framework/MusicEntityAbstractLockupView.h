/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityAbstractLockupView : UIView <MPUTextDrawingCacheInvalidationObserver, MusicArtworkViewDelegate, MusicEntityViewPlaybackStatusObserving> {
    bool _artworkConfigurationBlockEnabled;
    UIImage *_artworkOverrideImage;
    MusicArtworkView *_artworkView;
    UITraitCollection *_cachedTraitCollection;
    MusicEntityViewContentDescriptor *_contentDescriptor;
    MusicEntityPlaybackStatus *_currentPlaybackStatus;
    bool _entityDisabled;
    <MusicEntityValueProviding> *_entityValueProvider;
    bool _hasDirtyPlaybackStatusUpdate;
    bool _highlighted;
    double _lastUsedArtworkViewAspectRatio;
    MusicPlayButton *_playButton;
    double _playbackCurrentTimeOriginatingTime;
    MusicEntityPlaybackProgressApplier *_playbackProgressApplier;
    MusicEntityPlaybackStatus *_playbackStatus;
    NSMutableArray *_recycledTextButtons;
    NSMutableArray *_recycledTextDrawingViews;
    NSMapTable *_textDescriptorsToRecycledTextButtons;
    NSMapTable *_textDescriptorsToTextDrawingViews;
    bool _usingPlaceholderArt;
}

@property(getter=_currentTextLabelAlpha,assign,readonly) double _currentTextLabelAlpha;
@property(assign,retain) UIImage * artworkOverrideImage;
@property(getter=_artworkView,assign,readonly) UIImageView * artworkView;
@property(getter=_contentDescriptor,setter=_setContentDescriptor:,assign,retain) MusicEntityViewContentDescriptor * contentDescriptor;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isEntityDisabled,assign,readwrite) bool entityDisabled;
@property(assign,retain) <MusicEntityValueProviding> * entityValueProvider;
@property(assign,readonly) unsigned long long hash;
@property(getter=isHighlighted,assign,readonly) bool highlighted;
@property(getter=_playButton,assign,readonly) MusicPlayButton * playButton;
@property(assign,copy) MusicEntityPlaybackStatus * playbackStatus;
@property(assign,readonly) Class superclass;
@property(getter=isUsingPlaceholderArt,assign,readonly) bool usingPlaceholderArt;

+ (double)_maximumTextHeightForTextDescriptors:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_applyPlaybackStatus:(id)arg1;
- (id)_artworkView;
- (void)_artworkViewImageDidChange;
- (void)_configurePlayButtonForLayingOverArtworkRelativeToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_configurePlayButtonVisualProperties:(id)arg1;
- (id)_contentDescriptor;
- (void)_contentDescriptorDidChange:(id)arg1;
- (double)_currentTextLabelAlpha;
- (id)_effectiveArtworkBackgroundColor;
- (void)_entityDisabledDidChange;
- (void)_getViewToProposedFrameMap:(id*)arg1 withTextDescriptors:(id)arg2 availableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 totalInsetContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 totalTextHeight:(double*)arg5;
- (void)_handleArtworkImageUpdate:(id)arg1 idealArtworkSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_handleArtworkViewTapped;
- (void)_handleContentDescriptorDidInvalidate:(id)arg1;
- (void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1;
- (void)_layoutArtworkViewWithAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutDirection:(long long)arg2 usingBlock:(id)arg3;
- (void)_layoutPlayButtonUsingBlock:(id)arg1;
- (id)_playButton;
- (void)_playButtonTapped:(id)arg1;
- (void)_playbackStatusDidChange:(id)arg1;
- (void)_recycleTextViewsForTextDescriptors:(id)arg1;
- (void)_setContentDescriptor:(id)arg1;
- (bool)_shouldArtworkViewRespectHighlightProperty;
- (bool)_shouldEnableArtworkViewUserInteraction;
- (bool)_shouldShowPlayButton;
- (id)_viewForTextDescriptor:(id)arg1;
- (id)artworkOverrideImage;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)entityValueProvider;
- (bool)isEntityDisabled;
- (bool)isHighlighted;
- (bool)isUsingPlaceholderArt;
- (void)musicArtworkViewDidTouchUpInside:(id)arg1;
- (id)playbackStatus;
- (void)setArtworkOverrideImage:(id)arg1;
- (void)setEntityDisabled:(bool)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPlaybackStatus:(id)arg1;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;

@end
