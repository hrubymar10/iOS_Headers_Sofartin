/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfViewElement : SKUIViewElement {
    long long _numberOfRows;
    id _shelfItemViewElementValidator;
    NSString *_slideshowTitle;
}

@property(assign,readonly) long long numberOfRows;
@property(assign,copy) id shelfItemViewElementValidator;
@property(assign,readonly) NSString * slideshowTitle;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)numberOfRows;
- (long long)pageComponentType;
- (void)setShelfItemViewElementValidator:(id)arg1;
- (id)shelfItemViewElementValidator;
- (id)slideshowTitle;

@end
