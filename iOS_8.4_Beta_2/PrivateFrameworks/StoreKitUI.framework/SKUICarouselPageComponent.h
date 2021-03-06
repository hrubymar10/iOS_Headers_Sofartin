/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSArray *_carouselItems;
    double _cycleInterval;
    long long _missingItemCount;
}

@property(assign,readonly) NSArray * carouselItems;
@property(assign,readonly) double cycleInterval;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) SKUICarouselViewElement * viewElement;

- (void).cxx_destruct;
- (id)carouselItems;
- (long long)componentType;
- (double)cycleInterval;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (id)metricsElementName;
- (void)updateWithMissingItems:(id)arg1;
- (id)valueForMetricsField:(id)arg1;

@end
