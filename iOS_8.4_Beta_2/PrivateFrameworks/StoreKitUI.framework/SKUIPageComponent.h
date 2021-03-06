/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider> {
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property(assign,readonly) long long componentType;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * metricsElementName;
@property(assign,readwrite) long long metricsLocationPosition;
@property(getter=isMissingItemData,assign,readonly) bool missingItemData;
@property(assign,readonly) Class superclass;
@property(assign,readonly) SKUIViewElement * viewElement;

- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_setMetricsLocationPosition:(long long)arg1;
- (long long)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (id)metricsElementName;
- (long long)metricsLocationPosition;
- (id)valueForMetricsField:(id)arg1;
- (id)viewElement;

@end
