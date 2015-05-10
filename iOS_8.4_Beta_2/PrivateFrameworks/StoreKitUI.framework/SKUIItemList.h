/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemList : NSObject <NSCopying, SKUICacheCoding> {
    NSMutableArray *_items;
    NSString *_seeAllTitle;
    NSString *_seeAllURLString;
    NSString *_title;
    NSSet *_unavailableItemIdentifiers;
}

@property(assign,readonly) NSMutableDictionary * cacheRepresentation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * items;
@property(assign,copy) NSString * seeAllTitle;
@property(assign,copy) NSString * seeAllURLString;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;
@property(assign,copy) NSSet * unavailableItemIdentifiers;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)cacheRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (bool)isUnavailableItemIdentifier:(id)arg1;
- (id)items;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)seeAllTitle;
- (id)seeAllURLString;
- (void)setItems:(id)arg1;
- (void)setSeeAllTitle:(id)arg1;
- (void)setSeeAllURLString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)title;
- (id)unavailableItemIdentifiers;

@end
