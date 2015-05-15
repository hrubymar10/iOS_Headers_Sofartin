/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
}

@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSAuthenticateRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)authenticationContext;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (void)startWithAuthenticateResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;

@end
