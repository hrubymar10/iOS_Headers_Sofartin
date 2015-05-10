/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate> {
    MusicActionableHeaderView *_actionableHeaderView;
    NSString *_backdropGroupName;
    UIColor *_backgroundColorForNonFloatingState;
    <MusicLibraryBrowseSectionHeaderViewDelegate> *_delegate;
    _UIBackdropView *_floatingBackdropView;
    long long _hairlineStyleForNonFloatingState;
    UIView *_hairlineView;
    UIColor *_headerTextColorForNonFloatingState;
    double _topContentInset;
}

@property(assign,copy) NSString * actionButtonTitle;
@property(assign,copy) NSString * backdropGroupName;
@property(assign,retain) UIColor * backgroundColorForNonFloatingState;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MusicLibraryBrowseSectionHeaderViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) long long hairlineStyleForNonFloatingState;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * headerText;
@property(assign,retain) UIColor * headerTextColorForNonFloatingState;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) double topContentInset;

+ (struct { long long x1; double x2; double x3; })_actionableHeaderMetrics;
+ (double)heightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_setupForCurrentFloatingState;
- (id)actionButtonTitle;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)backdropGroupName;
- (id)backgroundColorForNonFloatingState;
- (void)dealloc;
- (id)delegate;
- (long long)hairlineStyleForNonFloatingState;
- (id)headerText;
- (id)headerTextColorForNonFloatingState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActionButtonTitle:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundColorForNonFloatingState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setHairlineStyleForNonFloatingState:(long long)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderTextColorForNonFloatingState:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTopContentInset:(double)arg1;
- (double)topContentInset;

@end
