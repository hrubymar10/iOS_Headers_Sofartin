/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring> {
    MusicProfileViewController *_profileViewController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

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