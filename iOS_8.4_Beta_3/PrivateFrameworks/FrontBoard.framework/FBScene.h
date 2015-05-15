/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBScene : NSObject <FBSceneHost> {
    <FBSceneBoundsDelegate> *_boundsDelegate;
    <FBSceneClient> *_client;
    FBProcess *_clientProcess;
    <FBSceneClientProvider> *_clientProvider;
    FBSSceneClientSettings *_clientSettings;
    FBWindowContextHostManager *_contextHostManager;
    FBWindowContextManager *_contextManager;
    <FBSceneDelegate> *_delegate;
    FBSDisplay *_display;
    NSString *_identifier;
    bool _lockedForMutation;
    FBSMutableSceneSettings *_mutableSettings;
    FBSSceneSettings *_settings;
    unsigned long long _transactionID;
    bool _valid;
}

@property (setter=_setBoundsDelegate:, nonatomic) <FBSceneBoundsDelegate> *_boundsDelegate;
@property (setter=_setLockedForMutation:, nonatomic) bool _lockedForMutation;
@property (nonatomic, readonly) unsigned long long _transactionID;
@property (nonatomic, readonly, retain) <FBSceneClient> *client;
@property (nonatomic, readonly, retain) FBProcess *clientProcess;
@property (nonatomic, readonly, retain) <FBSceneClientProvider> *clientProvider;
@property (nonatomic, readonly, retain) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly, retain) FBWindowContextHostManager *contextHostManager;
@property (nonatomic, readonly, retain) FBWindowContextManager *contextManager;
@property (nonatomic) <FBSceneDelegate> *delegate;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, retain) FBSMutableSceneSettings *mutableSettings;
@property (nonatomic, readonly, retain) FBSSceneSettings *settings;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void)_applyMutableSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id)arg3;
- (id)_boundsDelegate;
- (id)_descriptionWithMultilinePrefix:(id)arg1;
- (void)_handleSceneClientMessage:(id)arg1 withBlock:(id)arg2;
- (unsigned long long)_incrementTransactionID;
- (void)_invalidateWithTransitionContext:(id)arg1;
- (bool)_lockedForMutation;
- (void)_setBoundsDelegate:(id)arg1;
- (void)_setLockedForMutation:(bool)arg1;
- (unsigned long long)_transactionID;
- (id)client;
- (void)client:(id)arg1 attachContext:(id)arg2;
- (void)client:(id)arg1 detachContext:(id)arg2;
- (void)client:(id)arg1 didReceiveActions:(id)arg2;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (void)client:(id)arg1 updateContext:(id)arg2;
- (id)clientProcess;
- (id)clientProvider;
- (id)clientSettings;
- (id)contextHostManager;
- (id)contextManager;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)display;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 display:(id)arg2 initialClientSettings:(id)arg3 clientProvider:(id)arg4;
- (bool)isValid;
- (id)mutableSettings;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettingsWithBlock:(id)arg1;

@end
