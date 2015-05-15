/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityLockupContainerCollectionViewCell : UICollectionViewCell <MusicEntityContentDescriptorViewConfiguring, MusicEntityHorizontalLockupViewDelegate, MusicEntityVerticalLockupViewDelegate, MusicEntityViewPlaybackStatusObserving> {
    UITraitCollection *_cachedTraitCollection;
    UIColor *_hairlineColor;
    UIView *_hairlineView;
    UIImageView *_highlightBackgroundView;
    bool _highlightBackgroundViewVisible;
    unsigned long long _highlightBackgroundVisibilityTransactionCount;
    MusicEntityVerticalLockupView *_lockupView;
    bool _showsHairline;
}

@property(assign,retain) MusicEntityViewContentDescriptor * contentDescriptor;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) <MusicEntityValueProviding> * entityValueProvider;
@property(assign,copy) UIColor * hairlineColor;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool showsHairline;
@property(assign,readonly) Class superclass;

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_layoutHairlineView;
- (id)_parentCollectionView;
- (void)_reloadHighlightImageViewAnimated:(bool)arg1;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (id)hairlineColor;
- (void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)horizontalLockupViewDidLayoutSubviews:(id)arg1;
- (void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2;
- (void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setEntityDisabled:(bool)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHairlineColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPlaybackStatus:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowsHairline:(bool)arg1;
- (bool)showsHairline;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;

@end
