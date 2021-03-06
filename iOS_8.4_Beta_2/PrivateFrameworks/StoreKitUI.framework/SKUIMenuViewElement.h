/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMenuViewElement : SKUIViewElement {
    BOOL _enabled;
    SKUILabelViewElement *_menuLabel;
}

@property(assign,readonly) NSArray * menuItemTitles;
@property(assign,readonly) SKUILabelViewElement * menuLabel;
@property(assign,readonly) long long selectedItemIndex;
@property(assign,readonly) SKUIItemViewElement * titleItem;

- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (id)menuItemTitles;
- (id)menuLabel;
- (long long)selectedItemIndex;
- (id)titleItem;

@end
