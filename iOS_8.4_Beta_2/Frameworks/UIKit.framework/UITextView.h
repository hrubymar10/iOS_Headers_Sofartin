/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextView : UIScrollView <ABText, MPUAutoupdatingTextContainer, UIKeyboardInput, UITextAutoscrolling, UITextInput, UITextInputControllerDelegate, UITextInputTraits_Private, UITextLinkInteraction, _UILayoutBaselineUpdating, _UIMultilineTextContentSizing> {
    UIAutoscroll *_autoscroll;
    _UICharacterStreamingManager *_characterStreamingManager;
    bool _clearsOnInsertion;
    _UITextContainerView *_containerView;
    unsigned long long _dataDetectorTypes;
    double _firstBaselineOffsetFromTop;
    UIView *_inputAccessoryView;
    UITextInputController *_inputController;
    id _inputDelegate;
    UIView *_inputView;
    UITextInteractionAssistant *_interactionAssistant;
    double _lastBaselineOffsetFromBottom;
    NSLayoutManager *_layoutManager;
    id _linkInteractionItem;
    UILabel *_placeholderLabel;
    double _preferredMaxLayoutWidth;
    id _private;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    struct CGPoint { 
        double x; 
        double y; 
    } _scrollTargetOffset;
    long long _siriAnimationStyle;
    NSDictionary *_siriParameters;
    _UISiriStreamingManager *_streamingManager;
    NSTextContainer *_textContainer;
    UITextInputTraits *_textInputTraits;
    NSTextStorage *_textStorage;
    <UITextInputTokenizer> *_tokenizer;
    struct { 
        unsigned int needsScrollToSelectionAfterLayout : 1; 
        unsigned int isInteractingWithLink : 1; 
        unsigned int linkInteractionIsLongPress : 1; 
        unsigned int editable : 1; 
        unsigned int reentrancyGuard : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int interactiveSelectionDisabled : 1; 
        unsigned int selectable : 1; 
        unsigned int shouldPresentSheetsInAWindowLayeredAboveTheKeyboard : 1; 
    } _tvFlags;
}

@property(setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:,assign,readwrite) bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property(assign,readonly) MPUTextContainerContentSizeUpdater * MPU_contentSizeUpdater;
@property(setter=_setDrawsDebugBaselines:,assign,readwrite) bool _drawsDebugBaselines;
@property(assign,copy) NSString * ab_text;
@property(assign,copy) NSDictionary * ab_textAttributes;
@property(assign,readwrite) bool acceptsEmoji;
@property(assign,readwrite) bool acceptsFloatingKeyboard;
@property(assign,readwrite) bool acceptsSplitKeyboard;
@property(assign,readwrite) bool allowsEditingTextAttributes;
@property(assign,copy) NSAttributedString * attributedText;
@property(assign,copy) NSAttributedString * attributedText;
@property(assign,readwrite) long long autocapitalizationType;
@property(assign,copy) NSString * autocorrectionContext;
@property(assign,readwrite) long long autocorrectionType;
@property(assign,readonly) UITextPosition * beginningOfDocument;
@property(assign,readwrite) bool clearsOnInsertion;
@property(assign,readwrite) bool contentsIsSingleValue;
@property(assign,readwrite) unsigned long long dataDetectorTypes;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) bool deferBecomingResponder;
@property(assign,readwrite) <UITextViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disablePrediction;
@property(assign,readwrite) bool displaySecureTextUsingPlainText;
@property(getter=isEditable,assign,readwrite) bool editable;
@property(assign,readwrite) int emptyContentReturnKeyType;
@property(assign,readwrite) bool enablesReturnKeyAutomatically;
@property(assign,readwrite) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(assign,readonly) UITextPosition * endOfDocument;
@property(assign,retain) UIFont * font;
@property(assign,retain) UIFont * font;
@property(assign,readwrite) bool forceEnableDictation;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIView * inputAccessoryView;
@property(assign,readwrite) <UITextInputDelegate> * inputDelegate;
@property(assign,retain) UIView * inputView;
@property(assign,retain) UIColor * insertionPointColor;
@property(assign,readwrite) unsigned long long insertionPointWidth;
@property(assign,readwrite) bool isSingleLineDocument;
@property(assign,readwrite) long long keyboardAppearance;
@property(assign,readwrite) long long keyboardType;
@property(assign,readonly) NSLayoutManager * layoutManager;
@property(assign,readwrite) bool learnsCorrections;
@property(assign,copy) NSDictionary * linkTextAttributes;
@property(assign,readonly) UITextRange * markedTextRange;
@property(assign,copy) NSDictionary * markedTextStyle;
@property(assign,copy) NSString * responseContext;
@property(assign,readwrite) bool returnKeyGoesToNextResponder;
@property(assign,readwrite) long long returnKeyType;
@property(getter=isSecureTextEntry,assign,readwrite) bool secureTextEntry;
@property(getter=isSelectable,assign,readwrite) bool selectable;
@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property(assign,copy) UITextRange * selectedTextRange;
@property(assign,readwrite) long long selectionAffinity;
@property(assign,retain) UIColor * selectionBarColor;
@property(assign,retain) UIImage * selectionDragDotImage;
@property(assign,retain) UIColor * selectionHighlightColor;
@property(assign,readwrite) int shortcutConversionType;
@property(assign,readwrite) long long spellCheckingType;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool suppressReturnKeyStyling;
@property(assign,copy) NSString * text;
@property(assign,readwrite) long long textAlignment;
@property(assign,retain) UIColor * textColor;
@property(assign,readonly) NSTextContainer * textContainer;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textContainerInset;
@property(assign,readonly) UIView * textInputView;
@property(assign,readwrite) int textLoupeVisibility;
@property(assign,readwrite) int textSelectionBehavior;
@property(assign,retain) NSTextStorage * textStorage;
@property(assign,readwrite) id textSuggestionDelegate;
@property(assign,readwrite) struct __CFCharacterSet { }* textTrimmingSet;
@property(assign,readonly) <UITextInputTokenizer> * tokenizer;
@property(assign,copy) NSDictionary * typingAttributes;
@property(assign,readwrite) bool useInterfaceLanguageForLocalization;

