/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    _UIDynamicCaretAlternatives *_alternativesView;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    _UIDynamicCaretHelpLabel *_helpLabel;
    _UIDynamicCaretInput *_inputView;
    bool _justDeleted;
    _UIDynamicCaretNoContentView *_noContentView;
    long long _selectedIndex;
}

@property(assign,retain) _UIDynamicCaretAlternatives * alternativesView;
@property(assign,retain) TIKeyboardCandidateResultSet * candidateSet;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) _UIDynamicCaretHelpLabel * helpLabel;
@property(assign,retain) _UIDynamicCaretInput * inputView;
@property(assign,readwrite) bool isActive;
@property(assign,retain) _UIDynamicCaretNoContentView * noContentView;
@property(assign,readonly) Class superclass;

- (void)alternativeTappedAtIndex:(long long)arg1;
- (id)alternativesView;
- (id)backgroundImage;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateSet;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)displayAlternatives:(bool)arg1;
- (bool)hasCandidates;
- (id)helpLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputView;
- (bool)isActive;
- (bool)isDeleteCandidate:(id)arg1;
- (bool)isExtendedList;
- (bool)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (void)layoutSubviews;
- (id)noContentView;
- (unsigned long long)selectedSortIndex;
- (void)setAlternativesView:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setDocumentHasContent:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHelpLabel:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)statisticsIdentifier;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end