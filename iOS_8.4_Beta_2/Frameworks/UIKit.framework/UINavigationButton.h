/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } __additionalSelectionInsets;
    bool __barItemHidden;
    Class _appearanceGuideClass;
    id _appearanceStorage;
    long long _barStyle;
    struct CGSize { 
        double width; 
        double height; 
    } _boundsAdjustment;
    long long _buttonItemStyle;
    bool _createdByBarButtonItem;
    double _fontScaleAdjustment;
    bool _isFontScaleInvalid;
    double _maximumWidth;
    double _minimumWidth;
    UIColor *_navigationBarTintColor;
    UIBarButtonItem *_originatingButtonItem;
    UINavigationItem *_originatingNavigationItem;
    NSSet *_possibleSystemItems;
    NSSet *_possibleTitles;
    unsigned int _size;
    int _style;
    NSDictionary *_stylesForSizingTitles;
    bool _wantsBlendModeForAccessibilityBackgrounds;
    unsigned int _wantsLetterpressContent;
}

@property(setter=_setAdditionalSelectionInsets:,assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _additionalSelectionInsets;
@property(setter=_setAppearanceGuideClass:,assign,readwrite) Class _appearanceGuideClass;
@property(setter=_setBarItemHidden:,assign,readwrite) bool _barItemHidden;
@property(setter=_setButtonItemStyle:,assign,readwrite) long long _buttonItemStyle;
@property(setter=_setCreatedByBarButtonItem:,assign,readwrite) bool _createdByBarButtonItem;
@property(setter=_setFontScaleAdjustment:,assign,readwrite) double _fontScaleAdjustment;
@property(setter=_setFontScaleInvalid:,assign,readwrite) bool _isFontScaleInvalid;
@property(setter=_setStylesForSizingTitles:,assign,copy) NSDictionary * _stylesForSizingTitles;
@property(setter=_setWantsBlendModeForAccessibilityBackgrounds:,assign,readwrite) bool _wantsBlendModeForAccessibilityBackgrounds;
@property(assign,readwrite) long long barStyle;
@property(assign,readwrite) int controlSize;
@property(assign,retain) UIImage * image;
@property(assign,readwrite) double maximumWidth;
@property(assign,readwrite) double minimumWidth;
@property(assign,readwrite) UIBarButtonItem * originatingButtonItem;
@property(assign,readwrite) UINavigationItem * originatingNavigationItem;
@property(assign,readwrite) int style;
@property(assign,retain) UIColor * tintColor;
@property(assign,retain) NSString * title;

+ (void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(bool)arg3 withAccessibilityBackground:(bool)arg4 wantsBlendModeForAccessibilityBackgrounds:(bool)arg5;
+ (id)defaultFont;

- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTintColor:(id)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_additionalSelectionInsets;
- (void)_adjustBounds;
- (id)_adjustedDefaultTitleFont;
- (Class)_appearanceGuideClass;
- (id)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;
- (id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (long long)_barButtonItemStyle;
- (bool)_barItemHidden;
- (long long)_buttonItemStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_buttonTitleEdgeInsets;
- (bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_createdByBarButtonItem;
- (id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3;
- (id)_defaultTitleColorForState:(unsigned long long)arg1;
- (id)_defaultTitleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_defaultTitleShadowOffsetForState:(unsigned long long)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_externalUnfocusedBorderColor;
- (double)_fontScaleAdjustment;
- (bool)_hasBaselineAlignedAbsoluteVerticalPosition:(out double*)arg1 withinNavBar:(id)arg2 forSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isExternalRoundedRectButton;
- (bool)_isFontScaleInvalid;
- (bool)_isModernButton;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathTitleEdgeInsets;
- (void)_prepareToAppearInNavigationItem:(id)arg1 onLeft:(bool)arg2;
- (id)_scriptingInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAdditionalSelectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setAppearanceGuideClass:(Class)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBarItemHidden:(bool)arg1;
- (void)_setBoundsAdjustment:(struct CGSize { double x1; double x2; })arg1;
- (void)_setButtonItemStyle:(long long)arg1;
- (void)_setCreatedByBarButtonItem:(bool)arg1;
- (void)_setFontScaleAdjustment:(double)arg1;
- (void)_setFontScaleInvalid:(bool)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deferLayout:(bool)arg2;
- (void)_setStylesForSizingTitles:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleFrozen:(bool)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1;
- (void)_setWantsLetterpressContent;
- (bool)_showsAccessibilityBackgroundWhenEnabled;
- (id)_stylesForSizingTitles;
- (id)_tintColor;
- (struct UIOffset { double x1; double x2; })_titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_titleTextAttributesForState:(unsigned long long)arg1;
- (void)_updateContentInsets;
- (void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateStyle;
- (void)_updateTitleColorsForState:(unsigned long long)arg1;
- (void)_updateTitleForLetterpress;
- (bool)_wantsAccessibilityButtonShapes;
- (bool)_wantsBlendModeForAccessibilityBackgrounds;
- (long long)barStyle;
- (bool)canBecomeFocused;
- (bool)contentsEqualTo:(id)arg1 withStyle:(int)arg2;
- (int)controlSize;
- (void)dealloc;
- (id)image;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 style:(int)arg2;
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3;
- (id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(bool)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3;
- (id)initWithTitle:(id)arg1 style:(int)arg2;
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(bool)arg8 forButtonItemStyle:(long long)arg9;
- (id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6;
- (void)layoutSubviews;
- (double)maximumWidth;
- (double)minimumWidth;
- (id)originatingButtonItem;
- (id)originatingNavigationItem;
- (void)setBarStyle:(long long)arg1;
- (void)setControlSize:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setNavigationBarTintColor:(id)arg1;
- (void)setOriginatingButtonItem:(id)arg1;
- (void)setOriginatingNavigationItem:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (int)style;
- (id)title;

@end