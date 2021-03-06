/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPageComponentContext : NSObject <NSCopying> {
    NSDictionary *_componentDictionary;
    NSArray *_ineligibleGratisIdentifiers;
    NSDictionary *_items;
    long long _layoutStyle;
    double _pageGenerationTime;
    NSDictionary *_platformKeyProfileOverrides;
    NSMutableSet *_unavailableItems;
}

@property(assign,copy) NSSet * allUnavailableItemIdentifiers;
@property(assign,copy) NSDictionary * componentDictionary;
@property(assign,copy) NSArray * ineligibleGratisIdentifiers;
@property(assign,copy) NSDictionary * items;
@property(assign,readwrite) long long layoutStyle;
@property(assign,readonly) double pageGenerationTime;
@property(assign,copy) NSDictionary * platformKeyProfileOverrides;

- (void).cxx_destruct;
- (void)addUnavailableItemIdentifiers:(id)arg1;
- (id)allUnavailableItemIdentifiers;
- (id)componentDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ineligibleGratisIdentifiers;
- (id)init;
- (bool)isUnavailableItemIdentifier:(id)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (id)items;
- (long long)layoutStyle;
- (double)pageGenerationTime;
- (id)platformKeyProfileOverrides;
- (void)setComponentDictionary:(id)arg1;
- (void)setIneligibleGratisIdentifiers:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setPlatformKeyProfileOverrides:(id)arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;

@end
