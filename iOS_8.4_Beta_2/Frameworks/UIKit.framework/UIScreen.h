/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreen : NSObject <UICoordinateSpace, UIFocusContainer, UITraitEnvironment, _UITraitEnvironmentInternal> {
    UIWindow<UIFocusContainer> *__focusedWindow;
    NSArray *_availableDisplayModes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _bounds;
    NSDictionary *_capabilities;
    UITraitCollection *_defaultTraitCollection;
    id _display;
    _UIScreenTransparentHitTestWindow *_extendedJailHitTestWindow;
    FBSDisplay *_fbsDisplay;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    <UIFocusContainer> *_focusedItem;
    double _horizontalScale;
    long long _interfaceOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _interfaceOrientedBounds;
    struct CGPoint { 
        double x; 
        double y; 
    } _jailOffset;
    long long _jailOrientation;
    double _jailScale;
    struct CGSize { 
        double width; 
        double height; 
    } _jailSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _jailTouchInsets;
    bool _jailUsesHitTestWindow;
    long long _lastNotifiedBacklightLevel;
    UITraitCollection *_lastNotifiedTraitCollection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _mainSceneReferenceBounds;
    UITraitCollection *_overrideTraitCollection;
    NSMutableArray *_pausedWindows;
    double _pointsPerInch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _referenceBounds;
    double _scale;
    UIWindow *_screenDisablingWindow;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int screenUpdatesDisabled : 1; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int screenCreatedFBSDisplay : 1; 
    } _screenFlags;
    UISoftwareDimmingWindow *_softwareDimmingWindow;
    double _startedPausingWindows;
    double _touchScaleFactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _unjailedReferenceBounds;
    long long _userInterfaceIdiom;
    bool _wantsSoftwareDimming;
}

