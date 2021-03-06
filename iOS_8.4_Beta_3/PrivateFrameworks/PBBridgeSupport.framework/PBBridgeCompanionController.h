/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, PBBridgeCompanionProtocol, RUILoaderDelegate> {
    NSURLConnection *_activationConnection;
    NSMutableData *_activationData;
    NSMutableURLRequest *_activationRequest;
    int _activationState;
    NSTimer *_activationTimeout;
    bool _allowAnyHTTPSCertificate;
    bool _connectionFailed;
    NSString *_contentType;
    <PBBridgeConnectionDelegate> *_delegate;
    unsigned short _granularActivationState;
    id _initialSyncPrepCompletion;
    NSString *_internalLastSendMessageID;
    bool _isEstablishingPairing;
    id _lockedOnAnimationCompletion;
    bool _nonSilentActivation;
    bool _passcodeSet;
    <RUILoaderDelegate> *_ruiDelegate;
    RUILoader *_ruiLoader;
    bool _selectedPairedUnlock;
    struct __MKBAssertion { } *_unlockPairingAssertion;
}

@property (nonatomic, retain) NSURLConnection *activationConnection;
@property (nonatomic, retain) NSMutableData *activationData;
@property (nonatomic, retain) NSMutableURLRequest *activationRequest;
@property (nonatomic) int activationState;
@property (nonatomic, retain) NSTimer *activationTimeout;
@property (nonatomic) bool allowAnyHTTPSCertificate;
@property (nonatomic) bool connectionFailed;
@property (nonatomic, copy) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBBridgeConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short granularActivationState;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id initialSyncPrepCompletion;
@property (nonatomic, retain) NSString *internalLastSendMessageID;
@property (nonatomic) bool isEstablishingPairing;
@property (nonatomic, copy) id lockedOnAnimationCompletion;
@property (nonatomic) bool nonSilentActivation;
@property (nonatomic) bool passcodeSet;
@property (nonatomic) <RUILoaderDelegate> *ruiDelegate;
@property (nonatomic, retain) RUILoader *ruiLoader;
@property (nonatomic) bool selectedPairedUnlock;
@property (readonly) Class superclass;

+ (id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2;
+ (void)iCloudFirstName:(id*)arg1 lastName:(id*)arg2;
+ (void)meCardFirstName:(id*)arg1 lastName:(id*)arg2;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_connectionWithRequest:(id)arg1;
- (bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (id)activationConnection;
- (id)activationData;
- (id)activationRequest;
- (int)activationState;
- (id)activationTimeout;
- (void)activationTimeout:(id)arg1;
- (bool)allowAnyHTTPSCertificate;
- (void)beginSetupTransaction;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionFailed;
- (id)contentType;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (id)delegate;
- (void)enableSiriForGizmo:(id)arg1;
- (void)endSetupTransaction;
- (void)getCompanionLanguage:(id)arg1;
- (void)getCompanionRegion:(id)arg1;
- (void)getSiriState:(id)arg1;
- (void)gizmoActivationFailed:(id)arg1;
- (void)gizmoBecameAvailableWantsConfirmation:(id)arg1;
- (void)gizmoDidBeginActivating:(id)arg1;
- (void)gizmoDidBeginUnlockPairing:(id)arg1;
- (void)gizmoDidEndPasscodeCreation:(id)arg1;
- (void)gizmoDidEndUnlockPairing:(id)arg1;
- (void)gizmoDidFinishActivating:(id)arg1;
- (void)gizmoFailedToCreatePasscode:(id)arg1;
- (unsigned short)granularActivationState;
- (void)handleOfflineTermsResponse:(id)arg1;
- (void)handlePerformanceResults:(id)arg1;
- (void)handleWarrantySentinelResponse:(id)arg1;
- (id)init;
- (id)initialSyncPrepCompletion;
- (id)internalLastSendMessageID;
- (void)invalidateTimeoutTimer;
- (bool)isEstablishingPairing;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)lockedOnAnimationCompletion;
- (bool)nonSilentActivation;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (double)offsetEventTime;
- (bool)passcodeSet;
- (void)queryGizmoForOfflineTerms;
- (void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1;
- (void)refreshTimeoutTimer;
- (id)ruiDelegate;
- (id)ruiLoader;
- (bool)selectedPairedUnlock;
- (void)sendGizmoPasscodeRestrictions;
- (void)sendProxyActivationRequest:(id)arg1;
- (id)serviceIdentifier;
- (void)setActivationConnection:(id)arg1;
- (void)setActivationData:(id)arg1;
- (void)setActivationRequest:(id)arg1;
- (void)setActivationState:(int)arg1;
- (void)setActivationTimeout:(id)arg1;
- (void)setAllowAnyHTTPSCertificate:(bool)arg1;
- (void)setConnectionFailed:(bool)arg1;
- (void)setContentType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGranularActivationState:(unsigned short)arg1;
- (void)setInitialSyncPrepCompletion:(id)arg1;
- (void)setInternalLastSendMessageID:(id)arg1;
- (void)setIsEstablishingPairing:(bool)arg1;
- (void)setLockedOnAnimationCompletion:(id)arg1;
- (void)setNonSilentActivation:(bool)arg1;
- (void)setPasscodeSet:(bool)arg1;
- (void)setRuiDelegate:(id)arg1;
- (void)setRuiLoader:(id)arg1;
- (void)setSelectedPairedUnlock:(bool)arg1;
- (void)setupServiceMessageSelectorMappings;
- (void)startEstablishingPairing;
- (void)tellGizmoToBeginActivation;
- (void)tellGizmoToDeleteWarrantySentinel;
- (void)tellGizmoToPopToControllerType:(unsigned long long)arg1;
- (void)tellGizmoToPrepareForInitialSyncWithCompletion:(id)arg1;
- (void)tellGizmoToPushControllerType:(unsigned long long)arg1;
- (void)tellGizmoToRetryActivation;
- (void)tellGizmoToSeCrownOrientationRight:(bool)arg1;
- (void)tellGizmoToSetDiagnosticsEnabled:(bool)arg1;
- (void)tellGizmoToSetLocationEnabled:(bool)arg1;
- (void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(id)arg2;
- (void)tellGizmoToUpdateSyncProgressTo:(double)arg1 withState:(long long)arg2;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (void)watchDidPrepareForInitialSync:(id)arg1;

@end
