/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate> {
    SKUIQuicklinksViewController *_quicklinksViewController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) SKUIQuicklinksPageComponent * pageComponent;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_quicklinksViewController;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
