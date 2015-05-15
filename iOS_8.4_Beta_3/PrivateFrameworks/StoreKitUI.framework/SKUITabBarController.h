/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    SKUITabBarBackgroundView *_tabBarBackgroundView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (Class)_moreNavigationControllerClass;

- (void).cxx_destruct;
- (id)_backdropGroupName;
- (void)_layoutFloatingOverlayView;
- (void)_setSelectedViewController:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (id)floatingOverlayViewController;
- (id)init;
- (id)moreNavigationController;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(bool)arg2;
- (void)setTabBarBackdropStyle:(long long)arg1;
- (void)setTransientViewController:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
