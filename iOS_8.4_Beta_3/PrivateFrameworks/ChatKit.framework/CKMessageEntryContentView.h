/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate> {
    UIView *_activeView;
    CKComposition *_composition;
    UIView *_dividerLine;
    bool _ignoreEndEditing;
    bool _needsEnsureSelectionVisible;
    bool _needsTextLayout;
    double _placeholderHeight;
    bool _shouldShowCharacterCount;
    bool _shouldShowSubject;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _subjectAlignmentInsets;
    CKMessageEntryTextView *_subjectView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _textAlignmentInsets;
    CKMessageEntryRichTextView *_textView;
}

@property(getter=isActive,assign,readonly) bool active;
@property(assign,readwrite) UIView * activeView;
@property(assign,readwrite) BOOL balloonColor;
@property(assign,retain) CKComposition * composition;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentTextAlignmentInsets;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) UIView * dividerLine;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool ignoreEndEditing;
@property(assign,readwrite) bool needsEnsureSelectionVisible;
@property(assign,readwrite) bool needsTextLayout;
@property(assign,readwrite) double placeholderHeight;
@property(assign,copy) NSString * placeholderText;
@property(assign,readwrite) bool shouldShowCharacterCount;
@property(assign,readwrite) bool shouldShowSubject;
@property(getter=isShowingDictationPlaceholder,assign,readonly) bool showingDictationPlaceholder;
@property(getter=isSingleLine,assign,readonly) bool singleLine;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } subjectAlignmentInsets;
@property(assign,retain) CKMessageEntryTextView * subjectView;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textAlignmentInsets;
@property(assign,retain) CKMessageEntryRichTextView * textView;

- (void)acceptAutocorrection;
- (id)activeView;
- (BOOL)balloonColor;
- (void)calculateTextMetrics;
- (id)composition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentTextAlignmentInsets;
- (void)dealloc;
- (id)dividerLine;
- (void)ensureSelectionVisibleIfNeeded;
- (bool)ignoreEndEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shouldShowSubject:(bool)arg2 shouldShowCharacterCount:(bool)arg3;
- (void)invalidateComposition;
- (bool)isActive;
- (bool)isShowingDictationPlaceholder;
- (bool)isSingleLine;
- (void)layoutSubviews;
- (bool)makeActive;
- (bool)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (bool)needsEnsureSelectionVisible;
- (bool)needsTextLayout;
- (double)placeholderHeight;
- (id)placeholderText;
- (void)setActiveView:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setComposition:(id)arg1;
- (void)setDividerLine:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoreEndEditing:(bool)arg1;
- (void)setNeedsEnsureSelectionVisible:(bool)arg1;
- (void)setNeedsTextLayout:(bool)arg1;
- (void)setPlaceholderHeight:(double)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setShouldShowCharacterCount:(bool)arg1;
- (void)setShouldShowSubject:(bool)arg1;
- (void)setSubjectAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubjectView:(id)arg1;
- (void)setTextAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextView:(id)arg1;
- (bool)shouldShowCharacterCount;
- (bool)shouldShowSubject;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })subjectAlignmentInsets;
- (id)subjectView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAlignmentInsets;
- (id)textView;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;

@end
