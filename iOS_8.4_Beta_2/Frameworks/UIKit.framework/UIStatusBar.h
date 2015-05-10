/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver> {
    UIStatusBarBackgroundView *_backgroundView;
    NSString *_currentDoubleHeightText;
    struct { 
        bool itemIsEnabled[26]; 
        BOOL timeString[64]; 
        int gsmSignalStrengthRaw; 
        int gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceCrossfadeString[100]; 
        BOOL serviceImages[2][100]; 
        BOOL operatorDirectory[1024]; 
        unsigned int serviceContentType; 
        int wifiSignalStrengthRaw; 
        int wifiSignalStrengthBars; 
        unsigned int dataNetworkType; 
        int batteryCapacity; 
        unsigned int batteryState; 
        BOOL batteryDetailString[150]; 
        int bluetoothBatteryCapacity; 
        int thermalColor; 
        unsigned int thermalSunlightMode : 1; 
        unsigned int slowActivity : 1; 
        unsigned int syncActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
        unsigned int locationIconType : 1; 
        unsigned int quietModeInactive : 1; 
        unsigned int tetheringConnectionCount; 
    } _currentRawData;
    NSMutableSet *_disableRasterizationReasons;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    bool _foreground;
    UIColor *_foregroundColor;
    UIStatusBarForegroundView *_foregroundView;
    bool _hidden;
    bool _homeItemsDisabled;
    <UIStatusBarStateProvider> *_inProcessProvider;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIColor *_lastUsedBackgroundColor;
    long long _legibilityStyle;
    struct { bool x1[26]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { bool x_23_1_1[26]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; } *_localDataOverrides;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    long long _orientation;
    NSNumber *_overrideHeight;
    bool _persistentAnimationsEnabled;
    bool _registered;
    long long _requestedStyle;
    bool _serverUpdatesDisabled;
    bool _showOnlyCenterItems;
    bool _showsForeground;
    bool _simulatesLegacyAppearance;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarServer *_statusBarServer;
    UIStatusBarWindow *_statusBarWindow;
    UIStatusBarStyleAttributes *_styleAttributes;
    <UIStatusBarStyleDelegate> *_styleDelegate;
    int _styleOverrides;
    bool _suppressGlow;
    bool _suppressesHiddenSideEffects;
    UIColor *_tintColor;
    double _translucentBackgroundAlpha;
    bool _waitingOnCallbackAfterChangingStyleOverridesLocally;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UIColor * foregroundColor;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool homeItemsDisabled;
@property(assign,readwrite) long long legibilityStyle;
@property(assign,readwrite) bool persistentAnimationsEnabled;
@property(assign,readwrite) bool serverUpdatesDisabled;
@property(assign,readwrite) bool simulatesLegacyAppearance;
@property(assign,readwrite) UIStatusBarWindow * statusBarWindow;
@property(assign,readwrite) <UIStatusBarStyleDelegate> * styleDelegate;
@property(assign,readonly) int styleOverrides;
@property(assign,copy) UIStatusBarStyleRequest * styleRequest;
@property(assign,readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1 legacy:(bool)arg2;
+ (int)cornerStyleForRequestedStyle:(long long)arg1 effectiveStyle:(long long)arg2 alignment:(int)arg3;
+ (id)defaultBlueTintColor;
+ (long long)defaultStatusBarStyleWithTint:(bool)arg1;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(id)arg1;
+ (void)getData:(struct { bool x1[26]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg1 forRequestedData:(const struct { bool x1[26]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg2 withOverrides:(const struct { bool x1[26]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { bool x_23_1_1[26]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; }*)arg3;
+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (long long)lowBatteryLevel;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (void)setSuppressUpdateAnimations:(bool)arg1;
+ (void)setTintOverrideEnabled:(bool)arg1 withColor:(id)arg2;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;

- (void)_adjustDoubleHeightTextVisibility;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForAttributes:(id)arg1;
- (id)_backgroundView;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_clearOverrideHeight;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;
- (id)_currentComposedData;
- (id)_currentComposedDataForStyle:(id)arg1;
- (id)_currentStyleAttributes;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didEnterBackground:(id)arg1;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_evaluateServerRegistration;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (double)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_hiddenTransformForHideAnimationParameters:(id)arg1;
- (bool)_isTransparent;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(bool)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (long long)_requestedStyle;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(id)arg1;
- (void)_setOverrideHeight:(double)arg1;
- (void)_setStyle:(id)arg1;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldSeekHigherPriorityTouchTarget;
- (bool)_shouldUseInProcessProviderDoubleHeightStatusString;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_slideTransform;
- (double)_standardHeight;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
- (id)_styleAttributesForRequest:(id)arg1;
- (void)_styleOverridesDidChange:(id)arg1;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (bool)_touchShouldProduceReturnEvent;
- (void)_updateBackgroundFrame;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (void)_updateShouldRasterize;
- (void)_willEnterForeground:(id)arg1;
- (id)activeTintColor;
- (void)crossfadeTime:(bool)arg1 duration:(double)arg2;
- (id)currentDoubleHeightLabelText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentFrame;
- (double)currentHeight;
- (long long)currentStyle;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (void)dealloc;
- (double)defaultDoubleHeight;
- (double)defaultHeight;
- (void)didMoveToSuperview;
- (void)forceUpdateData:(bool)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateStyleOverrides:(bool)arg1;
- (void)forceUpdateToData:(const struct { bool x1[26]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg1 animated:(bool)arg2;
- (id)foregroundColor;
- (void)forgetEitherSideHistory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForOrientation:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (bool)homeItemsDisabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 inProcessStateProvider:(id)arg3;
- (bool)isDoubleHeight;
- (bool)isHidden;
- (bool)isTranslucent;
- (void)layoutSubviews;
- (long long)legibilityStyle;
- (void)noteStyleOverridesChangedLocally;
- (bool)persistentAnimationsEnabled;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)requestStyle:(long long)arg1;
- (void)requestStyle:(long long)arg1 animated:(bool)arg2;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;
- (bool)serverUpdatesDisabled;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setHomeItemsDisabled:(bool)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setLocalDataOverrides:(struct { bool x1[26]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; struct { bool x_23_1_1[26]; BOOL x_23_1_2[64]; int x_23_1_3; int x_23_1_4; BOOL x_23_1_5[100]; BOOL x_23_1_6[100]; BOOL x_23_1_7[2][100]; BOOL x_23_1_8[1024]; unsigned int x_23_1_9; int x_23_1_10; int x_23_1_11; unsigned int x_23_1_12; int x_23_1_13; unsigned int x_23_1_14; BOOL x_23_1_15[150]; int x_23_1_16; int x_23_1_17; unsigned int x_23_1_18 : 1; unsigned int x_23_1_19 : 1; unsigned int x_23_1_20 : 1; BOOL x_23_1_21[256]; unsigned int x_23_1_22 : 1; unsigned int x_23_1_23 : 1; unsigned int x_23_1_24 : 1; unsigned int x_23_1_25 : 1; unsigned int x_23_1_26 : 1; unsigned int x_23_1_27; } x23; }*)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(bool)arg1;
- (void)setServerUpdatesDisabled:(bool)arg1;
- (void)setShowsOnlyCenterItems:(bool)arg1;
- (void)setSimulatesLegacyAppearance:(bool)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setStyleRequest:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setSuppressesGlow:(bool)arg1;
- (void)setSuppressesHiddenSideEffects:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (bool)simulatesLegacyAppearance;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[26]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { bool x1[26]; BOOL x2[64]; int x3; int x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[2][100]; BOOL x8[1024]; unsigned int x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; BOOL x15[150]; int x16; int x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; BOOL x21[256]; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27; }*)arg2 withActions:(int)arg3;
- (id)statusBarWindow;
- (id)styleDelegate;
- (long long)styleForRequestedStyle:(long long)arg1;
- (int)styleOverrides;
- (id)styleRequest;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end