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

@property(setter=_setBoundsDelegate:,assign,readwrite) <FBSceneBoundsDelegate> * _boundsDelegate;
@property(setter=_setLockedForMutation:,assign,readwrite) bool _lockedForMutation;
@property(assign,readonly) unsigned long long _transactionID;
@property(assign,retain) <FBSceneClient> * client;
@property(assign,retain) FBProcess * clientProcess;
@property(assign,retain) <FBSceneClientProvider> * clientProvider;
@property(assign,retain) FBSSceneClientSettings * clientSettings;
@property(assign,retain) FBWindowContextHostManager * contextHostManager;
@property(assign,retain) FBWindowContextManager * contextManager;
@property(assign,readwrite) <FBSceneDelegate> * delegate;
@property(assign,retain) FBSDisplay * display;
@property(assign,copy) NSString * identifier;
@property(assign,retain) FBSMutableSceneSettings * mutableSettings;
@property(assign,retain) FBSSceneSettings * settings;
@property(getter=isValid,assign,readonly) bool valid;

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
