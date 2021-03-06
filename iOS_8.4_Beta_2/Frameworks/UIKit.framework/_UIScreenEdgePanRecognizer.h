/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
    <_UIScreenEdgePanRecognizerDelegate> *_delegate;
    double _gestureRestrictionFactor;
    bool _hasDoneInitialBackProjectionTest;
    bool _hasRecordedData;
    long long _initialInterfaceOrientation;
    struct CGPoint { 
        double x; 
        double y; 
    } _initialTouchLocation;
    double _initialTouchTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    } _lastTouchLocation;
    double _lastTouchTimestamp;
    UIDelayedAction *_recognitionTimer;
    unsigned long long _recognizedRegion;
    bool _requiresFlatThumb;
    bool _requiresLongPress;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _screenBounds;
    _UIScreenEdgePanRecognizerSettings *_settings;
    long long _state;
    unsigned long long _targetEdges;
    unsigned long long _touchedRegion;
    long long _type;
    bool _useGrapeFlags;
}

@property(assign,readonly) struct CGPoint { double x1; double x2; } _lastTouchLocation;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <_UIScreenEdgePanRecognizerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long recognizedRegion;
@property(assign,readwrite) bool requiresFlatThumb;
@property(getter=isRequiringLongPress,assign,readonly) bool requiringLongPress;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property(assign,retain) _UIScreenEdgePanRecognizerSettings * settings;
@property(assign,readwrite) bool shouldUseGrapeFlags;
@property(assign,readonly) long long state;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) unsigned long long targetEdges;

+ (bool)_edgeSwipeNavigationGestureEnabled;

- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (struct CGPoint { double x1; double x2; })_lastTouchLocation;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_setState:(long long)arg1;
- (unsigned long long)_targetEdges;
- (long long)_type;
- (void)dealloc;
- (id)delegate;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (id)initWithType:(long long)arg1;
- (bool)isRequiringLongPress;
- (unsigned long long)recognizedRegion;
- (bool)requiresFlatThumb;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setDelegate:(id)arg1;
- (void)setRequiresFlatThumb:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSettings:(id)arg1;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldUseGrapeFlags;
- (long long)state;
- (unsigned long long)targetEdges;

@end
