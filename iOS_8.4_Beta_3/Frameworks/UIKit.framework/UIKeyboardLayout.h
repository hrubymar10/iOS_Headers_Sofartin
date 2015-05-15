/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardLayout : UIView <_UIScreenEdgePanRecognizerDelegate> {
    UITouch *_activeTouch;
    long long _cursorLocation;
    id _deferredTouchDownTask;
    id _deferredTouchMovedTask;
    bool _disableInteraction;
    UITextInputTraits *_inputTraits;
    bool _isExecutingDeferredTouchTasks;
    _UIScreenEdgePanRecognizer *_screenEdgePanRecognizer;
    UIKBScreenTraits *_screenTraits;
    UITouch *_shiftKeyTouch;
    UIKeyboardTaskQueue *_taskQueue;
    UIKBTextEditingTraits *_textEditingTraits;
    NSMutableArray *_uncommittedTouches;
    bool hideKeysUnderIndicator;
    double lastTouchUpTime;
}

@property(assign,retain) UITouch * activeTouch;
@property(assign,readwrite) long long cursorLocation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) id deferredTouchDownTask;
@property(assign,copy) id deferredTouchMovedTask;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disableInteraction;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool hideKeysUnderIndicator;
@property(assign,readonly) long long idiom;
@property(assign,readwrite) bool isExecutingDeferredTouchTasks;
@property(assign,readwrite) double lastTouchUpTime;
@property(assign,retain) NSString * layoutTag;
@property(assign,readonly) long long orientation;
@property(assign,retain) _UIScreenEdgePanRecognizer * screenEdgePanRecognizer;
@property(assign,retain) UITouch * shiftKeyTouch;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIKeyboardTaskQueue * taskQueue;

+ (Class)_subclassForScreenTraits:(id)arg1;

- (void)_addTouchToScreenEdgePanRecognizer:(id)arg1;
- (bool)_canAddTouchesToScreenGestureRecognizer:(id)arg1;
- (void)_executeDeferredTouchTasks;
- (void)_notifyLayoutOfGesturePosition:(struct CGPoint { double x1; double x2; })arg1 relativeToEdge:(unsigned long long)arg2;
- (bool)_shouldAllowKeyboardHandlingForTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldAllowKeyboardHandlingForTouchesEndedOrCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldAllowKeyboardHandlingForTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)activationIndicatorView;
- (id)activeTouch;
- (void)addWipeRecognizer;
- (void)assertSavedLocation:(struct CGPoint { double x1; double x2; })arg1 onTouch:(id)arg2 inWindow:(id)arg3 resetPrevious:(bool)arg4;
- (id)baseKeyForString:(id)arg1;
- (bool)canForceTouchCommit:(id)arg1;
- (bool)canHandleEvent:(id)arg1;
- (bool)canMultitap;
- (bool)canProduceString:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)clearShiftIfNecessaryForEndedTouch:(id)arg1;
- (void)clearTransientState;
- (void)clearUnusedObjects:(bool)arg1;
- (void)commitTouches:(id)arg1;
- (void)commitTouches:(id)arg1 executionContext:(id)arg2;
- (id)currentKeyplane;
- (long long)cursorLocation;
- (void)deactivateActiveKeys;
- (void)deactivateActiveKeysClearingTouchInfo:(bool)arg1 clearingDimming:(bool)arg2;
- (void)dealloc;
- (id)deferredTouchDownTask;
- (id)deferredTouchMovedTask;
- (void)didClearInput;
- (void)didCommitTouch:(id)arg1;
- (void)didFinishScreenGestureRecognition;
- (void)didRecognizeGestureOnEdge:(unsigned long long)arg1 withDistance:(double)arg2;
- (bool)disableInteraction;
- (struct CGSize { double x1; double x2; })dragGestureSize;
- (void)fadeWithInvocation:(id)arg1;
- (double)flickDistance;
- (void)forceUpdatesForCommittedTouch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (bool)hasAccentKey;
- (bool)hasCandidateKeys;
- (bool)hideKeysUnderIndicator;
- (double)hitBuffer;
- (long long)idiom;
- (bool)ignoresShiftState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAlphabeticPlane;
- (bool)isExecutingDeferredTouchTasks;
- (bool)isShiftKeyBeingHeld;
- (bool)isShiftKeyPlaneChooser;
- (bool)keyplaneContainsEmojiKey;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneNamed:(id)arg1;
- (double)lastTouchUpTime;
- (id)layoutTag;
- (void)longPressAction;
- (long long)orientation;
- (bool)performReturnAction;
- (bool)performSpaceAction;
- (void)reloadTargetEdgesForScreenGestureRecognition;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (id)screenEdgePanRecognizer;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveTouch:(id)arg1;
- (void)setAutoshift:(bool)arg1;
- (void)setCursorLocation:(long long)arg1;
- (void)setDeferredTouchDownTask:(id)arg1;
- (void)setDeferredTouchMovedTask:(id)arg1;
- (void)setDisableInteraction:(bool)arg1;
- (void)setHideKeysUnderIndicator:(bool)arg1;
- (void)setIsExecutingDeferredTouchTasks:(bool)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLastTouchUpTime:(double)arg1;
- (void)setLayoutTag:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setPasscodeOutlineAlpha:(double)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setReturnKeyEnabled:(bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setScreenEdgePanRecognizer:(id)arg1;
- (void)setShift:(bool)arg1;
- (void)setShiftKeyTouch:(id)arg1;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (void)setTaskQueue:(id)arg1;
- (void)setTextEditingTraits:(id)arg1;
- (id)shiftKeyTouch;
- (bool)shouldFadeFromLayout;
- (bool)shouldFadeToLayout;
- (bool)shouldShowIndicator;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (id)simulateTouch:(struct CGPoint { double x1; double x2; })arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { double x1; double x2; })arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (id)taskQueue;
- (unsigned long long)textEditingKeyMask;
- (void)touchCancelled:(id)arg1;
- (void)touchCancelled:(id)arg1 executionContext:(id)arg2;
- (void)touchDown:(id)arg1;
- (void)touchDown:(id)arg1 executionContext:(id)arg2;
- (void)touchDragged:(id)arg1;
- (void)touchDragged:(id)arg1 executionContext:(id)arg2;
- (void)touchUp:(id)arg1;
- (void)touchUp:(id)arg1 executionContext:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)touchesToCommitBeforeTouch:(id)arg1;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)updateBackgroundCorners;
- (void)updateLocalizedKeys:(bool)arg1;
- (bool)usesAutoShift;
- (void)willMoveToWindow:(id)arg1;
- (void)wipeGestureRecognized:(id)arg1;

@end
