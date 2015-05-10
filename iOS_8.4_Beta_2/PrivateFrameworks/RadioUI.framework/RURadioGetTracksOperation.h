/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioGetTracksOperation : NSOperation {
    ISDialogOperation *_dialogOperation;
    MPUserNotification *_explicitUserNotification;
    RadioGetTracksRequest *_getTracksRequest;
    NSLock *_lock;
    unsigned long long _numberOfTracks;
    RadioPlaybackContext *_playbackContext;
    SSVPlaybackLease *_playbackLease;
    long long _reasonType;
    RadioRequestContext *_requestContext;
    id _responseBlock;
    bool _shouldIncludeStationInResponse;
    RadioStation *_station;
    NSString *_stationStringID;
}

@property(assign,readwrite) unsigned long long numberOfTracks;
@property(assign,copy) RadioPlaybackContext * playbackContext;
@property(assign,retain) SSVPlaybackLease * playbackLease;
@property(assign,readonly) long long reasonType;
@property(assign,retain) RadioRequestContext * requestContext;
@property(assign,copy) id responseBlock;
@property(assign,readwrite) bool shouldIncludeStationInResponse;

- (void).cxx_destruct;
- (id)_heartbeatTokenDataAllowingDelay:(bool)arg1 error:(id*)arg2;
- (id)_newGetTracksRequestAllowingHeartbeatDelay:(bool)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runFullGetTracksProcessAllowingNoAvailableVersionDialog:(bool)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (id)_runRequestAllowingHeartbeatDelay:(bool)arg1 additionalRequestParameters:(id)arg2 returningError:(id*)arg3;
- (void)cancel;
- (void)dealloc;
- (id)initWithStation:(id)arg1 reasonType:(long long)arg2;
- (id)initWithStationStringID:(id)arg1 reasonType:(long long)arg2;
- (void)main;
- (unsigned long long)numberOfTracks;
- (id)playbackContext;
- (id)playbackLease;
- (long long)reasonType;
- (id)requestContext;
- (id)responseBlock;
- (void)setNumberOfTracks:(unsigned long long)arg1;
- (void)setPlaybackContext:(id)arg1;
- (void)setPlaybackLease:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setResponseBlock:(id)arg1;
- (void)setShouldIncludeStationInResponse:(bool)arg1;
- (bool)shouldIncludeStationInResponse;

@end
