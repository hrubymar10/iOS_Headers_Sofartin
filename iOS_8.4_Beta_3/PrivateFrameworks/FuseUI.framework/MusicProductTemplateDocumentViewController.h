/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring> {
    MusicProductViewController *_productViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)managesNavigationBarContents;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2;
- (id)navigationBarTintColor;
- (bool)prefersNavigationBarBackgroundViewHidden;
- (void)setClientContext:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
