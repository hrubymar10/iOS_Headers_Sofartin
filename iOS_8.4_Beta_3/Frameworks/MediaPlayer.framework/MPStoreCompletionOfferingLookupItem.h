/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOfferingLookupItem : NSObject {
    MPMediaQuery *_albumItemsQuery;
    id _responseBlock;
    NSNumber *_storeLookupID;
    unsigned long long _tokenID;
    bool _wantsArtwork;
}

@property (nonatomic, readonly) MPMediaQuery *albumItemsQuery;
@property (nonatomic, readonly, copy) id responseBlock;
@property (nonatomic, readonly) NSNumber *storeLookupID;
@property (nonatomic, readonly) NSString *storeLookupIDString;
@property (nonatomic, readonly) unsigned long long tokenID;
@property (nonatomic, readonly) bool wantsArtwork;

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;

- (void).cxx_destruct;
- (id)_specificationForArtworkSizesToRequest;
- (id)albumItemsQuery;
- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(bool)arg3 responseBlock:(id)arg4;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
- (id)newLookupRequest;
- (id)responseBlock;
- (id)storeLookupID;
- (id)storeLookupIDString;
- (unsigned long long)tokenID;
- (bool)wantsArtwork;

@end
