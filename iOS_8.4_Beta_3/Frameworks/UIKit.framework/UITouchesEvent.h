/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITouchesEvent : UIInternalEvent {
    struct __CFDictionary { } *_gestureRecognizersByWindow;
    struct __CFDictionary { } *_keyedTouches;
    struct __CFDictionary { } *_keyedTouchesByWindow;
    NSMapTable *_latentSystemGestureWindows;
    NSMutableSet *_touches;
}

@property (nonatomic, readonly) double _initialTouchTimestamp;
@property (nonatomic, readonly) unsigned int _windowServerHitTestContextId;

- (bool)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 currentTouchMap:(struct __CFDictionary { }*)arg3 newTouchMap:(struct __CFDictionary { }*)arg4;
- (void)_addTouch:(id)arg1 forDelayedDelivery:(bool)arg2;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2;
- (id)_allTouches;
- (void)_clearTouches;
- (void)_clearViewForTouch:(id)arg1;
- (id)_cloneEvent;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (void)_dismissSharedCalloutBarIfNeeded;
- (id)_firstTouchForView:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (double)_initialTouchTimestamp;
- (void)_invalidateGestureRecognizerForWindowCache;
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;
- (void)_removeTouch:(id)arg1;
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)_removeTouchesForKey:(id)arg1;
- (void)_removeTouchesForWindow:(id)arg1;
- (id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2;
- (void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_touchesForKey:(id)arg1;
- (id)_touchesForView:(id)arg1 withPhase:(long long)arg2;
- (id)_touchesForWindow:(id)arg1;
- (id)_viewsForWindow:(id)arg1;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (unsigned int)_windowServerHitTestContextId;
- (id)_windows;
- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1;
- (id)allTouches;
- (void)dealloc;
- (id)description;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)type;

@end
