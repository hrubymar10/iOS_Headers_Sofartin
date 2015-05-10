/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {
    ABPersonViewControllerHelper *_helper;
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
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) ABPersonViewControllerHelper * helper;
@property(assign,readwrite) double minimumBottomInset;
@property(assign,readonly) Class superclass;
@property(assign,retain) <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (id)helper;
- (void)layoutSubviews;
- (double)minimumBottomInset;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHelper:(id)arg1;
- (void)setMinimumBottomInset:(double)arg1;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)touchesShouldCancelInContentView:(id)arg1;

@end