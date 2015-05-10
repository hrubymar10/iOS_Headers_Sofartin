/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemViewElement : SKUIViewElement {
    SKUIViewElementText *_itemText;
    bool _selected;
}

@property(assign,readonly) SKUIViewElementText * itemText;
@property(getter=isSelected,assign,readonly) bool selected;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isSelected;
- (id)itemText;

@end
