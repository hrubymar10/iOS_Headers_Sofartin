/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIControl : UIView {
    struct { 
        unsigned int disabled : 1; 
        unsigned int tracking : 1; 
        unsigned int touchInside : 1; 
        unsigned int touchDragged : 1; 
        unsigned int requiresDisplayOnTracking : 1; 
        unsigned int highlighted : 1; 
        unsigned int dontHighlightOnTouchDown : 1; 
        unsigned int delayActions : 1; 
        unsigned int allowActionsToQueue : 1; 
        unsigned int pendingUnhighlight : 1; 
        unsigned int selected : 1; 
        unsigned int verticalAlignment : 2; 
        unsigned int horizontalAlignment : 2; 
        unsigned int wasLastHighlightSuccessful : 1; 
        unsigned int touchHasHighlighted : 1; 
    } _controlFlags;
    double _downTime;
    struct CGPoint { 
        double x; 
        double y; 
    } _previousPoint;
    NSMutableArray *_targetActions;
}

@property(assign,readwrite) long long contentHorizontalAlignment;
@property(assign,readwrite) long long contentVerticalAlignment;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(getter=isHighlighted,assign,readwrite) bool highlighted;
@property(getter=isSelected,assign,readwrite) bool selected;
@property(assign,readonly) unsigned long long state;
@property(getter=isTouchInside,assign,readonly) bool touchInside;
@property(getter=isTracking,assign,readonly) bool tracking;

- (void)_cancelDelayedActions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_delayActions;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_hasActionForEventMask:(int)arg1;
- (double)_highlightCornerRadius;
- (void)_sendActionsForEvents:(int)arg1 withEvent:(id)arg2;
- (void)_sendDelayedActions;
- (void)_sendDelayedActions:(bool)arg1;
- (void)_setHighlightOnMouseDown:(bool)arg1;
- (void)_setLastHighlightSuccessful:(bool)arg1;
- (void)_setTouchHasHighlighted:(bool)arg1;
- (bool)_touchHasHighlighted;
- (void)_unhighlight;
- (bool)_wasLastHighlightSuccessful;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (unsigned long long)allControlEvents;
- (id)allTargets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (long long)contentHorizontalAlignment;
- (long long)contentVerticalAlignment;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)hasOneOrMoreTargets;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (bool)isTouchInside;
- (bool)isTracking;
- (void)music_configureControlWithTextDescriptor:(id)arg1;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (bool)requiresDisplayOnTracking;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRequiresDisplayOnTracking:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTracking:(bool)arg1;
- (bool)shouldTrack;
- (unsigned long long)state;
- (bool)touchDragged;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
