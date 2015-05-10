/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityVerticalSectionHeaderView : UICollectionReusableView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView *_actionableHeaderView;
    bool _alignsHairlineWithTitle;
    double _bottomContentInset;
    <MusicEntityVerticalSectionHeaderViewDelegate> *_delegate;
    UIView *_hairlineView;
    double _topContentInset;
}

@property(assign,readonly) MusicActionableHeaderView * actionableHeaderView;
@property(assign,readwrite) bool alignsHairlineWithTitle;
@property(assign,readwrite) double bottomContentInset;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MusicEntityVerticalSectionHeaderViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) double topContentInset;

+ (struct { long long x1; double x2; double x3; })_actionableHeaderMetrics;
+ (Class)actionableHeaderViewClass;
+ (double)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)actionableHeaderView;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (bool)alignsHairlineWithTitle;
- (double)bottomContentInset;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAlignsHairlineWithTitle:(bool)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopContentInset:(double)arg1;
- (double)topContentInset;

@end