/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarButton : UIControl {
    Class _appearanceGuideClass;
    _UIBadgeView *_badge;
    bool _badgeAnimated;
    bool _barHeight;
    NSMutableDictionary *_buttonTintColorsForState;
    bool _centerAllContents;
    NSMutableDictionary *_contentTintColorsForState;
    UIImage *_customSelectedIndicatorImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _hitRect;
    UIView *_info;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _infoInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _infoOffset;
    UITabBarButtonLabel *_label;
    NSValue *_labelOffsetValue;
    bool _selected;
    UITabBarSelectionIndicatorView *_selectedIndicator;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _selectedInfoOffset;
    bool _showsHighlightedState;
    UIColor *_unselectedTintColor;
    UIVisualEffectView *_vibrancyEffectView;
}

@property(setter=_setAppearanceGuideClass:,assign,readwrite) Class _appearanceGuideClass;
@property(setter=_setCenterAllContents:,assign,readwrite) bool _centerAllContents;
@property(getter=_isSelected,setter=_setSelected:,assign,readwrite) bool _selected;
@property(setter=_setShowsHighlightedState:,assign,readwrite) bool _showsHighlightedState;
@property(assign,retain) NSValue * labelOffsetValue;
@property(assign,readonly) UITabBarButtonLabel * tabBarButtonLabel;
@property(getter=_unselectedTintColor,setter=_setUnselectedTintColor:,assign,retain) UIColor * unselectedTintColor;

+ (id)_defaultLabelColor;

- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (Class)_appearanceGuideClass;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_buttonTintColorForState:(unsigned long long)arg1;
- (bool)_centerAllContents;
- (id)_contentTintColorForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSelectedIndicator;
- (bool)_isSelected;
- (void)_positionBadge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_scriptingInfo;
- (id)_selectedIndicatorView;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBadgeAnimated:(bool)arg1;
- (void)_setBadgeValue:(id)arg1;
- (void)_setBarHeight:(float)arg1;
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setCenterAllContents:(bool)arg1;
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setCustomSelectedIndicatorImage:(id)arg1;
- (void)_setInfoOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setLabelHidden:(bool)arg1;
- (void)_setSelected:(bool)arg1;
- (void)_setSelectedInfoOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setShowsHighlightedState:(bool)arg1;
- (void)_setTabBarHitRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUnselectedTintColor:(id)arg1;
- (void)_setUnselectedTintColor:(id)arg1 forceLabelToConform:(bool)arg2;
- (void)_setUpSelectedIndicatorViewIfNeeded;
- (void)_showSelectedIndicator:(bool)arg1 changeSelection:(bool)arg2;
- (bool)_showsHighlightedState;
- (id)_swappableImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tabBarHitRect;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustment;
- (id)_unselectedTintColor;
- (void)_updateInfoFrame;
- (void)_updateSelectedIndicatorView;
- (void)_updateToMatchCurrentState;
- (bool)_useBarHeight;
- (bool)canBecomeFocused;
- (void)dealloc;
- (void)focusedViewDidChange;
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (id)labelOffsetValue;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setLabelOffsetValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tabBarButtonLabel;

@end
