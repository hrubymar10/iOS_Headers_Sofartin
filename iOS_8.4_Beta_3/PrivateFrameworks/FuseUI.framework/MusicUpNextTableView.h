/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextTableView : MusicTableView <MusicUpNextReorderLayoutDelegate> {
    NSIndexPath *_attachedIndexPath;
    UIView *_attachedView;
    bool _lieAboutContentsWhileAutoScrolling;
    double _minimumYForReorderingCells;
    long long _pinState;
    bool _punchOutEnabled;
    MusicUpNextPunchOutView *_punchOutView;
}

@property(assign,readonly) UIView * attachedView;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disableWrapperScroll;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) double minimumYForReorderingCells;
@property(assign,readonly) long long pinViewLocation;
@property(assign,readwrite) bool punchOutEnabled;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autoscrollForReordering:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (void)_unpinView:(id)arg1 atFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)attachView:(id)arg1 toCellAtIndexPath:(id)arg2;
- (id)attachedView;
- (void)didAddSubview:(id)arg1;
- (bool)disableWrapperScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (double)minimumYForReorderingCells;
- (long long)pinViewLocation;
- (bool)punchOutEnabled;
- (void)setDisableWrapperScroll:(bool)arg1;
- (void)setMinimumYForReorderingCells:(double)arg1;
- (void)setPunchOutEnabled:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tableViewCell:(id)arg1 frameForTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end