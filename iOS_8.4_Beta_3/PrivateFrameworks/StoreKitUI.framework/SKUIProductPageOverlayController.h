/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageOverlayController : NSObject <SKStoreProductViewControllerDelegate, SKUIIPadProductPageDelegate> {
    SKUIClientContext *_clientContext;
    <SKUIProductPageOverlayDelegate> *_delegate;
    SKUIItem *_initialItem;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIViewController *_parentViewController;
}

@property(assign,readonly) NSArray * URLs;
@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUIProductPageOverlayDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) long long numberOfVisibleOverlays;
@property(assign,readonly) UIViewController * parentViewController;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UIView * view;

- (void).cxx_destruct;
- (id)URLs;
- (void)_backstopViewAction:(id)arg1;
- (void)_finishDismissAndNotifyDelegate:(bool)arg1 withViewController:(id)arg2;
- (void)_removeOverlayViewController;
- (void)_showOverlayViewController;
- (void)_showWithInitialViewController:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(id)arg3;
- (void)iPadProductPageCannotOpen:(id)arg1;
- (id)initWithParentViewController:(id)arg1;
- (long long)numberOfVisibleOverlays;
- (id)parentViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showWithInitialItem:(id)arg1;
- (void)showWithInitialItemIdentifier:(long long)arg1;
- (void)showWithInitialProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (void)showWithInitialURL:(id)arg1;
- (void)showWithInitialURLRequest:(id)arg1;
- (void)showWithInitialURLs:(id)arg1;
- (id)view;

@end