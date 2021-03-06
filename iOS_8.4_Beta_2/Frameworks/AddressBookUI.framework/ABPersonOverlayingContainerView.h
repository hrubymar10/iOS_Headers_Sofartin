/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {
    UIView *_abContentView;
    UIView *_backgroundView;
    double _minimumBottomInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _savedContentInset;
    <ABPersonTabsLayoutManager> *_tabsLayoutManager;
}

@property(assign,retain) UIView * backgroundView;
@property(assign,retain) UIView * contentView;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) double minimumBottomInset;
@property(assign,readonly) Class superclass;
@property(assign,retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (void)_updateContentFrameAndSize;
- (id)backgroundView;
- (id)contentView;
- (void)dealloc;
- (void)layoutSubviews;
- (double)minimumBottomInset;
- (void)setBackgroundView:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMinimumBottomInset:(double)arg1;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;

@end
