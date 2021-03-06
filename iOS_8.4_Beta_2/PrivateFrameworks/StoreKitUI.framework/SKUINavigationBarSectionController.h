/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {
    SKUINavigationBarContext *_navigationBarContext;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property(assign,retain) SKUINavigationBarContext * context;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UIView * view;
@property(assign,readonly) SKUIViewElementLayoutContext * viewLayoutContext;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)context;
- (void)dealloc;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void)reloadSectionViews;
- (void)setContext:(id)arg1;
- (id)view;
- (id)viewForElementIdentifier:(id)arg1;
- (id)viewLayoutContext;
- (void)willAppearInNavigationBar;

@end
