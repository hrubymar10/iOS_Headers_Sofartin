/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBackdropView : UIView {
    bool __backdropVisible;
    NSString *__blurQuality;
    double __blurRadius;
    double __saturationDeltaFactor;
    bool __zoomsBack;
    bool _allowsColorSettingsSuppression;
    double _appliesOutputSettingsAnimationDuration;
    bool _appliesOutputSettingsAutomatically;
    bool _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
    bool _applySettingsAfterLayout;
    bool _applyingBackdropChanges;
    bool _applyingTransition;
    bool _autosizesToFitSuperview;
    _UIBackdropEffectView *_backdropEffectView;
    bool _backdropVisibilitySetOnce;
    long long _blurHardEdges;
    bool _blurRadiusSetOnce;
    bool _blursBackground;
    UIImage *_colorBurnTintMaskImage;
    UIView *_colorBurnTintMaskViewContainer;
    NSMutableDictionary *_colorBurnTintMaskViewMap;
    UIView *_colorBurnTintView;
    UIColor *_colorMatrixColorTint;
    double _colorMatrixColorTintAlpha;
    double _colorMatrixGrayscaleTintAlpha;
    double _colorMatrixGrayscaleTintLevel;
    CAFilter *_colorSaturateFilter;
    UIImage *_colorTintMaskImage;
    UIView *_colorTintMaskViewContainer;
    NSMutableDictionary *_colorTintMaskViewMap;
    UIView *_colorTintView;
    id _computeAndApplySettingsNotificationObserver;
    bool _computesColorSettings;
    long long _configuration;
    UIView *_contentView;
    bool _contentViewAccessed;
    bool _contentViewAccessorGuard;
    UIImage *_darkeningTintMaskImage;
    UIView *_darkeningTintMaskViewContainer;
    NSMutableDictionary *_darkeningTintMaskViewMap;
    UIView *_darkeningTintView;
    bool _disablesOccludedBackdropBlurs;
    UIImage *_filterMaskImage;
    UIView *_filterMaskViewContainer;
    NSMutableDictionary *_filterMaskViewMap;
    CAFilter *_gaussianBlurFilter;
    <_UIBackdropViewGraphicsQualityChangeDelegate> *_graphicsQualityChangeDelegate;
    UIImage *_grayscaleTintMaskImage;
    UIView *_grayscaleTintMaskViewContainer;
    NSMutableDictionary *_grayscaleTintMaskViewMap;
    UIView *_grayscaleTintView;
    NSString *_groupName;
    _UIBackdropViewSettings *_inputSettings;
    long long _maskMode;
    <_UIBackdropViewObserver> *_observer;
    NSHashTable *_observers;
    _UIBackdropViewSettings *_outputSettings;
    NSMutableSet *_partialMaskViews;
    double _previousBackdropStatisticsBlue;
    double _previousBackdropStatisticsContrast;
    double _previousBackdropStatisticsGreen;
    double _previousBackdropStatisticsRed;
    bool _requiresTintViews;
    _UIBackdropViewSettings *_savedInputSettingsDuringRenderInContext;
    bool _simulatesMasks;
    long long _style;
    CAFilter *_tintFilter;
    struct __CFRunLoopObserver { } *_updateInputBoundsRunLoopObserver;
    bool _updateMaskViewsForViewReentrancyGuard;
    bool _wantsColorSettings;
}

