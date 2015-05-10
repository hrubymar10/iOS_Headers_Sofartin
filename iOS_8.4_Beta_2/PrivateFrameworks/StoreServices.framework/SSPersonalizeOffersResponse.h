/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSArray * personalizedItems;
@property(assign,readonly) Class superclass;

- (void)_setPersonalizedItems:(id)arg1;
- (id)actionDisplayNameForItemType:(id)arg1;
- (id)actionParametersForItemIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)personalizedItems;
- (id)priceDisplayForItemType:(id)arg1;
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;
- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;

@end