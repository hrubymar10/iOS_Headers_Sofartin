/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@interface VUAuthenticator : NSObject <JSONHTTPRequestDelegate> {
    NSString *_accountName;
    JSONHTTPRequest *_authenticationRequest;
    long long _authenticatorState;
}

@property (nonatomic, readonly) NSString *accountName;
@property (nonatomic, readonly) long long authenticatorState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAuthenticator;

- (void).cxx_destruct;
- (void)_notifyFailure;
- (void)_notifyStateChange;
- (id)accountName;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2;
- (id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2;
- (long long)authenticatorState;
- (void)invalidateAuthentication;
- (void)loadCredentials;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveObject:(id)arg2;

@end
