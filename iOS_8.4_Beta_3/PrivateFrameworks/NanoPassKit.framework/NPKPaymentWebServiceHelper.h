/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentWebServiceHelper : NSObject <IDSServiceDelegate, PKPaymentProvisioningServiceDelegate> {
    unsigned long long _context;
    <NPKPaymentWebServiceHelperDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_outstandingRequests;
    IDSService *_provisioningService;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property(assign,readwrite) unsigned long long context;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <NPKPaymentWebServiceHelperDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_dispatch_queue> * internalQueue;
@property(assign,retain) NSMutableDictionary * outstandingRequests;
@property(assign,retain) IDSService * provisioningService;
@property(assign,retain) NSObject<OS_dispatch_queue> * responseQueue;
@property(assign,readonly) Class superclass;

+ (id)bridgedClientInfoHTTPHeader;

- (void).cxx_destruct;
- (id)_sendProtobuf:(id)arg1 responseExpected:(bool)arg2;
- (id)_sendProtobuf:(id)arg1 responseExpected:(bool)arg2 extraOptions:(id)arg3;
- (void)_setOrResetCleanupTimerForRequest:(id)arg1;
- (id)_supportedRegionsForWebService:(id)arg1;
- (void)configurationDataResponse:(id)arg1;
- (void)configurationDataWithCompletionHandler:(id)arg1;
- (unsigned long long)context;
- (id)delegate;
- (void)deleteCardWithAID:(id)arg1;
- (void)didRegisterResponse:(id)arg1;
- (void)dumpLogsResponse:(id)arg1;
- (void)dumpLogsWithCompletion:(id)arg1;
- (id)filterVerificationChannels:(id)arg1;
- (void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(id)arg2;
- (id)init;
- (id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2;
- (id)internalQueue;
- (id)outstandingRequests;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (void)pendingRemovalResponse:(id)arg1;
- (void)preconditionNotMet:(id)arg1;
- (void)provisioningDataResponse:(id)arg1;
- (void)provisioningDataWithCompletionHandler:(id)arg1;
- (id)provisioningService;
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(id)arg2;
- (void)queueTSMConnectionResponse:(id)arg1;
- (void)registrationDataResponse:(id)arg1;
- (void)registrationDataWithAuthToken:(id)arg1 completionHandler:(id)arg2;
- (void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(id)arg2;
- (id)responseQueue;
- (void)secureElementCardsWithCompletion:(id)arg1;
- (void)secureElementGetCardsResponse:(id)arg1;
- (void)secureElementRemoveCardsResponse:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setContext:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setNewAuthRandomIfNecessary:(id)arg1;
- (void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(id)arg1;
- (void)setNewAuthRandomIfNecessaryResponse:(id)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setProvisioningService:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)shouldArchiveBackgroundContext:(id)arg1;
- (void)shouldArchiveContext:(id)arg1;
- (void)updatePaymentPass:(id)arg1;
- (void)updatePushToken:(id)arg1;

@end