/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationController : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection *_connection;
    double _connectionTimeout;
    bool _didPresent;
    PKPaymentAuthorizationControllerExportedObject *_exportedObject;
    NSString *_hostIdentifier;
    PKInAppPaymentService *_inAppPaymentService;
    NSXPCListener *_listener;
    PKPaymentRequest *_paymentRequest;
    id _presentationCompletionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

@property(setter=_setPrivateDelegate:,assign,readwrite) <PKPaymentAuthorizationControllerPrivateDelegate> * _privateDelegate;
@property(assign,retain) NSXPCConnection * connection;
@property(assign,readwrite) double connectionTimeout;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PKPaymentAuthorizationControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didPresent;
@property(assign,retain) PKPaymentAuthorizationControllerExportedObject * exportedObject;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * hostIdentifier;
@property(assign,retain) PKInAppPaymentService * inAppPaymentService;
@property(assign,retain) NSXPCListener * listener;
@property(assign,retain) PKPaymentRequest * paymentRequest;
@property(assign,copy) id presentationCompletionBlock;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * queue;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSTimer * timer;

+ (bool)canMakePayments;
+ (bool)canMakePaymentsUsingNetworks:(id)arg1;

- (void)_invokeCallbackWithSuccess:(bool)arg1;
- (id)_privateDelegate;
- (id)_remoteObjectProxy;
- (void)_setPrivateDelegate:(id)arg1;
- (void)_viewServiceTimerFired:(id)arg1;
- (id)connection;
- (double)connectionTimeout;
- (void)dealloc;
- (id)delegate;
- (bool)didPresent;
- (void)dismissWithCompletion:(id)arg1;
- (id)exportedObject;
- (id)hostIdentifier;
- (id)inAppPaymentService;
- (id)initWithPaymentRequest:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)paymentRequest;
- (void)presentWithCompletion:(id)arg1;
- (id)presentationCompletionBlock;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setConnectionTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidPresent:(bool)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setInAppPaymentService:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setPresentationCompletionBlock:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
