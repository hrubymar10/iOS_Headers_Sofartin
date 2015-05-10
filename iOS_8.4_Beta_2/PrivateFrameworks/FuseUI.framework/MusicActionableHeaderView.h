/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicActionableHeaderView : UIView {
    struct { 
        long long titleTextStyle; 
        double titleBaselineOffsetFromBottom; 
        double titleBaselineOffsetFromTop; 
    } _actionableHeaderMetrics;
    MPUTextButton *_button;
    NSString *_buttonTitle;
    <MusicActionableHeaderViewDelegate> *_delegate;
    bool _enforceMinimumLayoutMargins;
    NSString *_headerTitle;
    UILabel *_headerTitleLabel;
}

@property(assign,readwrite) struct { long long x1; double x2; double x3; } actionableHeaderMetrics;
@property(assign,copy) NSString * buttonTitle;
@property(assign,readwrite) <MusicActionableHeaderViewDelegate> * delegate;
@property(assign,readwrite) bool enforceMinimumLayoutMargins;
@property(assign,copy) NSString * headerTitle;
@property(assign,retain) UIColor * headerTitleColor;

+ (struct { long long x1; double x2; double x3; })defaultActionableHeaderMetrics;
+ (double)heightForTraitCollection:(id)arg1;
+ (double)heightForTraitCollection:(id)arg1 withActionableHeaderMetrics:(struct { long long x1; double x2; double x3; })arg2;

- (void).cxx_destruct;
- (void)_handleButtonTapped:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (struct { long long x1; double x2; double x3; })actionableHeaderMetrics;
- (id)buttonTitle;
- (void)dealloc;
- (id)delegate;
- (bool)enforceMinimumLayoutMargins;
- (id)headerTitle;
- (id)headerTitleColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActionableHeaderMetrics:(struct { long long x1; double x2; double x3; })arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnforceMinimumLayoutMargins:(bool)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTitleColor:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end