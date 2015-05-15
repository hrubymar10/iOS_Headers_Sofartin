/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbar : UIView <UIBarPositioning, _UIBackdropViewGraphicsQualityChangeDelegate, _UIBarPositioningInternal, _UIShadowedView> {
    _UIBackdropView *_adaptiveBackdrop;
    id _appearanceStorage;
    NSString *_backdropViewLayerGroupName;
    UIImageView *_backgroundView;
    long long _barPosition;
    UIColor *_barTintColor;
    NSArray *_buttonItems;
    bool _centerTextButtons;
    bool _collapsed;
    long long _currentButtonGroup;
    id _delegate;
    double _extraEdgeInsets;
    struct __CFDictionary { } *_groups;
    bool _isAdaptiveToolbarDisabled;
    NSArray *_items;
    long long _pressedTag;
    UIView *_shadowView;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int mode : 2; 
        unsigned int wasEnabled : 1; 
        unsigned int downButtonSentAction : 1; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int backgroundLayoutNeedsUpdate : 1; 
        unsigned int hasCustomBackgroundView : 1; 
    } _toolbarFlags;
    bool _wantsLetterpressContent;
}

@property(getter=_isAdaptiveToolbarDisabled,setter=_setAdaptiveToolbarDisabled:,assign,readwrite) bool _adaptiveToolbarDisabled;
@property(getter=_isLocked,setter=_setLocked:,assign,readwrite) bool _locked;
@property(setter=_setShadowView:,assign,retain) UIView * _shadowView;
@property(setter=_setWantsLetterpressContent:,assign,readwrite) bool _wantsLetterpressContent;
@property(getter=_backdropViewLayerGroupName,setter=_setBackdropViewLayerGroupName:,assign,retain) NSString * backdropViewLayerGroupName;
@property(assign,readonly) long long barPosition;
@property(assign,readwrite) long long barStyle;
@property(assign,retain) UIColor * barTintColor;
@property(assign,readwrite) bool centerTextButtons;
@property(getter=isCollapsed,assign,readwrite) bool collapsed;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <UIToolbarDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * items;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIColor * tintColor;
@property(getter=isTranslucent,assign,readwrite) bool translucent;

+ (float)_buttonGap;
+ (Class)defaultButtonClass;
+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)arg1;
+ (double)defaultSelectionModeHeight;
+ (Class)defaultTextButtonClass;

- (id)_adaptiveBackdrop;
- (void)_adjustButtonPressed:(id)arg1;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (id)_backdropViewLayerGroupName;
- (id)_backgroundView;
- (long long)_barPosition;
- (void)_buttonBarFinishedAnimating;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (id)_buttonName:(id)arg1 withType:(int)arg2;
- (void)_buttonUp:(id)arg1;
- (id)_buttonWithDescription:(id)arg1;
- (void)_cleanupAdaptiveBackdrop;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentButtons;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(bool*)arg1;
- (id)_customToolbarAppearance;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (id)_descriptionForTag:(int)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (double)_edgeMarginForBorderedItem:(bool)arg1 isText:(bool)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (void)_finishButtonAnimation:(int)arg1 forButton:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(bool)arg1 wasMinibar:(bool)arg2;
- (void)_frameOrCenterChanged;
- (bool)_hasCustomAutolayoutNeighborSpacing;
- (bool)_hidesShadow;
- (bool)_isAdaptiveToolbarDisabled;
- (bool)_isInNavigationBar;
- (bool)_isLocked;
- (bool)_isTopBar_legacy;
- (void)_layoutBackgroundViewConsideringStatusBar;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(bool)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(bool)arg3 actuallyRepositionButtons:(bool)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAdaptiveToolbarDisabled:(bool)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setBarTintColor:(id)arg1 force:(bool)arg2;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setForceTopBarAppearance:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setLocked:(bool)arg1;
- (void)_setShadowView:(id)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setWantsLetterpressContent:(bool)arg1;
- (id)_shadowView;
- (void)_showButtons:(int*)arg1 withCount:(int)arg2 group:(int)arg3 withDuration:(double)arg4 adjustPositions:(bool)arg5 skipTag:(int)arg6;
- (bool)_subclassImplementsDrawRect;
- (unsigned long long)_subviewIndexAboveBackgroundView;
- (bool)_supportsAdaptiveBackground;
- (void)_updateBackgroundColor;
- (void)_updateBackgroundImage;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_updateOpacity;
- (void)_updateScriptingInfo:(id)arg1 view:(id)arg2;
- (bool)_wantsLetterpressContent;
- (void)addConstraint:(id)arg1;
- (void)animateToolbarItemIndex:(unsigned long long)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (id)barTintColor;
- (id)buttonItems;
- (bool)centerTextButtons;
- (id)createButtonWithDescription:(id)arg1;
- (int)currentButtonGroup;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)extraEdgeInsets;
- (void)getVisibleButtonTags:(int*)arg1 count:(unsigned int*)arg2 maxItems:(unsigned int)arg3;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isCollapsed;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isMinibar;
- (bool)isTranslucent;
- (id)itemWithTag:(long long)arg1;
- (id)items;
- (void)layoutSubviews;
- (int)mode;
- (bool)onStateForButton:(int)arg1;
- (void)positionButtons:(id)arg1 tags:(int*)arg2 count:(int)arg3 group:(int)arg4;
- (void)registerButtonGroup:(int)arg1 withButtons:(int*)arg2 withCount:(int)arg3;
- (void)removeConstraint:(id)arg1;
- (id)scriptingInfoWithChildren;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBadgeAnimated:(bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBarStyle:(long long)arg1;
- (void)setBarStyle:(long long)arg1 force:(bool)arg2;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCenterTextButtons:(bool)arg1;
- (void)setCollapsed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraEdgeInsets:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setMode:(int)arg1;
- (void)setOnStateForButton:(bool)arg1 forButton:(int)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)showButtons:(int*)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
