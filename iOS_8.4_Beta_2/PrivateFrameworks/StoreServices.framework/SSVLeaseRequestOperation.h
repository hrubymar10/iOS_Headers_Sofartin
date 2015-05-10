/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLeaseRequestOperation : SSVOperation {
    NSString *_bagKey;
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    id _outputBlock;
    SSVPlaybackLeaseRequest *_request;
    SSURLBag *_urlBag;
}

@property(assign,copy) NSData * certificateData;
@property(assign,copy) NSString * certificateURLBagKey;
@property(assign,retain) SSVFairPlaySubscriptionController * fairPlaySubscriptionController;
@property(assign,copy) id outputBlock;

- (void).cxx_destruct;
- (void)_addRequestBodyToRequest:(id)arg1 withCertificateData:(id)arg2;
- (bool)_resolveConfigurationAndURL;
- (void)cancel;
- (id)certificateData;
- (id)certificateURLBagKey;
- (id)fairPlaySubscriptionController;
- (id)initWithLeaseRequest:(id)arg1 URLBag:(id)arg2;
- (id)initWithLeaseRequest:(id)arg1 configuration:(id)arg2;
- (void)main;
- (id)outputBlock;
- (void)setCertificateData:(id)arg1;
- (void)setCertificateURLBagKey:(id)arg1;
- (void)setFairPlaySubscriptionController:(id)arg1;
- (void)setOutputBlock:(id)arg1;

@end
