/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentService : NSObject <PKPaymentServiceExportedInterface, PKXPCServiceDelegate> {
    <PKPaymentServiceDelegate> *_delegate;
    unsigned long long _paymentInterfacePreventionCounter;
    PKXPCService *_remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassUniqueIdentifier;
@property (nonatomic) <PKPaymentServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool paymentDeviceIsAvailable;
@property (nonatomic, readonly) bool paymentDeviceIsInField;
@property (nonatomic, readonly) bool paymentDeviceIsInRestrictedMode;
@property (nonatomic, readonly) NSString *secureElementIdentifier;
@property (nonatomic, retain) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property (readonly) Class superclass;

+ (bool)paymentServiceIsAvailable;

- (void)_activationStateForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (void)_defaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)_deleteMessageWithIdentifier:(id)arg1 fromPassWithUniqueIdentifier:(id)arg2 completion:(id)arg3;
- (id)_existingRemoteObjectProxy;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (void)_paymentDeviceIsAvailableWithCompletion:(id)arg1;
- (void)_paymentDeviceIsInFieldWithCompletion:(id)arg1;
- (void)_paymentDeviceIsInRestrictedModeWithCompletion:(id)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)_secureElementIdentifierWithCompletion:(id)arg1;
- (void)_setNewAuthRandomWithRetryCount:(unsigned long long)arg1 completion:(id)arg2;
- (void)_sharedPaymentWebServiceContextWithCompletion:(id)arg1;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (void)activatePaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (long long)activationStateForPassWithUniqueIdentifier:(id)arg1;
- (void)authorizeInAppPaymentRequest:(id)arg1 completion:(id)arg2;
- (void)authorizePaymentPassWithUniqueIdentifier:(id)arg1 authenticationCredential:(id)arg2 completion:(id)arg3;
- (void)beginPreventingPaymentInterfacePresentation;
- (void)consistencyCheck;
- (void)dealloc;
- (void)deauthorizePaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (id)defaultPaymentPassUniqueIdentifier;
- (id)delegate;
- (void)deleteMessageWithIdentifier:(id)arg1 fromPassWithUniqueIdentifier:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)downloadAllPaymentPasses;
- (void)endPreventingPaymentInterfacePresentation;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(id)arg4;
- (void)markAllPaymentApplicationsForDelete;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidEnterField;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidLeaveField;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (bool)paymentDeviceIsAvailable;
- (bool)paymentDeviceIsInField;
- (bool)paymentDeviceIsInRestrictedMode;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifierDidActivate:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidAuthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidBeginTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1;
- (void)presentPaymentInterfaceWithCompletion:(id)arg1;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)scheduleSetupReminders;
- (id)secureElementIdentifier;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNewAuthRandom;
- (void)setNewAuthRandomIfNecessaryWithRetryCount:(unsigned long long)arg1 completion:(id)arg2;
- (void)setSharedPaymentWebServiceContext:(id)arg1;
- (id)sharedPaymentWebServiceContext;
- (void)simulatePaymentPush;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(id)arg4;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(id)arg4;

@end
