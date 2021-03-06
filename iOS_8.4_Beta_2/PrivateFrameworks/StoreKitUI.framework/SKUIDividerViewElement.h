/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDividerViewElement : SKUIViewElement {
    SKUIButtonViewElement *_button;
    long long _dividerType;
    SKUIViewElementText *_text;
}

@property(assign,readonly) SKUIButtonViewElement * button;
@property(assign,readwrite) long long dividerType;
@property(assign,readonly) SKUIViewElementText * text;

- (void).cxx_destruct;
- (id)button;
- (long long)dividerType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)pageComponentType;
- (void)setDividerType:(long long)arg1;
- (id)text;

@end