@property (nonatomic) bool _backdropVisible;
@property (nonatomic, copy) NSString *_blurQuality;
@property (nonatomic) double _blurRadius;
@property (nonatomic) double _saturationDeltaFactor;
@property (setter=setZoomsBack:, nonatomic) bool _zoomsBack;
@property (nonatomic) bool allowsColorSettingsSuppression;
@property (nonatomic) double appliesOutputSettingsAnimationDuration;
@property (nonatomic) bool appliesOutputSettingsAutomatically;
@property (nonatomic) bool appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
@property (nonatomic) bool applySettingsAfterLayout;
@property (nonatomic) bool applyingBackdropChanges;
@property (nonatomic) bool applyingTransition;
@property (nonatomic) bool autosizesToFitSuperview;
@property (nonatomic, retain) _UIBackdropEffectView *backdropEffectView;
@property (nonatomic) bool backdropVisibilitySetOnce;
@property (nonatomic) long long blurHardEdges;
@property (nonatomic) bool blurRadiusSetOnce;
@property (nonatomic) bool blursBackground;
@property (nonatomic, retain) UIImage *colorBurnTintMaskImage;
@property (nonatomic, retain) UIView *colorBurnTintMaskViewContainer;
@property (nonatomic, retain) NSMutableDictionary *colorBurnTintMaskViewMap;
@property (nonatomic, retain) UIView *colorBurnTintView;
@property (nonatomic, retain) UIColor *colorMatrixColorTint;
@property (nonatomic) double colorMatrixColorTintAlpha;
@property (nonatomic) double colorMatrixGrayscaleTintAlpha;
@property (nonatomic) double colorMatrixGrayscaleTintLevel;
@property (nonatomic, retain) CAFilter *colorSaturateFilter;
@property (nonatomic, retain) UIImage *colorTintMaskImage;
@property (nonatomic, retain) UIView *colorTintMaskViewContainer;
@property (nonatomic, retain) NSMutableDictionary *colorTintMaskViewMap;
@property (nonatomic, retain) UIView *colorTintView;
@property (nonatomic, retain) id computeAndApplySettingsNotificationObserver;
@property (nonatomic) bool computesColorSettings;
@property (nonatomic) long long configuration;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool contentViewAccessed;
@property (nonatomic) bool contentViewAccessorGuard;
@property (nonatomic, retain) UIImage *darkeningTintMaskImage;
@property (nonatomic, retain) UIView *darkeningTintMaskViewContainer;
@property (nonatomic, retain) NSMutableDictionary *darkeningTintMaskViewMap;
@property (nonatomic, retain) UIView *darkeningTintView;
@property (nonatomic) bool disablesOccludedBackdropBlurs;
@property (nonatomic, readonly) UIView *effectView;
@property (nonatomic, retain) UIImage *filterMaskImage;
@property (nonatomic, retain) UIView *filterMaskViewContainer;
@property (nonatomic, retain) NSMutableDictionary *filterMaskViewMap;
@property (nonatomic, retain) CAFilter *gaussianBlurFilter;
@property (nonatomic) <_UIBackdropViewGraphicsQualityChangeDelegate> *graphicsQualityChangeDelegate;
@property (nonatomic, retain) UIImage *grayscaleTintMaskImage;
@property (nonatomic, retain) UIView *grayscaleTintMaskViewContainer;
@property (nonatomic, retain) NSMutableDictionary *grayscaleTintMaskViewMap;
@property (nonatomic, retain) UIView *grayscaleTintView;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) _UIBackdropViewSettings *inputSettings;
@property (nonatomic) long long maskMode;
@property (nonatomic) <_UIBackdropViewObserver> *observer;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) _UIBackdropViewSettings *outputSettings;
@property (nonatomic, retain) NSMutableSet *partialMaskViews;
@property (nonatomic) double previousBackdropStatisticsBlue;
@property (nonatomic) double previousBackdropStatisticsContrast;
@property (nonatomic) double previousBackdropStatisticsGreen;
@property (nonatomic) double previousBackdropStatisticsRed;
@property (nonatomic) bool requiresTintViews;
@property (nonatomic, retain) _UIBackdropViewSettings *savedInputSettingsDuringRenderInContext;
@property (nonatomic) bool simulatesMasks;
@property (nonatomic) long long style;
@property (nonatomic, retain) CAFilter *tintFilter;
@property (nonatomic) struct __CFRunLoopObserver { }*updateInputBoundsRunLoopObserver;
@property (nonatomic) bool updateMaskViewsForViewReentrancyGuard;
@property (nonatomic) bool wantsColorSettings;

