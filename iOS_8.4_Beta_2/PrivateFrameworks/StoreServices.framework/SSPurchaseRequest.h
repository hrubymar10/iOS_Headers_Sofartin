/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {
    id _completionBlock;
    bool _createsDownloads;
    bool _isBackgroundRequest;
    bool _needsAuthentication;
    NSMutableSet *_openPurchaseIdentifiers;
    id _purchaseBlock;
    SSPurchaseManager *_purchaseManager;
    id _purchaseResponseBlock;
    NSArray *_purchases;
    bool _shouldValidatePurchases;
}

@property(getter=isBackgroundRequest,assign,readwrite) bool backgroundRequest;
@property(assign,readwrite) bool createsDownloads;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SSPurchaseRequestDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool needsAuthentication;
@property(assign,readonly) NSArray * purchases;
@property(assign,readwrite) bool shouldValidatePurchases;
@property(assign,readonly) Class superclass;

- (void)_addPurchasesToManager;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)cancel;
- (id)copyXPCEncoding;
- (bool)createsDownloads;
- (void)dealloc;
- (id)init;
- (id)initWithPurchases:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBackgroundRequest;
- (bool)needsAuthentication;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (id)purchases;
- (void)setBackgroundRequest:(bool)arg1;
- (void)setCreatesDownloads:(bool)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setShouldValidatePurchases:(bool)arg1;
- (bool)shouldValidatePurchases;
- (bool)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithPurchaseBlock:(id)arg1 completionBlock:(id)arg2;
- (void)startWithPurchaseResponseBlock:(id)arg1 completionBlock:(id)arg2;

@end
