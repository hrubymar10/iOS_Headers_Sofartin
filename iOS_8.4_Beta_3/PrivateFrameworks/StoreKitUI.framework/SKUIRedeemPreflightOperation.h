/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemPreflightOperation : NSOperation {
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    bool _loadsRedeemCodeMetadata;
    id _outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
}

@property(assign,readwrite) bool loadsRedeemCodeMetadata;
@property(assign,copy) id outputBlock;
@property(assign,retain) SKUIRedeemConfiguration * redeemConfiguration;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)_initSKUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (id)init;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2;
- (bool)loadsRedeemCodeMetadata;
- (void)main;
- (id)outputBlock;
- (id)redeemConfiguration;
- (void)setLoadsRedeemCodeMetadata:(bool)arg1;
- (void)setOutputBlock:(id)arg1;
- (void)setRedeemConfiguration:(id)arg1;

@end
