/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
    TIKeyboardCandidateResultSet *_candidateResultSet;
    bool _showHiddenCandidatesOnly;
    NSString *m_correction;
    UIView *m_correctionAnimationView;
    UIView *m_correctionShadowView;
    UIView *m_correctionView;
    id m_delegate;
    bool m_fits;
    long long m_index;
    double m_maxX;
    bool m_mouseDown;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_originalTypedTextRect;
    double m_originalTypedTextRectCorrectionAmount;
    int m_promptTextType;
    NSString *m_typedText;
    UIView *m_typedTextAnimationView;
    NSMutableArray *m_typedTextViews;
    unsigned int m_usageTrackingMask;
    NSArray *m_usageTrackingTypes;
}

@property(assign,retain) TIKeyboardCandidateResultSet * candidateResultSet;
@property(assign,readonly) TIKeyboardCandidateResultSet * candidates;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool showHiddenCandidatesOnly;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) unsigned int usageTrackingMask;

- (void)_candidateSelected:(id)arg1;
- (id)activeCandidateList;
- (void)addTypedTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateResultSet;
- (id)candidates;
- (void)candidatesDidChange;
- (id)correction;
- (id)correctionAnimationView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textHeight:(int)arg2 withExtraGap:(double)arg3;
- (id)correctionShadowView;
- (id)correctionView;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)dismiss;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasCandidates;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (bool)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScrollBy:(double)arg2;
- (bool)isExtendedList;
- (bool)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (double)maximumCandidateWidth;
- (unsigned long long)numberOfShownItems;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)prepareForAnimation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removePromptSubviews;
- (void)revealHiddenCandidates;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 maxX:(double)arg6 showHiddenCandidatesOnly:(bool)arg7;
- (void)setCandidateResultSet:(id)arg1;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(bool)arg2;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4;
- (void)setSelectedItem:(unsigned long long)arg1;
- (void)setShowHiddenCandidatesOnly:(bool)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowFrameForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (bool)showHiddenCandidatesOnly;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)statisticsIdentifier;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)typedText;
- (id)typedTextAnimationView;
- (id)typedTextView;
- (unsigned int)usageTrackingMask;

@end
