/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
    SSAccount *_authenticatedAccount;
    NSError *_error;
    NSDictionary *_responseDictionary;
    long long _responseType;
}

@property(assign,readwrite) long long authenticateResponseType;
@property(assign,retain) SSAccount * authenticatedAccount;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSError * error;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSDictionary * responseDictionary;
@property(assign,readonly) Class superclass;

- (void)_setError:(id)arg1;
- (long long)authenticateResponseType;
- (id)authenticatedAccount;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (id)responseDictionary;
- (void)setAuthenticateResponseType:(long long)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end