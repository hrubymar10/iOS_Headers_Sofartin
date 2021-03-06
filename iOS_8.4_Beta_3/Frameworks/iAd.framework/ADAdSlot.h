/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdSlot : NSObject <ADBannerViewInternalDelegate, NSSecureCoding> {
    id _completionHandler;
    <ADAdSlotDelegate> *_delegate;
    bool _didBeginPlayback;
    bool _didReportFinish;
    bool _didRequest;
    NSData *_followingSongData;
    bool _gatewayAdSlot;
    NSString *_identifier;
    NSMutableArray *_pendingBannerLoads;
    NSData *_previousSongData;
    NSData *_stationData;
    NSMutableArray *_visuallyDisengagedBanners;
    NSMutableArray *_visuallyEngagedBanners;
}

@property (nonatomic, readonly, retain) NSArray *ads;
@property (nonatomic, copy) id completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADAdSlotDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didBeginPlayback;
@property (nonatomic) bool didReportFinish;
@property (nonatomic) bool didRequest;
@property (nonatomic, copy) NSData *followingSongData;
@property (nonatomic) bool gatewayAdSlot;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *pendingBannerLoads;
@property (nonatomic, copy) NSData *previousSongData;
@property (nonatomic, copy) NSData *stationData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *visuallyDisengagedBanners;
@property (nonatomic, retain) NSMutableArray *visuallyEngagedBanners;

+ (bool)supportsSecureCoding;

- (id)_bannersForAds:(id)arg1;
- (void)_considerInvokingCompletionHandler;
- (void)_visuallyEngagedDidChange;
- (id)ads;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (id)completionHandler;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)didBeginPlayback;
- (void)didFinishPlaybackOfAds:(id)arg1 skippedCount:(long long)arg2;
- (bool)didReportFinish;
- (bool)didRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)followingSongData;
- (bool)gatewayAdSlot;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadVisuallyEngagedAds:(id)arg1 visuallyDisengagedAds:(id)arg2 completionHandler:(id)arg3;
- (id)pendingBannerLoads;
- (id)previousSongData;
- (void)setCompletionHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidBeginPlayback:(bool)arg1;
- (void)setDidReportFinish:(bool)arg1;
- (void)setDidRequest:(bool)arg1;
- (void)setFollowingSongData:(id)arg1;
- (void)setGatewayAdSlot:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPendingBannerLoads:(id)arg1;
- (void)setPreviousSongData:(id)arg1;
- (void)setStationData:(id)arg1;
- (void)setVisuallyDisengagedBanners:(id)arg1;
- (void)setVisuallyEngagedBanners:(id)arg1;
- (id)stationData;
- (id)visuallyDisengagedBanners;
- (id)visuallyEngagedBanners;
- (void)willBeginPlaybackOfAds:(id)arg1 forSpace:(int)arg2;

@end
