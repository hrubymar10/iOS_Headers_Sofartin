/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrack : NSObject <NSSecureCoding, RURadioItemIdentifier> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bestOfferDictionary;
    NSDate *_expirationDate;
    bool _isPreorderAlbum;
    NSMutableDictionary *_trackDictionary;
}

@property(assign,copy) NSData * adData;
@property(assign,readonly) RadioTrackAdInfo * adInfo;
@property(assign,readonly) RadioAudioClip * afterPromoAudioClip;
@property(assign,copy) NSString * album;
@property(assign,copy) NSString * albumBuyButtonText;
@property(assign,readonly) long long albumBuyButtonType;
@property(assign,readonly) long long albumID;
@property(assign,copy) NSURL * albumURL;
@property(assign,copy) NSString * artist;
@property(assign,readonly) RadioArtworkCollection * artworkCollection;
@property(assign,copy) NSArray * assets;
@property(assign,readonly) RadioAudioClip * beforePromoAudioClip;
@property(assign,copy) NSString * copyrightText;
@property(assign,readonly) long long dateFetched;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugMessage;
@property(assign,copy) NSString * description;
@property(assign,readonly) double duration;
@property(assign,retain) NSDate * expirationDate;
@property(assign,copy) NSDictionary * feedbackDictionaryRepresentation;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool inWishList;
@property(assign,readonly) bool isExplicit;
@property(assign,readonly) bool isPreorderAlbum;
@property(assign,readonly) int likeStatus;
@property(assign,copy) NSDictionary * metadataDictionary;
@property(assign,copy) NSArray * offers;
@property(assign,copy) NSURL * previewURL;
@property(assign,readonly) long long shuffleSeed;
@property(assign,readonly) double startTime;
@property(assign,readonly) long long storeID;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;
@property(assign,copy) NSDictionary * trackDictionary;
@property(assign,copy) NSDictionary * trackInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_offers;
- (void)_performTransaction:(id)arg1;
- (void)_performTransactionAndWait:(id)arg1;
- (void)_performWriteTransaction:(id)arg1;
- (void)_performWriteTransactionAndWait:(id)arg1;
- (id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2;
- (id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)adData;
- (id)adInfo;
- (id)afterPromoAudioClip;
- (id)album;
- (id)albumBuyButtonText;
- (long long)albumBuyButtonType;
- (long long)albumID;
- (id)albumURL;
- (id)artist;
- (id)artworkCollection;
- (id)assets;
- (id)beforePromoAudioClip;
- (id)copyrightText;
- (long long)dateFetched;
- (id)debugMessage;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)feedbackDictionaryRepresentation;
- (bool)inWishList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackDictionary:(id)arg1;
- (bool)isExplicit;
- (bool)isPreorderAlbum;
- (int)likeStatus;
- (id)metadataDictionary;
- (id)offers;
- (id)previewURL;
- (id)radioIdentifier;
- (void)setExpirationDate:(id)arg1;
- (void)setInWishList:(bool)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (long long)shuffleSeed;
- (double)startTime;
- (long long)storeID;
- (id)title;
- (id)trackDictionary;
- (id)trackInfo;

@end
