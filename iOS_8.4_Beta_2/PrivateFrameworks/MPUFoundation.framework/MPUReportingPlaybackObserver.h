/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUReportingPlaybackObserver : NSObject {
    bool _SBEnabled;
    NSData *_currentJingleReportingTimedMetadata;
    bool _isReloadingWithPlaybackContext;
    bool _isScrubbing;
    MPAVItem *_itemForCurrentTimeChange;
    double _lastPlayEventEndTimeForCurrentItem;
    double _lastPlayEventTimeIntervalSinceReferenceDate;
    bool _offline;
    NSString *_playbackSessionID;
    MPAVController *_player;
    MPUReportingController *_reportingController;
    double _startTimeForCurrentTimeChange;
    unsigned long long _storeAccountID;
}

@property(getter=isSBEnabled,assign,readwrite) bool SBEnabled;
@property(getter=isOffline,assign,readwrite) bool offline;
@property(assign,readonly) MPAVController * player;
@property(assign,readonly) MPUReportingController * reportingController;
@property(assign,readwrite) unsigned long long storeAccountID;

- (void).cxx_destruct;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_itemNewAccessLogEntryNotification:(id)arg1;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (double)_itemStartTimeForItem:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)_updatePlaybackSessionID;
- (void)dealloc;
- (void)didHitPlaybackTimeoutEndingPlayback:(bool)arg1 withCurrentItem:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;
- (bool)isOffline;
- (bool)isSBEnabled;
- (id)newPlayActivityEventForMPAVItem:(id)arg1;
- (id)newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 MPAVItem:(id)arg2;
- (id)player;
- (id)reportingController;
- (void)setOffline:(bool)arg1;
- (void)setSBEnabled:(bool)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (unsigned long long)storeAccountID;
- (void)willHitPlaybackTimeoutEndingPlayback:(bool)arg1 withCurrentItem:(id)arg2;
- (void)willTransitionItemForBan:(id)arg1;

@end
