/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLocalPlaybackEventDataSource : NSObject <ADBannerViewDelegate, ADBannerViewDelegatePrivate> {
    unsigned long long _adIndex;
    ADBannerView *_bannerView;
    <MusicLocalPlaybackEventDelegate> *_delegate;
    NSMutableArray *_historyMediaItems;
    MPMediaPlaylist *_playbackHistoryPlaylist;
    NSMutableDictionary *_storeIDsToOffers;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MusicLocalPlaybackEventDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_adIdentifierForHistoryItem:(id)arg1;
- (id)_bannerViewForMediaItem:(id)arg1;
- (void)_buildAdBannerForMediaItems:(id)arg1;
- (void)_fetchOffersForMediaItems:(id)arg1 completionHandler:(id)arg2;
- (id)_mediaItemsForHistoryPlaylist:(id)arg1;
- (bool)_shouldFetchOfferForItem:(id)arg1;
- (void)addPlaybackEventForItem:(id)arg1 lookupDictionary:(id)arg2 exisitingMediaItem:(id)arg3;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (id)bannerViewForMediaItem:(id)arg1;
- (id)delegate;
- (id)initWithPlaylist:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)playbackEventCount;
- (void)setDelegate:(id)arg1;
- (id)storeOffersForStoreID:(id)arg1;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end
