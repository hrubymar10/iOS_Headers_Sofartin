/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIObservableNavigationStack, SKUIScrollingTabBarBottomInsetAwareContent> {
    <SKUINavigationStackObserver> *_navigationStackObserver;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) <SKUINavigationStackObserver> * navigationStackObserver;
@property(getter=isShowingNavigationStackRootContent,assign,readwrite) bool showingNavigationStackRootContent;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_observedNavigationStackDidChange;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isShowingNavigationStackRootContent;
- (id)navigationStackObserver;
- (void)popToNavigationStackRootContentAnimated:(bool)arg1 withBehavior:(long long)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;
- (void)setNavigationStackObserver:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end