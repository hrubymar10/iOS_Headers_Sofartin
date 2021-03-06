/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {
    NSNumber *_accountIdentifier;
    NSMutableDictionary *_itemIDsByType;
}

@property(assign,retain) NSNumber * accountIdentifier;
@property(assign,readonly) NSArray * allItemTypes;

- (id)accountIdentifier;
- (void)addItemIdentifier:(id)arg1 forItemType:(id)arg2;
- (id)allItemTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)itemIdentifiersForItemType:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;

@end
