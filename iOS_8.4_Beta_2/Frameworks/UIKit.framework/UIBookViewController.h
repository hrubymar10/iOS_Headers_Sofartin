/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBookViewController : UIViewController {
    long long _animatedPageTurns;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    UIView *_contentView;
    <UIBookViewControllerDelegate> *_delegate;
    UIViewController *_evenPage;
    UIViewController *_newEvenPage;
    UIViewController *_newOddPage;
    UIViewController *_oddPage;
    long long _turnCount;
    double _turnDuration;
    double _turnMargin;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(assign,readwrite) <UIBookViewControllerDelegate> * delegate;
@property(assign,retain) UIViewController * evenPage;
@property(assign,retain) UIViewController * oddPage;
@property(assign,readwrite) double turnDuration;
@property(assign,readwrite) double turnMargin;

- (void)_positionPage:(id)arg1 isLeft:(bool)arg2;
- (void)_setNewPage:(id)arg1 isLeft:(bool)arg2;
- (void)_setupContentViewIfNecessary;
- (void)_setupCurlFilters;
- (void)_startCurlAnimation;
- (void)_turnAllPagesNonAnimated;
- (void)_turnSinglePageAnimated;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)evenPage;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)oddPage;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvenPage:(id)arg1;
- (void)setOddPage:(id)arg1;
- (void)setTurnDuration:(double)arg1;
- (void)setTurnMargin:(double)arg1;
- (double)turnDuration;
- (double)turnMargin;
- (void)turnPages:(long long)arg1 animated:(bool)arg2;
- (id)view;

@end
