/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextContentView : UIView <UITextInput, UITextInputTraits, UITextLinkInteraction> {
    bool m_allowsEditingTextAttributes;
    bool m_becomesEditableWithGestures;
    bool m_becomingFirstResponder;
    DOMHTMLElement *m_body;
    double m_bottomBufferHeight;
    id m_delegate;
    bool m_editable;
    bool m_editing;
    UIFont *m_font;
    WebFrame *m_frame;
    bool m_hasExplicitTextAlignment;
    UITextInteractionAssistant *m_interactionAssistant;
    int m_marginTop;
    bool m_reentrancyGuard;
    bool m_scrollsSelectionOnWebDocumentChanges;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } m_selectionInset;
    long long m_textAlignment;
    UIColor *m_textColor;
    bool m_usesAttributedText;
    UIWebDocumentView *m_webView;
}

@property(assign,readwrite) bool allowsEditingTextAttributes;
@property(assign,copy) NSAttributedString * attributedText;
@property(assign,readwrite) long long autocapitalizationType;
@property(assign,readwrite) long long autocorrectionType;
@property(assign,readonly) UITextPosition * beginningOfDocument;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <UITextContentViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(getter=isEditable,assign,readwrite) bool editable;
@property(getter=isEditing,assign,readwrite) bool editing;
@property(assign,readwrite) bool enablesReturnKeyAutomatically;
@property(assign,readonly) UITextPosition * endOfDocument;
@property(assign,retain) UIFont * font;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) <UITextInputDelegate> * inputDelegate;
@property(assign,readwrite) long long keyboardAppearance;
@property(assign,readwrite) long long keyboardType;
@property(assign,readonly) UITextRange * markedTextRange;
@property(assign,copy) NSDictionary * markedTextStyle;
@property(assign,readwrite) long long returnKeyType;
@property(assign,readwrite) bool scrollsSelectionOnWebDocumentChanges;
@property(getter=isSecureTextEntry,assign,readwrite) bool secureTextEntry;
@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property(assign,copy) UITextRange * selectedTextRange;
@property(assign,readwrite) long long selectionAffinity;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } selectionInset;
@property(assign,readwrite) long long spellCheckingType;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * text;
@property(assign,readwrite) long long textAlignment;
@property(assign,retain) UIColor * textColor;
@property(assign,readonly) UIView * textInputView;
@property(assign,readonly) <UITextInputTokenizer> * tokenizer;

- (void)_addShortcut:(id)arg1;
- (unsigned long long)_allowedLinkTypes;
- (id)_automationValue;
- (void)_define:(id)arg1;
- (void)_didScroll;
- (void)_hideSelectionCommands;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)_keyboardResponder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4;
- (void)_removeTextViewPropertiesFromText:(id)arg1;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (void)_scrollViewWillBeginDragging;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_sizeChanged;
- (void)_transliterateChinese:(id)arg1;
- (bool)allowsEditingTextAttributes;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (bool)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (double)bottomBufferHeight;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForVisiblePosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(bool)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contentAsAttributedString;
- (id)contentAsHTMLString;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (id)delegate;
- (void)deleteBackward;
- (void)didMoveToSuperview;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)ensureSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasMarkedText;
- (bool)hasSelection;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isFirstResponder;
- (bool)isInteractingWithLink;
- (void)keyboardDidShow:(id)arg1;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (int)marginTop;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)mightHaveLinks;
- (struct CGPoint { double x1; double x2; })offset;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)performScrollSelectionToVisible:(bool)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)recalculateStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForScrollToVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)removeFromSuperview;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)resetDataDetectorsResultsWithWebLock;
- (bool)resignFirstResponder;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)scrollSelectionToVisible:(bool)arg1;
- (bool)scrollsSelectionOnWebDocumentChanges;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)selectedText;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (long long)selectionGranularity;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionInset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentToAttributedString:(id)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarginTop:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollsSelectionOnWebDocumentChanges:(bool)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionAffinity:(long long)arg1;
- (void)setSelectionChangeCallbacksDisabled:(bool)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)setSelectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (bool)shouldStartDataDetectors;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)styleString;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)unmarkText;
- (void)updateContentEditableAttribute:(bool)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelection;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webViewDidChange:(id)arg1;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
