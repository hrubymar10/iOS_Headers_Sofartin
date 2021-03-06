/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollController : NSObject <ADPlayerDelegate, ADPrerollViewDelegate> {
    ADPlayer *_adPlayer;
    AVPlayerViewController *_avPlayerViewController;
    id _completionHandler;
    bool _isObservingThirdPartyAVPlayer;
    MPMoviePlayerController *_moviePlayerController;
    bool _setupInProgress;
    unsigned long long _type;
    ADPrerollView *_view;
}

@property(assign,retain) ADPlayer * adPlayer;
@property(assign,readwrite) AVPlayerViewController * avPlayerViewController;
@property(assign,copy) id completionHandler;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isObservingThirdPartyAVPlayer;
@property(assign,readwrite) MPMoviePlayerController * moviePlayerController;
@property(assign,readwrite) bool setupInProgress;
@property(assign,readonly) Class superclass;
@property(assign,readonly) unsigned long long type;
@property(assign,retain) ADPrerollView * view;

- (id)_advertisementView;
- (void)_appWillResignActive;
- (bool)_beginPlayback;
- (void)_handlePlaybackCompletion:(bool)arg1;
- (bool)_isEmbedded;
- (void)actionButtonPressed;
- (id)adPlayer;
- (void)adPlayer:(id)arg1 didChangePlaybackState:(unsigned long long)arg2;
- (void)adPlayer:(id)arg1 elapsedTime:(double)arg2 totalTime:(double)arg3;
- (void)adPlayer:(id)arg1 readyForPlaybackWithAVPlayer:(id)arg2 impressionProperties:(id)arg3;
- (void)adPlayerDidBeginAction:(id)arg1;
- (void)adPlayerDidFinishPlayback:(id)arg1;
- (void)adPlayerDidTimeout:(id)arg1;
- (void)adPlayerFailedToLoadAsset:(id)arg1;
- (void)adPlayerFailedToPlayWithUnknownError:(id)arg1;
- (id)avPlayerViewController;
- (void)cancel;
- (id)completionHandler;
- (void)dealloc;
- (void)doneButtonPressed;
- (id)init;
- (id)initWithAVPlayerViewController:(id)arg1;
- (id)initWithMoviePlayerController:(id)arg1;
- (bool)isObservingThirdPartyAVPlayer;
- (id)moviePlayerController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)playPrerollAdWithCompletion:(id)arg1;
- (bool)prerollViewRequestsEmbeddedStatus;
- (void)setAdPlayer:(id)arg1;
- (void)setAvPlayerViewController:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setIsObservingThirdPartyAVPlayer:(bool)arg1;
- (void)setMoviePlayerController:(id)arg1;
- (void)setSetupInProgress:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)setupInProgress;
- (void)shutdown;
- (void)skipButtonPressed;
- (unsigned long long)type;
- (id)view;
- (id)viewControllerForActionFromAdPlayer:(id)arg1;

@end
