/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {
    unsigned long long _activeEffectsCount;
    unsigned long long _activeRemoteViewCount;
    double _defaultWindowLevel;
    unsigned long long _hostedUseCount;
    struct CGPoint { 
        double x; 
        double y; 
    } _hostedWindowOffset;
    bool _inDealloc;
    NSDictionary *_perScreenOptions;
    unsigned long long _windowLevelCount;
    double _windowLevelStack;
}

@property(assign,readonly) UIScreen * _intendedScreen;
@property(assign,readonly) NSDictionary * _options;
@property(assign,readonly) unsigned int contextID;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) double defaultWindowLevel;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hostedFrame;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } hostedWindowOffset;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool useHostedInstance;

+ (bool)_isSystemWindow;
+ (id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(bool)arg2 allowHosted:(bool)arg3 matchesStatusBarOrientationOnAccess:(bool)arg4;
+ (id)activeTextEffectsWindowForScreen:(id)arg1;
+ (void)lowerTextEffectsWindowsForHideNotificationCenter;
+ (void)raiseTextEffectsWindowsForShowNotificationCenter;
+ (void)releaseSharedInstances;
+ (id)sharedTextEffectsWindow;
+ (id)sharedTextEffectsWindowAboveStatusBar;
+ (id)sharedTextEffectsWindowForScreen:(id)arg1;

- (struct CGPoint { double x1; double x2; })_adjustPointForHostedDisplay:(struct CGPoint { double x1; double x2; })arg1 hasTarget:(bool)arg2 inset:(bool)arg3;
- (id)_basicInitWithScreen:(id)arg1 options:(id)arg2;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (bool)_canAffectStatusBarAppearance;
- (void)_configureContextOptions:(id)arg1;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (void)_didRemoveSubview:(id)arg1;
- (bool)_disableViewScaling;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_intendedScreen;
- (bool)_isTextEffectsWindow;
- (void)_matchDeviceOrientation;
- (bool)_matchingOptions:(id)arg1;
- (id)_options;
- (void)_restoreWindowLevel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneReferenceBounds;
- (void)_setWindowLevel:(double)arg1;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)_shouldParticipateInVirtualResizing;
- (bool)_shouldResizeWithScene;
- (bool)_shouldTintStatusBar;
- (void)_updateTransformLayerForClassicPresentation;
- (id)aboveStatusBarWindow;
- (void)applicationWindowRotated:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (struct CGPoint { double x1; double x2; })classicWindowPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)contextID;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromWindow:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromWindow:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toWindow:(id)arg2;
- (void)dealloc;
- (double)defaultWindowLevel;
- (void)delayHideWindow;
- (void)didAddSubview:(id)arg1;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hostedFrame;
- (struct CGPoint { double x1; double x2; })hostedWindowOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)interfaceOrientation;
- (bool)isInternalWindow;
- (struct CGPoint { double x1; double x2; })magnifierScreenPointForPoint:(struct CGPoint { double x1; double x2; })arg1 targetWindow:(id)arg2;
- (id)nonHostedWindow;
- (void)resetTransform;
- (void)sendSubviewToBack:(id)arg1;
- (void)setDefaultWindowLevel:(double)arg1;
- (void)setHostedWindowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseHostedInstance:(bool)arg1;
- (void)sortSubviews;
- (void)updateForOrientation:(long long)arg1;
- (void)updateForOrientation:(long long)arg1 forceResetTransform:(bool)arg2;
- (void)updateSubviewOrdering;
- (bool)useHostedInstance;

@end