@property(setter=_setFocusedWindow:,assign,readwrite) UIWindow<UIFocusContainer> * _focusedWindow;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _gkBounds;
@property(assign,readonly) double _gkScale;
@property(setter=_setInterfaceOrientation:,assign,readwrite) long long _interfaceOrientation;
@property(setter=_setLastNotifiedBacklightLevel:,assign,readwrite) long long _lastNotifiedBacklightLevel;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _referenceBounds;
@property(setter=_setSoftwareDimmingWindow:,assign,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;
@property(getter=_unjailedReferenceBounds,assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _unjailedReferenceBounds;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property(assign,copy) NSArray * availableModes;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(assign,readwrite) double brightness;
@property(assign,readonly) <UICoordinateSpace> * coordinateSpace;
@property(assign,retain) UIScreenMode * currentMode;
@property(assign,copy) NSString * debugDescription;
@property(getter=_defaultTraitCollection,setter=_setDefaultTraitCollection:,assign,readwrite) UITraitCollection * defaultTraitCollection;
@property(assign,copy) NSString * description;
@property(assign,retain) FBSDisplay * fbsDisplay;
@property(assign,readonly) <UICoordinateSpace> * fixedCoordinateSpace;
@property(assign,readonly) <UIFocusContainer> * focusedItem;
@property(assign,readonly) UIView * focusedView;
@property(assign,readonly) unsigned long long hash;
@property(getter=_jailOffset,setter=_setJailOffset:,assign,readwrite) struct CGPoint { double x1; double x2; } jailOffset;
@property(getter=_jailOrientation,setter=_setJailOrientation:,assign,readwrite) long long jailOrientation;
@property(getter=_jailScale,setter=_setJailScale:,assign,readwrite) double jailScale;
@property(getter=_jailSize,setter=_setJailSize:,assign,readwrite) struct CGSize { double x1; double x2; } jailSize;
@property(getter=_jailTouchInsets,setter=_setJailTouchInsets:,assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } jailTouchInsets;
@property(getter=_jailUsesHitTestWindow,setter=_setJailUsesHitTestWindow:,assign,readwrite) bool jailUsesHitTestWindow;
@property(getter=_lastNotifiedTraitCollection,setter=_setLastNotifiedTraitCollection:,assign,retain) UITraitCollection * lastNotifiedTraitCollection;
@property(assign,retain) UIScreen * mirroredScreen;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nativeBounds;
@property(assign,readonly) double nativeScale;
@property(getter=_overrideTraitCollection,setter=_setOverrideTraitCollection:,assign,readwrite) UITraitCollection * overrideTraitCollection;
@property(assign,readwrite) long long overscanCompensation;
@property(assign,readonly) <UIFocusContainer> * preferredFocusedItem;
@property(assign,retain) UIScreenMode * preferredMode;
@property(assign,readonly) double scale;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool supportsFocus;
@property(assign,readonly) UITraitCollection * traitCollection;
@property(assign,readwrite) bool wantsSoftwareDimming;

+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(bool)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (id)__availableScenes;
+ (id)__connectedFBSDisplays;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__sceneTrackingQueue;
+ (void)_beginDisableScreenUpdatesForSnapshot;
+ (void)_beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(bool)arg1;
+ (id)_carScreen;
+ (void)_endDisableScreenUpdates;
+ (void)_enumerateScreensWithBlock:(id)arg1;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (bool)_shouldDisableJail;
+ (void)_videoOutSettingsChanged;
+ (id)_watchScreen;
+ (id)_workspaceCapableScreens;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)sbs_launchImageInfoPlistKeyModifier:(long long)arg1;
+ (id)sbs_screenTypes;
+ (id)sbs_snapshotImagePathComponent:(long long)arg1;
+ (id)screens;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForScreenOriginRotation:(double)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToRotateScreen:(double)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (bool)_areBoundsJailed;
- (bool)_areListsLimited;
- (bool)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsInPixels;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_computeMetrics;
- (void)_connectScreen;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (void)_disableScreenUpdates:(bool)arg1;
- (void)_disconnectScreen;
- (id)_display;
- (id)_displayID;
- (void)_enableScreenUpdates;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureConnectedIfPossible;
- (void)_enumerateWindowsWithBlock:(id)arg1;
- (id)_focusedWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkBounds;
- (double)_gkScale;
- (bool)_hasStatusBar;
- (bool)_hasWindows;
- (double)_horizontalPixelScale;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (long long)_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_interfaceOrientedBounds;
- (bool)_isCarScreen;
- (bool)_isDisplayPointWithinExtendedJailBounds:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isExternal;
- (bool)_isMainScreen;
- (bool)_isOverscanned;
- (bool)_isRightHandDrive;
- (bool)_isRotatable;
- (bool)_isUIElementLimited:(id)arg1;
- (bool)_isWorkspaceCapable;
- (struct CGPoint { double x1; double x2; })_jailOffset;
- (long long)_jailOrientation;
- (double)_jailScale;
- (struct CGSize { double x1; double x2; })_jailSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_jailTouchInsets;
- (bool)_jailUsesHitTestWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_jailedBoundsEdgeInsets;
- (long long)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (id)_mapkit_display;
- (id)_name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nativeDisplayBounds;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (id)_overrideTraitCollection;
- (bool)_overscanAdjustmentNeedsUpdate;
- (double)_pointsPerInch;
- (struct CGPoint { double x1; double x2; })_positionForWindowTransformLayerInJail:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_positionForWindowTransformLayerInJail:(bool)arg1 offsetByScreenJail:(bool)arg2;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (void)_prepareForWindow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawJailedBoundsEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_realDisplayBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (double)_rotation;
- (double)_scale;
- (unsigned int)_seed;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setExternalDeviceShouldInputText:(bool)arg1;
- (void)_setFocusedItem:(id)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setJailOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setJailOrientation:(long long)arg1;
- (void)_setJailScale:(double)arg1;
- (void)_setJailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setJailTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setJailUsesHitTestWindow:(bool)arg1;
- (void)_setLastNotifiedBacklightLevel:(long long)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setMainSceneReferenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 computingMetricsIfNecessary:(bool)arg2;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setScale:(double)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setSpeed:(double)arg1 forWindow:(id)arg2;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (bool)_supportsBrightness;
- (double)_touchScaleFactor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBounds;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(bool)arg1;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (long long)_userInterfaceIdiom;
- (bool)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (long long)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)brightness;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusedItem;
- (id)focusedView;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (id)initWithDisplay:(id)arg1;
- (bool)isAncestorOfItem:(id)arg1;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nativeBounds;
- (double)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overscanCompensation;
- (id)preferredFocusedItem;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (bool)sbs_isCarScreen;
- (bool)sbs_isMainScreen;
- (id)sbs_launchImageInfoPlistKeyModifier;
- (id)sbs_snapshotImagePathComponent;
- (double)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(double)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setFbsDisplay:(id)arg1;
- (void)setNeedsPreferredFocusedItemUpdate;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setWantsSoftwareDimming:(bool)arg1;
- (bool)shouldChangeFocusedItem:(id)arg1 heading:(unsigned long long)arg2;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (bool)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsSoftwareDimming;

@end
