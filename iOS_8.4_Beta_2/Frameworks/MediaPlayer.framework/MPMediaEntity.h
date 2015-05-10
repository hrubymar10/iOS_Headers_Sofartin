/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntity : NSObject <MusicEntityValueProviding, NSCopying, NSSecureCoding> {
    MIPMultiverseIdentifier *_multiverseIdentifier;
}

@property(assign,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isDownloadable;
@property(assign,readonly) bool isDownloadableStoreOffer;
@property(assign,readonly) bool isPurchasableStoreOffer;
@property(assign,readonly) MPMediaLibrary * mediaLibrary;
@property(assign,readonly) MIPMultiverseIdentifier * multiverseIdentifier;
@property(assign,readonly) unsigned long long persistentID;
@property(assign,readonly) long long preferredStoreOfferVariant;
@property(assign,readonly) MPMediaItem * representativeItem;
@property(assign,readonly) Class superclass;

+ (id)_customPropertyHandlersCollection;
+ (bool)canFilterByProperty:(id)arg1;
+ (void)registerCustomProperty:(id)arg1 withValueHandler:(id)arg2;
+ (void)registerSupportedCustomProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (id)_valuesForRegularEntityProperties:(id)arg1;
- (id)buyOffer;
- (id)buyOfferForVariant:(long long)arg1;
- (id)cachedValueForProperty:(id)arg1 isCached:(bool*)arg2;
- (id)completionOfferForVariant:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityUniqueIdentifier;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (unsigned long long)hash;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (void)invalidateCachedProperties;
- (bool)isDownloadable;
- (bool)isDownloadableStoreOffer;
- (bool)isEqual:(id)arg1;
- (bool)isPurchasableStoreOffer;
- (id)mediaLibrary;
- (id)multiverseIdentifier;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)persistentID;
- (long long)preferredStoreOfferVariant;
- (id)representativeItem;
- (id)valueForEntityProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