+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (bool)_isCompatibilityTextView;
+ (id)_sharedHighlightView;
+ (id)pkui_plainNonInteractiveTextView;

- (bool)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(bool)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_baselineOffsetDidChange;
- (double)_baselineOffsetFromBottom;
- (void)_cancelDataDetectors;
- (struct CGPoint { double x1; double x2; })_closeQuoteAnchor;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(bool)arg2 isEditable:(bool)arg3 isSelectable:(bool)arg4;
- (id)_containerView;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (double)_currentPreferredMaxLayoutWidth;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (bool)_drawsDebugBaselines;
- (unsigned long long)_effectiveDataDetectorTypes;
- (void)_enableSiriAnimationDictationStyle;
- (void)_enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_finishHandlingInteraction:(id)arg1;
- (double)_firstBaselineOffsetFromTop;
- (struct CGPoint { double x1; double x2; })_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (void)_highlightLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)_interactableItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isDisplayingReferenceLibraryViewController;
- (bool)_isDisplayingShortcutViewController;
- (bool)_isInteractiveTextSelectionDisabled;
- (void)_keyboardDidShow:(id)arg1;
- (struct CGPoint { double x1; double x2; })_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (id)_layoutDebuggingTitle;
- (void)_layoutPlaceholder;
- (bool)_mightHaveSelection;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_observedTextViewDidChange:(id)arg1;
- (struct CGPoint { double x1; double x2; })_openQuoteAnchor;
- (void)_performLayoutCalculation:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForLinkAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_resetDataDetectorsResults;
- (void)_resetLinkInteraction;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_restorableScrollPosition;
- (void)_restoreScrollPosition:(id)arg1 animated:(bool)arg2;
- (void)_resyncContainerFrameForNonAutolayout;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (void)_scrollSelectionToVisibleInContainingScrollView:(bool)arg1;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (void)_selectionMayChange:(id)arg1;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (void)_setInteractiveTextSelectionDisabled:(bool)arg1;
- (void)_setPreferredMaxLayoutWidth:(double)arg1;
- (void)_setScrollTarget:(id)arg1;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (bool)_shouldScrollEnclosingScrollView;
- (bool)_shouldStartDataDetectors;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_startDataDetectors;
- (void)_streamingManagerDidCommitFinalResults;
- (id)_textInputTraits;
- (id)_textInputViewForAddingGestureRecognizers;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (unsigned long long)_totalNumberOfTextViewsInLayoutManager;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateContentSize;
- (void)_updatePlaceholderVisibility;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRangeWithLayout:(bool)arg1;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (id)_whitelistedTypingAttributes;
- (id)ab_text;
- (id)ab_textAttributes;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)allowsEditingTextAttributes;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)clearsOnInsertion;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (id)dd_newOperation;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (bool)forceEnableDictation;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isInteractingWithLink;
- (bool)isSelectable;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (id)layoutManager;
- (void)layoutSubviews;
- (double)lineHeight;
- (id)linkTextAttributes;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (unsigned long long)marginTop;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)mightHaveLinks;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (struct CGSize { double x1; double x2; })pkui_frameSizeForTextSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })pkui_textSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)selectedText;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setEditable:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setForceEnableDictation:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setMarginTop:(unsigned long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUsesTiledViews:(bool)arg1;
- (bool)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (id)textInRange:(id)arg1;
- (bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textInputDidChange:(id)arg1;
- (void)textInputDidChangeSelection:(id)arg1;
- (id)textInputView;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStorage;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateConstraints;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelection;
- (bool)usesTiledViews;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectIgnoringKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
