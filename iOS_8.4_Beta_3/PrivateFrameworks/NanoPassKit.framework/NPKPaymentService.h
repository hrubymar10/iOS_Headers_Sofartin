/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentService : NSObject <NPKPaymentServiceClientProtocol> {
    <NPKPaymentServiceDelegate> *_delegate;
    long long _fieldDetectReferenceCount;
    bool _requestsPaymentSessions;
    NSPointerArray *_transientPassAssertions;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property <NPKPaymentServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long fieldDetectReferenceCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requestsPaymentSessions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSPointerArray *transientPassAssertions;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)paymentGlobalConcurrentQueue;

- (void).cxx_destruct;
- (void)_checkTransientPassAssertionState;
- (void)_requestFieldDetectActive:(bool)arg1;
- (void)_requestPaymentSessions:(bool)arg1;
- (void)_resyncState;
- (void)_setTransientPaymentCard:(id)arg1;
- (void)addTransientPassAssertion:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)fieldDetectReferenceCount;
- (void)fieldDetected:(bool)arg1 cardEmulationEnabled:(bool)arg2;
- (void)getDefaultPaymentPassUniqueIdentifierWithCompletion:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)markAllPaymentApplicationsForDelete;
- (void)paymentDeviceNoLongerBusy;
- (void)paymentNoLongerRestricted;
- (void)paymentRequestedWhileDeviceBusy;
- (void)paymentRequestedWhileRestricted;
- (void)paymentRequestedWithNoPaymentPasses;
- (void)paymentSessionDidBeginWithEndpoint:(id)arg1 paymentCard:(id)arg2;
- (void)removalPendingForPass:(id)arg1;
- (void)removeTransientPassAssertion:(id)arg1;
- (bool)requestsPaymentSessions;
- (void)setDefaultPaymentPass:(id)arg1 withCompletion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFieldDetectReferenceCount:(long long)arg1;
- (void)setRequestsPaymentSessions:(bool)arg1;
- (void)setTransientPassAssertions:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupNewUser;
- (void)startFieldDetect;
- (void)stopFieldDetect;
- (void)transactionCompletedForPaymentCard:(id)arg1;
- (void)transactionFailedForPaymentCard:(id)arg1;
- (id)transientPassAssertions;
- (id)xpcConnection;

@end
