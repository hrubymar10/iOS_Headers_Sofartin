/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoreNavigationController : UINavigationController {
    UIMoreListController *_moreListController;
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property(assign,readwrite) bool allowsCustomizing;
@property(assign,readwrite) UIViewController * displayedViewController;
@property(assign,retain) UIViewController * moreListController;
@property(assign,retain) NSArray * moreViewControllers;
@property(assign,readwrite) bool moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (void)_ensureChildrenHaveParentViewController;
- (id)_preparedViewController:(id)arg1;
- (void)_redisplayMoreTableView;
- (void)_restoreOriginalNavigationController;
- (id)_stateRestorationParentForChildViewController:(id)arg1 index:(unsigned long long*)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (bool)allowsCustomizing;
- (void)dealloc;
- (void)didShowViewController:(id)arg1 animated:(bool)arg2;
- (id)displayedViewController;
- (id)init;
- (id)moreListController;
- (id)moreViewControllers;
- (bool)moreViewControllersChanged;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)restoreOriginalNavigationController:(id)arg1;
- (void)setAllowsCustomizing:(bool)arg1;
- (void)setDisplayedViewController:(id)arg1;
- (void)setMoreViewControllers:(id)arg1;
- (void)setMoreViewControllersChanged:(bool)arg1;

@end
