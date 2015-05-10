/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement {
    NSString *_entityTypeString;
    NSArray *_prefetchedProperties;
}

@property(assign,copy) NSString * entityTypeString;
@property(assign,readonly) SKUILimitListViewElement * limitListViewElement;
@property(assign,readonly) SKUIPredicateListViewElement * predicateListViewElement;
@property(assign,copy) NSArray * prefetchedProperties;
@property(assign,readonly) SKUISortDescriptorListViewElement * sortDescriptorListViewElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityTypeString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)limitListViewElement;
- (id)predicateListViewElement;
- (id)prefetchedProperties;
- (id)sortDescriptorListViewElement;

@end
