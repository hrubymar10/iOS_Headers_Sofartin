/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar> {
    SKUIApplicationController *_applicationController;
    NSMutableArray *_tabBarItems;
    SKUIJSTabBarItem *_transientTabBarItem;
}

@property (nonatomic, retain) SKUIJSTabBarItem *selectedTab;
@property (nonatomic, readonly) NSArray *tabs;
@property (nonatomic, readonly) SKUIJSTabBarItem *transientTab;

- (void).cxx_destruct;
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(id)arg1;
- (id)_selectedTabBarItemForIndex:(long long)arg1;
- (id)initWithAppContext:(id)arg1 controller:(id)arg2;
- (id)selectedTab;
- (void)sendOnNeedsContentForTabBarItem:(id)arg1;
- (void)sendOnUpdate;
- (void)setSelectedTab:(id)arg1;
- (id)tabs;
- (id)transientTab;

@end
