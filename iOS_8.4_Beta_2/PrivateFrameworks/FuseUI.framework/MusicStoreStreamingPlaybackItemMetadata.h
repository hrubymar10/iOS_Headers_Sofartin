/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreStreamingPlaybackItemMetadata : MPMediaLibraryPlaybackItemMetadata {
    MusicStoreItemMetadata *_storeItemMetadata;
    MusicStorePlaybackRequestItem *_storePlaybackRequestItem;
}

@property(assign,retain) MusicStorePlaybackRequestItem * storePlaybackRequestItem;

+ (id)_mediaItemForStorePlaybackRequestItem:(id)arg1;

- (void).cxx_destruct;
- (id)albumArtistName;
- (long long)albumStoreAdamID;
- (id)albumTitle;
- (id)artistName;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)contentTitle;
- (unsigned long long)contentType;
- (id)copyrightText;
- (long long)endpointType;
- (double)expectedDuration;
- (unsigned long long)hash;
- (id)initWithStorePlaybackRequestItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStorePlaybackRequestItem:(id)arg1;
- (bool)shouldReportPlayEventsToStore;
- (long long)storeAdamID;
- (id)storeItemLookupDictionary;
- (id)storePlaybackRequestItem;
- (long long)storeSubscriptionAdamID;

@end