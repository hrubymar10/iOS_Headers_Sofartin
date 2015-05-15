/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPViewController : UIViewController <MPAVControllerNode, MPControllerProtocol> {
    unsigned int _appearing;
    id _delegate;
    bool _idleTimerDisabled;
    long long _interfaceOrientation;
    MPAVItem *_item;
    unsigned int _observesApplicationSuspendResumeEventsOnly;
    MPAVController *_player;
    long long _playerLockedCount;
    id _popViewControllerHandler;
    MPTransitionController *_pushedTransitionController;
    MPViewController *_pushedViewController;
    bool _registeredForPlayerNotifications;
    unsigned int _showOverlayWhileAppearingDisabled;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) id delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=idleTimerDisabled,setter=setIdleTimerDisabled:,assign,readwrite) bool idleTimerDisabled;
@property(assign,retain) MPAVItem * item;
@property(assign,readwrite) bool observesApplicationSuspendResumeEventsOnly;
@property(assign,readwrite) long long orientation;
@property(assign,retain) MPAVController * player;
@property(assign,copy) id popViewControllerHandler;
@property(assign,readwrite) bool registeredForPlayerNotifications;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIView * view;

- (void).cxx_destruct;
- (bool)_canReloadView;
- (void)_popTransitionEnded:(id)arg1;
- (void)_pushTransitionEnded:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationResumed;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)beginTransitionOverlayHidding;
- (bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)clearWeakReferencesToObject:(id)arg1;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (bool)idleTimerDisabled;
- (void)incrementAggregateStatisticsDisplayCount;
- (id)init;
- (bool)isAppearing;
- (id)item;
- (void)lockPlayer;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
- (bool)observesApplicationSuspendResumeEventsOnly;
- (long long)orientation;
- (id)player;
- (id)popViewControllerAnimated:(bool)arg1;
- (id)popViewControllerHandler;
- (void)pushViewController:(id)arg1 withTransition:(id)arg2;
- (void)registerForPlayerNotifications;
- (bool)registeredForPlayerNotifications;
- (void)removeChildViewController:(id)arg1;
- (void)setAppearing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdleTimerDisabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setObservesApplicationSuspendResumeEventsOnly:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)setPlayer:(id)arg1;
- (void)setPopViewControllerHandler:(id)arg1;
- (void)setRegisteredForPlayerNotifications:(bool)arg1;
- (void)setView:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)unlockPlayer;
- (void)unregisterForPlayerNotifications;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;

@end