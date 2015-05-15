/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTracksRequest : RadioRequest {
    NSNumber *_accountUniqueIdentifier;
    NSDictionary *_additionalRequestParameters;
    unsigned long long _globalVersion;
    NSData *_heartbeatTokenData;
    bool _includeCleanTracksOnly;
    unsigned long long _numberOfTracks;
    NSArray *_playActivityFeedEvents;
    RadioPlayEventCollection *_playEventCollection;
    RadioPlaybackContext *_playbackContext;
    SSVPlaybackLease *_playbackLease;
    long long _reasonType;
    SSURLConnectionRequest *_request;
    bool _shouldIncludeAsset;
    bool _shouldIncludeStationInResponse;
    bool _skipPromptForSeamlessPlayback;
    NSString *_stationHash;
    long long _stationID;
    RadioStationMatchContext *_stationMatchContext;
    NSString *_stationStringID;
}

@property (nonatomic, readonly, copy) NSNumber *accountUniqueIdentifier;
@property (nonatomic, copy) NSDictionary *additionalRequestParameters;
@property (nonatomic, copy) NSData *heartbeatTokenData;
@property (nonatomic) bool includeCleanTracksOnly;
@property (nonatomic) unsigned long long numberOfTracks;
@property (nonatomic, copy) NSArray *playActivityFeedEvents;
@property (nonatomic, copy) RadioPlayEventCollection *playEventCollection;
@property (nonatomic, copy) RadioPlaybackContext *playbackContext;
@property (nonatomic, retain) SSVPlaybackLease *playbackLease;
@property (nonatomic) long long reasonType;
@property (nonatomic) bool shouldIncludeAsset;
@property (nonatomic) bool shouldIncludeStationInResponse;
@property (nonatomic) bool skipPromptForSeamlessPlayback;
@property (nonatomic, retain) RadioStationMatchContext *stationMatchContext;

- (void).cxx_destruct;
- (void)_getPlaybackLeaseRequestParametersWithStoreBag:(id)arg1 leaseRequest:(id)arg2 completionHandler:(id)arg3;
- (id)_playbackContextForStation:(id)arg1;
- (id)accountUniqueIdentifier;
- (id)additionalRequestParameters;
- (void)cancel;
- (id)heartbeatTokenData;
- (bool)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2;
- (id)initWithStationStringID:(id)arg1 globalVersion:(unsigned long long)arg2;
- (unsigned long long)numberOfTracks;
- (id)playActivityFeedEvents;
- (id)playEventCollection;
- (id)playbackContext;
- (id)playbackLease;
- (long long)reasonType;
- (void)setAdditionalRequestParameters:(id)arg1;
- (void)setHeartbeatTokenData:(id)arg1;
- (void)setIncludeCleanTracksOnly:(bool)arg1;
- (void)setNumberOfTracks:(unsigned long long)arg1;
- (void)setPlayActivityFeedEvents:(id)arg1;
- (void)setPlayEventCollection:(id)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setReasonType:(long long)arg1;
- (void)setShouldIncludeAsset:(bool)arg1;
- (void)setShouldIncludeStationInResponse:(bool)arg1;
- (void)setSkipPromptForSeamlessPlayback:(bool)arg1;
- (void)setStationMatchContext:(id)arg1;
- (bool)shouldIncludeAsset;
- (bool)shouldIncludeStationInResponse;
- (bool)skipPromptForSeamlessPlayback;
- (void)startWithCompletionHandler:(id)arg1;
- (id)stationMatchContext;

@end