+ (void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1;
+ (id)allBackdropViews;
+ (Class)defaultSettingsClass;
+ (Class)layerClass;
+ (void)restoreColorSettingsForDidBecomeActive:(id)arg1;
+ (void)restoreColorSettingsForRequester:(id)arg1;
+ (void)restoreColorSettingsForRunLoopModePop:(id)arg1;
+ (void)setAllBackdropViewsToGraphicsQuality:(long long)arg1;
+ (void)suppressColorSettingsForRequester:(id)arg1;
+ (void)suppressColorSettingsForRunLoopModePush:(id)arg1;
+ (void)suppressColorSettingsForWillResignActive:(id)arg1;

- (bool)_backdropVisible;
- (id)_blurQuality;
- (double)_blurRadius;
- (double)_saturationDeltaFactor;
- (void)_setBlursBackground:(bool)arg1;
- (void)_updateFilters;
- (void)_updateInputBounds;
- (bool)_zoomsBack;
- (void)addBackdropEffectViewIfNeededForSettings:(id)arg1;
- (void)addColorBurnTintViewIfNeededForSettings:(id)arg1;
- (void)addColorTintViewIfNeededForSettings:(id)arg1;
- (void)addContentViewIfNeededForSettings:(id)arg1;
- (void)addDarkeningTintViewIfNeededForSettings:(id)arg1;
- (void)addGrayscaleTintViewIfNeededForSettings:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)adjustTintImplementationIfNeeded:(id)arg1;
- (bool)allowsColorSettingsSuppression;
- (double)appliesOutputSettingsAnimationDuration;
- (bool)appliesOutputSettingsAutomatically;
- (bool)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
- (void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2;
- (void)applyOverlayBlendModeToView:(id)arg1;
- (void)applySettings:(id)arg1;
- (bool)applySettingsAfterLayout;
- (void)applySettingsWithBuiltInAnimation:(id)arg1;
- (bool)applyingBackdropChanges;
- (bool)applyingTransition;
- (bool)autosizesToFitSuperview;
- (id)backdropEffectView;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)backdropViewLayer;
- (bool)backdropVisibilitySetOnce;
- (long long)blurHardEdges;
- (id)blurQuality;
- (double)blurRadius;
- (bool)blurRadiusSetOnce;
- (bool)blursBackground;
- (bool)blursWithHardEdges;
- (void)clearUpdateInputBoundsRunLoopObserver;
- (id)colorBurnTintMaskImage;
- (id)colorBurnTintMaskViewContainer;
- (id)colorBurnTintMaskViewMap;
- (id)colorBurnTintView;
- (id)colorMatrixColorTint;
- (double)colorMatrixColorTintAlpha;
- (double)colorMatrixGrayscaleTintAlpha;
- (double)colorMatrixGrayscaleTintLevel;
- (id)colorSaturateFilter;
- (id)colorTintMaskImage;
- (id)colorTintMaskViewContainer;
- (id)colorTintMaskViewMap;
- (id)colorTintView;
- (void)computeAndApplySettings:(id)arg1;
- (void)computeAndApplySettingsForTransition;
- (id)computeAndApplySettingsNotificationObserver;
- (bool)computesColorSettings;
- (long long)configuration;
- (id)contentView;
- (bool)contentViewAccessed;
- (bool)contentViewAccessorGuard;
- (id)darkeningTintMaskImage;
- (id)darkeningTintMaskViewContainer;
- (id)darkeningTintMaskViewMap;
- (id)darkeningTintView;
- (void)dealloc;
- (void)delayedComputeAndApplySettings;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (void)didMoveToSuperview;
- (bool)disablesOccludedBackdropBlurs;
- (id)effectView;
- (void)ensureProperSubviewOrdering;
- (id)filterMaskImage;
- (id)filterMaskViewContainer;
- (id)filterMaskViewMap;
- (id)filters;
- (id)gaussianBlurFilter;
- (id)graphicsQualityChangeDelegate;
- (id)grayscaleTintMaskImage;
- (id)grayscaleTintMaskViewContainer;
- (id)grayscaleTintMaskViewMap;
- (id)grayscaleTintView;
- (id)groupName;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 autosizesToFitSuperview:(bool)arg2 settings:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 privateStyle:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)initWithPrivateStyle:(long long)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)inputSettings;
- (bool)isBackdropVisible;
- (void)layoutSubviews;
- (long long)maskMode;
- (id)observer;
- (id)observers;
- (id)outputSettings;
- (id)partialMaskViews;
- (void)prepareForTransitionToSettings:(id)arg1;
- (double)previousBackdropStatisticsBlue;
- (double)previousBackdropStatisticsContrast;
- (double)previousBackdropStatisticsGreen;
- (double)previousBackdropStatisticsRed;
- (void)removeMaskViews;
- (void)removeObserver:(id)arg1;
- (void)removeOverlayBlendModeFromView:(id)arg1;
- (bool)requiresTintViews;
- (double)saturationDeltaFactor;
- (id)savedInputSettingsDuringRenderInContext;
- (void)scheduleUpdateInputBoundsIfNeeded;
- (void)setAllowsColorSettingsSuppression:(bool)arg1;
- (void)setAppliesOutputSettingsAnimationDuration:(double)arg1;
- (void)setAppliesOutputSettingsAutomatically:(bool)arg1;
- (void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(bool)arg1;
- (void)setApplySettingsAfterLayout:(bool)arg1;
- (void)setApplyingBackdropChanges:(bool)arg1;
- (void)setApplyingTransition:(bool)arg1;
- (void)setAutosizesToFitSuperview:(bool)arg1;
- (void)setBackdropEffectView:(id)arg1;
- (void)setBackdropVisibilitySetOnce:(bool)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2;
- (void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 blurHardEdges:(long long)arg3;
- (void)setBlurHardEdges:(long long)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setBlurRadiusSetOnce:(bool)arg1;
- (void)setBlursBackground:(bool)arg1;
- (void)setBlursWithHardEdges:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (void)setColorBurnTintMaskViewContainer:(id)arg1;
- (void)setColorBurnTintMaskViewMap:(id)arg1;
- (void)setColorBurnTintView:(id)arg1;
- (void)setColorMatrixColorTint:(id)arg1;
- (void)setColorMatrixColorTintAlpha:(double)arg1;
- (void)setColorMatrixGrayscaleTintAlpha:(double)arg1;
- (void)setColorMatrixGrayscaleTintLevel:(double)arg1;
- (void)setColorSaturateFilter:(id)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setColorTintMaskViewContainer:(id)arg1;
- (void)setColorTintMaskViewMap:(id)arg1;
- (void)setColorTintView:(id)arg1;
- (void)setComputeAndApplySettingsNotificationObserver:(id)arg1;
- (void)setComputesColorSettings:(bool)arg1;
- (void)setConfiguration:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewAccessed:(bool)arg1;
- (void)setContentViewAccessorGuard:(bool)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)setDarkeningTintMaskViewContainer:(id)arg1;
- (void)setDarkeningTintMaskViewMap:(id)arg1;
- (void)setDarkeningTintView:(id)arg1;
- (void)setDisablesOccludedBackdropBlurs:(bool)arg1;
- (void)setFilterMaskImage:(id)arg1;
- (void)setFilterMaskViewContainer:(id)arg1;
- (void)setFilterMaskViewMap:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGaussianBlurFilter:(id)arg1;
- (void)setGraphicsQualityChangeDelegate:(id)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setGrayscaleTintMaskViewContainer:(id)arg1;
- (void)setGrayscaleTintMaskViewMap:(id)arg1;
- (void)setGrayscaleTintView:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setInputSettings:(id)arg1;
- (void)setMaskImage:(id)arg1 onLayer:(id)arg2;
- (void)setMaskMode:(long long)arg1;
- (void)setObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPartialMaskViews:(id)arg1;
- (void)setPreviousBackdropStatisticsBlue:(double)arg1;
- (void)setPreviousBackdropStatisticsContrast:(double)arg1;
- (void)setPreviousBackdropStatisticsGreen:(double)arg1;
- (void)setPreviousBackdropStatisticsRed:(double)arg1;
- (void)setRequiresTintViews:(bool)arg1;
- (void)setSaturationDeltaFactor:(double)arg1;
- (void)setSavedInputSettingsDuringRenderInContext:(id)arg1;
- (void)setShouldRasterizeEffectsView:(bool)arg1;
- (void)setSimulatesMasks:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintFilter:(id)arg1;
- (void)setTintFilterForSettings:(id)arg1;
- (void)setUpdateInputBoundsRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (void)setUpdateMaskViewsForViewReentrancyGuard:(bool)arg1;
- (void)setUsesZoom;
- (void)setWantsColorSettings:(bool)arg1;
- (void)setZoomsBack:(bool)arg1;
- (void)set_backdropVisible:(bool)arg1;
- (void)set_blurQuality:(id)arg1;
- (void)set_blurRadius:(double)arg1;
- (void)set_saturationDeltaFactor:(double)arg1;
- (void)settingsDidChange:(id)arg1;
- (bool)simulatesMasks;
- (long long)style;
- (id)tintFilter;
- (void)transitionComplete;
- (void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;
- (void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2;
- (void)transitionToColor:(id)arg1;
- (void)transitionToPrivateStyle:(long long)arg1;
- (void)transitionToSettings:(id)arg1;
- (void)transitionToStyle:(long long)arg1;
- (struct __CFRunLoopObserver { }*)updateInputBoundsRunLoopObserver;
- (void)updateMaskViewForView:(id)arg1 flag:(long long)arg2;
- (void)updateMaskViewsForView:(id)arg1;
- (bool)updateMaskViewsForViewReentrancyGuard;
- (void)updateSubviewHierarchyIfNeededForSettings:(id)arg1;
- (bool)wantsColorSettings;
- (void)willCallRenderInContextOnBackdropViewLayer;

@end
