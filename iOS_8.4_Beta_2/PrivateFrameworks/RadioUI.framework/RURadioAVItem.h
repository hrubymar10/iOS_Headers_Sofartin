/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioAVItem : MPAVItem {
    NSArray *_buyOffers;
    bool _heartbeatInvalid;
    bool _isInWishList;
    RadioTrack *_radioTrack;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
}

@property(getter=isHeartbeatInvalid,assign,readwrite) bool heartbeatInvalid;
@property(assign,readwrite) bool isInWishList;
@property(assign,retain) RadioStation * station;
@property(assign,readonly) NSString * stationHash;
@property(assign,readonly) long long stationID;
@property(assign,readonly) NSString * stationName;
@property(assign,readonly) NSString * stationStringID;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_applyLoudnessInfoForVolumeNormalization;
- (void)_internalIsInWishlistDidChangeNotification:(id)arg1;
- (long long)_persistedLikedState;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)addDerivedStationForArtist:(bool)arg1 withCompletionHandler:(id)arg2;
- (id)aggregateDictionaryItemType;
- (id)album;
- (long long)albumStoreID;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)buyOffers;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)copyrightText;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRadioTrack:(id)arg1;
- (bool)isCloudItem;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitTrack;
- (bool)isHeartbeatInvalid;
- (bool)isInWishList;
- (bool)isRadioItem;
- (bool)isStreamable;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2;
- (id)localizedPositionInPlaylistString;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)mpuReporting_itemType;
- (bool)mpuReporting_shouldReportPlayEventsToStore;
- (id)mpuReporting_trackInfo;
- (unsigned long long)persistentID;
- (id)radioTrack;
- (void)reevaluateType;
- (void)setHeartbeatInvalid:(bool)arg1;
- (void)setIsInWishList:(bool)arg1;
- (void)setStation:(id)arg1;
- (id)station;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;
- (long long)storeItemInt64ID;
- (id)storeLookupDictionary;
- (bool)supportsSettingCurrentTime;
- (id)title;
- (id)titlesForTime:(double)arg1;
- (unsigned long long)type;
- (id)urlTimeMarkers;

@end
