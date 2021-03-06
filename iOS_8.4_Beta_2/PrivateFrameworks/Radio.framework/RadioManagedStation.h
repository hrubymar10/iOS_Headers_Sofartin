/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioManagedStation : NSManagedObject

@property(assign,retain) NSData * adData;
@property(assign,readwrite) long long adamID;
@property(assign,copy) NSURL * artworkURL;
@property(assign,copy) NSData * artworkURLData;
@property(assign,copy) NSString * coreSeedName;
@property(assign,copy) NSDictionary * debugDictionary;
@property(assign,readonly) NSDictionary * dictionaryRepresentation;
@property(assign,readwrite) bool editEnabled;
@property(assign,retain) NSArray * editableFields;
@property(getter=isFeatured,assign,readwrite) bool featured;
@property(getter=isGatewayVideoAdEnabled,assign,readwrite) bool gatewayVideoAdEnabled;
@property(assign,readwrite) bool hasSkipRules;
@property(assign,readwrite) unsigned long long impressionThreshold;
@property(assign,readwrite) bool isExplicit;
@property(assign,readwrite) bool likesEnabled;
@property(assign,copy) NSString * name;
@property(assign,readwrite) long long persistentID;
@property(getter=isPremiumPlacement,assign,readwrite) bool premiumPlacement;
@property(getter=isPreview,assign,readonly) bool preview;
@property(getter=isPreviewOnly,assign,readwrite) bool previewOnly;
@property(assign,retain) NSArray * seedTracks;
@property(assign,copy) NSString * shareToken;
@property(getter=isShared,assign,readwrite) bool shared;
@property(getter=isSharingEnabled,assign,readwrite) bool sharingEnabled;
@property(assign,readwrite) bool skipEnabled;
@property(assign,readwrite) int skipFrequency;
@property(assign,copy) NSString * skipIdentifier;
@property(assign,readwrite) double skipInterval;
@property(assign,copy) NSArray * skipTimestamps;
@property(assign,readwrite) long long songMixType;
@property(assign,readwrite) int sortOrder;
@property(getter=isSponsored,assign,readwrite) bool sponsored;
@property(assign,copy) NSString * stationDescription;
@property(assign,copy) NSString * stationHash;
@property(assign,readwrite) long long stationID;
@property(assign,copy) NSString * stationStringID;
@property(assign,retain) NSURL * streamURL;
@property(getter=isSubscribed,assign,readwrite) bool subscribed;
@property(assign,readwrite) int subscriberCount;
@property(assign,copy) NSArray * trackPlaybackDescriptorQueue;
@property(assign,readwrite) bool virtualPlayEnabled;

+ (id)defaultPropertiesToFetch;

- (id)adData;
- (long long)adamID;
- (id)additionalReferencedTrackDescriptors;
- (id)artworkURL;
- (id)artworkURLData;
- (id)coreSeedName;
- (id)debugDictionary;
- (id)dictionaryRepresentation;
- (bool)editEnabled;
- (id)editableFields;
- (id)feedbackDictionaryRepresentation;
- (bool)hasSkipRules;
- (unsigned long long)impressionThreshold;
- (bool)isExplicit;
- (bool)isFeatured;
- (bool)isGatewayVideoAdEnabled;
- (bool)isPremiumPlacement;
- (bool)isPreview;
- (bool)isPreviewOnly;
- (bool)isShared;
- (bool)isSharingEnabled;
- (bool)isSponsored;
- (bool)isSubscribed;
- (bool)likesEnabled;
- (id)name;
- (long long)persistentID;
- (id)seedTracks;
- (void)setAdData:(id)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLData:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setEditEnabled:(bool)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setFeatured:(bool)arg1;
- (void)setGatewayVideoAdEnabled:(bool)arg1;
- (void)setHasSkipRules:(bool)arg1;
- (void)setImpressionThreshold:(unsigned long long)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setLikesEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPremiumPlacement:(bool)arg1;
- (void)setPreviewOnly:(bool)arg1;
- (void)setSeedTracks:(id)arg1;
- (void)setShareToken:(id)arg1;
- (void)setShared:(bool)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setSkipEnabled:(bool)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipInterval:(double)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSongMixType:(long long)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setStationDescription:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1;
- (void)setVirtualPlayEnabled:(bool)arg1;
- (id)shareToken;
- (bool)skipEnabled;
- (int)skipFrequency;
- (id)skipIdentifier;
- (double)skipInterval;
- (id)skipTimestamps;
- (long long)songMixType;
- (int)sortOrder;
- (id)stationDescription;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (id)streamCertificateURL;
- (id)streamKeyURL;
- (id)streamURL;
- (int)subscriberCount;
- (id)trackPlaybackDescriptorQueue;
- (bool)virtualPlayEnabled;

@end
