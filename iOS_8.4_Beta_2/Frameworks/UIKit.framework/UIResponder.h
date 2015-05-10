/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIResponder : NSObject <UITextInputAdditions, UITextInput_Internal, _UIStateRestorationContinuation>

@property(getter=_proxyTextInput,assign,readonly) UIResponder<UITextInput> * __content;
@property(assign,readonly) UIResponder * _editingDelegate;
@property(assign,readonly) UIResponder * _responderForEditing;
@property(assign,readonly) UIView<UITextInputPrivate> * _textSelectingContainer;
@property(getter=_caretRect,assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRect;
@property(getter=isEditable,assign,readonly) bool editable;
@property(getter=isEditing,assign,readonly) bool editing;
@property(assign,retain) UIView * inputAccessoryView;
@property(assign,retain) UIInputViewController * inputAccessoryViewController;
@property(assign,retain) UIView * inputView;
@property(assign,retain) UIInputViewController * inputViewController;
@property(assign,readonly) NSArray * keyCommands;
@property(assign,copy) NSString * restorationIdentifier;
@property(assign,retain) NSString * textInputContextIdentifier;
@property(assign,retain) UITextInputMode * textInputMode;
@property(assign,readonly) NSUndoManager * undoManager;
@property(assign,retain) NSUserActivity * userActivity;

+ (void)_cleanupAllStateRestorationTables;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_finishStateRestoration;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (void)_startDeferredTrackingObjectsWithIdentifiers;
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)clearTextInputContextIdentifier:(id)arg1;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;
+ (id)tswp_currentFirstResponder;

- (id)_asTextSelection;
- (void)_becomeFirstResponder;
- (void)_becomeFirstResponderAndMakeVisible;
- (bool)_becomeFirstResponderWhenPossible;
- (void)_beginPinningInputViews;
- (bool)_canBecomeFirstResponder;
- (bool)_canBecomeFirstResponderWhenPossible;
- (bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (bool)_canShowTextServices;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRect;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearOverrideNextResponder;
- (void)_clearRestorableResponderStatus;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;
- (bool)_containedInAbsoluteResponderChain;
- (bool)_containsResponder:(id)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (id)_deepestUnambiguousResponder;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_didChangeToFirstResponder:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (bool)_disableAutomaticKeyboardUI;
- (id)_editingDelegate;
- (void)_endPinningInputViews;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (void)_finishResignFirstResponder;
- (id)_firstResponder;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (bool)_isEmptySelection;
- (bool)_isPinningInputViews;
- (bool)_isRootForKeyResponderCycle;
- (bool)_isTransitioningFromView:(id)arg1;
- (bool)_isViewController;
- (id)_keyCommandForEvent:(id)arg1;
- (id)_keyCommands;
- (id)_keyInput;
- (id)_keyboardResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (void)_moveWithEvent:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_nextKeyResponder;
- (id)_nextResponderOverride;
- (id)_nextViewControllerInResponderChain;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1;
- (void)_overrideInputViewNextResponderWithResponder:(id)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (id)_previousKeyResponder;
- (id)_primaryContentResponder;
- (id)_proxyTextInput;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (void)_rebuildStateRestorationIdentifierPath;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (bool)_requiresKeyboardResetOnReload;
- (bool)_requiresKeyboardWhenFirstResponder;
- (bool)_requiresKeyboardWindowWhenFirstResponder;
- (void)_resignFirstResponder;
- (bool)_resignIfContainsFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)_responderForEditing;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderSelectionImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_responderWindow;
- (id)_restorationIdentifierPath;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setFirstResponder:(id)arg1;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(bool)arg3;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (void)_tagAsRestorableResponder;
- (id)_targetForAction:(SEL)arg1 withSender:(id)arg2 canPerformActionBlock:(id)arg3;
- (id)_textColorForCaretSelection;
- (id)_textSelectingContainer;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_userActivity;
- (bool)_usesAsynchronousProtocol;
- (bool)_usesDeemphasizedTextAppearance;
- (void)_wheelChangedWithEvent:(id)arg1;
- (id)_window;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (id)_wordContainingCaretSelection;
- (bool)becomeFirstResponder;
- (void)beginSelectionChange;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endSelectionChange;
- (id)firstResponder;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (id)inputView;
- (id)inputViewController;
- (id)interactionAssistant;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isFirstResponder;
- (id)keyCommands;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)nextFirstResponder;
- (id)nextResponder;
- (void)reloadInputViews;
- (void)reloadInputViewsWithoutReset;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (bool)resignFirstResponder;
- (id)restorationIdentifier;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (long long)selectionAffinity;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)textInputContextIdentifier;
- (id)textInputMode;
- (id)textInputView;
- (id)tk_firstViewControllerInResponderChain;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tswp_findFirstResponder:(id)arg1;
- (id)undoManager;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;

@end