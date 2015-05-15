/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShareSheetActivityViewElement : SKUIViewElement {
    NSString *_activityType;
    NSURL *_contentSourceURL;
}

@property(assign,readonly) SKUIURLViewElement * URL;
@property(assign,readonly) NSString * activityType;
@property(assign,readonly) NSURL * contentSourceURL;
@property(assign,readonly) SKUIImageViewElement * image;
@property(assign,readonly) SKUILabelViewElement * message;
@property(assign,readonly) SKUILabelViewElement * title;

- (void).cxx_destruct;
- (id)URL;
- (id)activityType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)contentSourceURL;
- (id)image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)message;
- (id)title;

@end
