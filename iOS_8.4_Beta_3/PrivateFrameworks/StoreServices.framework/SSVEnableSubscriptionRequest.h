/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVEnableSubscriptionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
}

@property(assign,copy) SSAuthenticationContext * authenticationContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;

@end