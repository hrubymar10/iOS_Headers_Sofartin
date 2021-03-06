/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate> {
    id _blockToPerformAfterViewDidAppear;
    bool _didSetRemoteGame;
    NSMutableDictionary *_dirtyProperties;
    GKGame *_game;
    GKHostedViewController *_managingViewControllerWeak;
    UIColor *_previousStatusBarColor;
    bool _viewDidAppear;
}

@property(assign,copy) id blockToPerformAfterViewDidAppear;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didSetRemoteGame;
@property(assign,retain) NSMutableDictionary * dirtyProperties;
@property(assign,retain) GKGame * game;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) GKHostedViewController * managingViewController;
@property(assign,retain) UIColor * previousStatusBarColor;
@property(assign,readonly) bool serviceNeedsCurrentGame;
@property(assign,readonly) bool serviceNeedsLocalPlayer;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool viewDidAppear;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (long long)_desiredStatusBarStyle;
- (bool)_dismissSelfAfterGettingShouldCancel;
- (bool)_dismissSelfAfterGettingShouldFinish;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
- (id)blockToPerformAfterViewDidAppear;
- (void)dealloc;
- (bool)didSetRemoteGame;
- (id)dirtyProperties;
- (id)game;
- (id)managingViewController;
- (void)nudge;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPaths;
- (void)populateInitialStateForRemoteView:(id)arg1;
- (id)previousStatusBarColor;
- (void)readyToPresentInController:(id)arg1;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (bool)serviceNeedsCurrentGame;
- (bool)serviceNeedsLocalPlayer;
- (void)setBlockToPerformAfterViewDidAppear:(id)arg1;
- (void)setDidSetRemoteGame:(bool)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setManagingViewController:(id)arg1;
- (void)setPreviousStatusBarColor:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setViewDidAppear:(bool)arg1;
- (void)setupRemoteView;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)viewDidAppear;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
