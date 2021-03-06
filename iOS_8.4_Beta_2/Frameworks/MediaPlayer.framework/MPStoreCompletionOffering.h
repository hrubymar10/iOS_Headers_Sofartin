/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
    MPStoreCollectionCompletionOffering *_collectionWithCompletionItemsOffering;
    MPMediaQuery *_localItemsQuery;
    long long _preferredStoreOfferVariant;
    long long _presentationStyle;
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    NSURL *_storeURL;
}

@property(assign,readonly) MPStoreOfferMediaItemCollection * collectionWithCompletionItems;
@property(assign,readwrite) long long preferredStoreOfferVariant;
@property(assign,readonly) long long presentationStyle;
@property(assign,copy) NSURL * storeURL;

+ (long long)defaultOfferVariant;
+ (id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2;
+ (void)setDefaultOfferVariant:(long long)arg1;

- (void).cxx_destruct;
- (void)_loadOfferingData;
- (id)collectionWithCompletionItems;
- (id)copyByInvalidatingCalculatedContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2;
- (long long)preferredStoreOfferVariant;
- (long long)presentationStyle;
- (void)setPreferredStoreOfferVariant:(long long)arg1;
- (id)storeURL;

@end
