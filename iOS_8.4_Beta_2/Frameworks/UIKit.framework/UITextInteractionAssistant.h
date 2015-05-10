/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    } _autoscrollBasePoint;
    double _autoscrollFactor;
    int _autoscrollRamp;
    struct CGPoint { 
        double x; 
        double y; 
    } _autoscrollUntransformedExtentPoint;
    bool _autoscrolled;
    UIGestureRecognizer *_doubleTapGesture;
    bool _externalTextInput;
    NSHashTable *_gestureRecognizerViews;
    bool _inGesture;
    bool _isTryingToHighlightLink;
    NSMutableSet *_linkGestures;
    UILongPressGestureRecognizer *_loupeGesture;
    struct CGPoint { 
        double x; 
        double y; 
    } _loupeGestureEndPoint;
    NSMutableArray *_recognizers;
    UITextSelectionView *_selectionView;
    UITapGestureRecognizer *_singleTapGesture;
    UITextChecker *_textChecker;
    UIResponder<UITextInput> *_view;
}

@property(assign,readwrite) struct CGPoint { double x1; double x2; } autoscrollUntransformedExtentPoint;
@property(assign,readwrite) bool autoscrolled;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UIGestureRecognizer * doubleTapGesture;
@property(getter=isExperimentalUIEnabled,assign,readonly) bool experimentalUIEnabled;
@property(assign,readonly) bool externalTextInput;
@property(assign,readonly) UIFieldEditor * fieldEditor;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool inGesture;
@property(assign,retain) UILongPressGestureRecognizer * loupeGesture;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } loupeGestureEndPoint;
@property(assign,readonly) UIView * scrollView;
@property(assign,readonly) UITextSelectionView * selectionView;
@property(assign,retain) UITapGestureRecognizer * singleTapGesture;
@property(assign,retain) UITapGestureRecognizer * singleTapGesture;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UIResponder<UITextInput> * textDocument;
@property(assign,readonly) UIResponder<UITextInput> * view;

- (id)_asText;
- (id)_scrollable;
- (id)_selectionView;
- (void)activateSelection;
- (id)addDragRecognizer;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)addHighlightLinkRecognizerToView:(id)arg1 withHighlightDelay:(bool)arg2;
- (id)addLoupeGestureRecognizer:(bool)arg1 toView:(id)arg2;
- (id)addOneFingerDoubleTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerDoubleTapRecognizerToView:(id)arg1;
- (id)addOneFingerTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addOneFingerTapRecognizerToView:(id)arg1;
- (id)addOneFingerTripleTapRecognizerToView:(id)arg1;
- (id)addPhraseBoundaryGestureRecognizerToView:(id)arg1;
- (id)addSelectionTapRecognizer:(SEL)arg1 toView:(id)arg2;
- (id)addSelectionTapRecognizerToView:(id)arg1;
- (id)addTapAndAHalfRecognizerToView:(id)arg1;
- (id)addTapAndHoldOnLinkRecognizerToView:(id)arg1;
- (id)addTwoFingerRangedSelectRecognizerToView:(id)arg1;
- (id)addTwoFingerSingleTapRecognizerToView:(id)arg1;
- (void)attach;
- (struct CGPoint { double x1; double x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (bool)autoscrolled;
- (void)canBeginDragCursor:(id)arg1;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(bool)arg1;
- (void)clearSelection;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containerAllowsSelection;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerChangesSelectionOnOneFingerTap;
- (bool)containerIsAtom;
- (bool)containerIsBrowserView;
- (bool)containerIsPlainStyleAtom;
- (bool)containerIsTextField;
- (void)deactivateSelection;
- (void)dealloc;
- (void)detach;
- (void)detach:(bool)arg1;
- (void)didEndScrollingOverflow;
- (void)disableClearsOnInsertion;
- (double)distanceBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andRange:(id)arg2;
- (id)doubleTapGesture;
- (void)doubleTapInUneditable:(id)arg1;
- (bool)externalTextInput;
- (id)fieldEditor;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)inGesture;
- (id)initWithResponder:(id)arg1;
- (id)initWithView:(id)arg1;
- (bool)isExperimentalUIEnabled;
- (bool)isInteractingWithLink;
- (void)layoutChangedByScrolling:(bool)arg1;
- (id)linkInteractionView;
- (void)longDelayRecognizer:(id)arg1;
- (id)loupeGesture;
- (void)loupeGesture:(id)arg1;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (id)loupeGestureRecognizer:(bool)arg1;
- (bool)noCalloutBarAndTouchInSelection:(struct CGPoint { double x1; double x2; })arg1;
- (void)notifyKeyboardSelectionChanged;
- (void)oneFingerDoubleTap:(id)arg1;
- (id)oneFingerDoubleTapRecognizer:(SEL)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapInUneditable:(id)arg1;
- (id)oneFingerTapRecognizer:(SEL)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (id)oneFingerTripleTapRecognizer;
- (id)phraseBoundaryGestureRecognizer;
- (id)rangeForTextReplacement:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangeSelectionMoved:(struct CGPoint { double x1; double x2; })arg1 withTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rangeSelectionStarted:(struct CGPoint { double x1; double x2; })arg1;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeGestureRecognizersFromView:(id)arg1;
- (bool)requiresImmediateUpdate;
- (void)resignedFirstResponder;
- (void)scheduleChineseTransliteration;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible;
- (id)scrollView;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)selectionChanged;
- (id)selectionTapRecognizer:(SEL)arg1;
- (id)selectionView;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrolled:(bool)arg1;
- (void)setDoubleTapGesture:(id)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setInGesture:(bool)arg1;
- (void)setLoupeGesture:(id)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSingleTapGesture:(id)arg1;
- (bool)shouldHandleFormGestureAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (bool)shouldIgnoreLinkGestures;
- (id)singleTapGesture;
- (void)smallDelayRecognizer:(id)arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)tapAndAHalf:(id)arg1;
- (id)tapAndAHalfRecognizer;
- (bool)tapOnLinkWithGesture:(id)arg1;
- (id)textDocument;
- (id)textSelectionView;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (id)twoFingerRangedSelectRecognizer;
- (void)twoFingerSingleTap:(id)arg1;
- (id)twoFingerSingleTapRecognizer;
- (void)updateAutoscroll:(id)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (bool)useGesturesForEditableContent;
- (id)view;
- (bool)viewCouldBecomeEditable:(id)arg1;
- (void)willStartScrollingOverflow;

@end