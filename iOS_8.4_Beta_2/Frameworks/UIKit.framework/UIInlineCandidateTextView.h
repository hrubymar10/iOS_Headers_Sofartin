/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInlineCandidateTextView : UIView {
    SEL _action;
    bool _arrowHighlighted;
    NSMutableArray *_candidateCellArray;
    NSArray *_candidates;
    _UIInlineCandidateCell *_currentlyPushedItem;
    bool _phraseEditable;
    unsigned long long _selectedItem;
    bool _showingArrow;
    id _target;
    bool m_animating;
    int m_edgeType;
    int m_type;
}

- (bool)_arrowHighlighted;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateRectForExpandedHitRegion;
- (void)_cellSelected:(id)arg1;
- (double)_layoutCandidates:(id)arg1 maxCount:(int)arg2 height:(double)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(bool)arg5;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)edgeType;
- (id)findCell:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 candidates:(id)arg2 type:(int)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(bool)arg5;
- (unsigned long long)numberOfShownItems;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)redrawArrow;
- (unsigned long long)selectedItem;
- (void)setAnimating:(bool)arg1;
- (void)setEdgeType:(int)arg1;
- (void)setSelectedItem:(unsigned long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)showHighlightedArrow;
- (int)textEffectsVisibilityLevel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end