/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingController : NSObject {
    bool _cachedArtworkDirty;
    UIImage *_cachedNowPlayingArtwork;
    double _currentDuration;
    double _currentElapsed;
    NSString *_currentNowPlayingAppDisplayID;
    bool _currentNowPlayingAppIsRunning;
    NSDictionary *_currentNowPlayingInfo;
    <MPUNowPlayingDelegate> *_delegate;
    long long _isPlaying;
    bool _isRegisteredForNowPlayingNotifications;
    bool _isUpdatingNowPlayingApp;
    bool _isUpdatingNowPlayingInfo;
    bool _isUpdatingPlaybackState;
    bool _shouldUpdateNowPlayingArtwork;
    NSObject<OS_dispatch_source> *_timeInformationTimer;
    double _timeInformationUpdateInterval;
}

@property(assign,readonly) double currentDuration;
@property(assign,readonly) double currentElapsed;
@property(assign,readonly) UIImage * currentNowPlayingArtwork;
@property(assign,readonly) NSDictionary * currentNowPlayingInfo;
@property(assign,readwrite) <MPUNowPlayingDelegate> * delegate;
@property(assign,readonly) bool isPlaying;
@property(assign,readonly) NSString * nowPlayingAppDisplayID;
@property(assign,readonly) bool nowPlayingAppIsSystemMediaApp;
@property(assign,readwrite) bool shouldUpdateNowPlayingArtwork;
@property(assign,readwrite) double timeInformationUpdateInterval;

- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_startUpdatingTimeInformation;
- (void)_stopUpdatingTimeInformation;
- (void)_unregisterForNotifications;
- (void)_updateCurrentNowPlaying;
- (void)_updateNowPlayingAppDisplayID;
- (void)_updatePlaybackState;
- (void)_updateTimeInformationAndCallDelegate:(bool)arg1;
- (double)currentDuration;
- (double)currentElapsed;
- (id)currentNowPlayingArtwork;
- (id)currentNowPlayingInfo;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isPlaying;
- (id)nowPlayingAppDisplayID;
- (bool)nowPlayingAppIsSystemMediaApp;
- (void)setDelegate:(id)arg1;
- (void)setShouldUpdateNowPlayingArtwork:(bool)arg1;
- (void)setTimeInformationUpdateInterval:(double)arg1;
- (bool)shouldUpdateNowPlayingArtwork;
- (void)startUpdating;
- (void)stopUpdating;
- (double)timeInformationUpdateInterval;
- (void)update;

@end
