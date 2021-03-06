/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reloadResultsView;
- (void)_resultButtonAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_resultsViewContentInset;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
