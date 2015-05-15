/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatusRequest : SSRequest <SSXPCCoding> {
    bool _authenticatesIfNecessary;
    SSAuthenticationContext *_authenticationContext;
    long long _carrierBundleProvisioningStyle;
    NSString *_localizedAuthenticationReason;
    NSString *_reason;
}

@property(assign,readwrite) bool authenticatesIfNecessary;
@property(assign,copy) SSAuthenticationContext * authenticationContext;
@property(assign,readwrite) long long carrierBundleProvisioningStyle;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * localizedAuthenticationReason;
@property(assign,copy) NSString * reason;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (bool)authenticatesIfNecessary;
- (id)authenticationContext;
- (long long)carrierBundleProvisioningStyle;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)localizedAuthenticationReason;
- (id)reason;
- (void)setAuthenticatesIfNecessary:(bool)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCarrierBundleProvisioningStyle:(long long)arg1;
- (void)setLocalizedAuthenticationReason:(id)arg1;
- (void)setReason:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithStatusResponseBlock:(id)arg1;

@end