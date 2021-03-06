/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityHorizontalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring, RUTrackDownloadViewDelegate> {
    MPUHalfTintedTransportButton *_addButton;
    RUTrackDownloadView *_buyButton;
    UIButton *_contextualActionsButton;
    <MusicEntityHorizontalLockupViewDelegate> *_delegate;
    struct { 
        unsigned int didSelectAddButton : 1; 
        unsigned int didSelectContextualActionsButton : 1; 
        unsigned int didSelectPlayButton : 1; 
        unsigned int didLayoutSubviews : 1; 
        unsigned int shouldLayoutAsEditing : 1; 
    } _delegateRespondsToSelector;
    UIImageView *_explicitBadgeImageView;
    MusicEntityViewHorizontalLockupContentDescriptor *_horizontalContentDescriptor;
    bool _isContainedWithinSplitViewPrimary;
    double _textContentLeftInset;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (nonatomic, readonly) UIButton *contextualActionsButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityHorizontalLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double textContentLeftInset;

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_addButtonTouchUpInside:(id)arg1;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
- (void)_entityDisabledDidChange;
- (void)_handleArtworkViewTapped;
- (void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1;
- (bool)_shouldLayoutAsEditing;
- (bool)_shouldShowPlayButton;
- (id)contentDescriptor;
- (id)contextualActionsButton;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setContentDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)textContentLeftInset;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
