/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRemoteCredential : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    bool _wantsRetries;
}

@property(assign,readwrite) bool wantsRetries;

- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id)arg2;
- (void)dealloc;
- (void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(id)arg2;
- (void)fetchRemoteAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(id)arg4;
- (void)fetchRemotePasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 completionBlock:(id)arg4;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id)arg1;
- (void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(bool)arg3 allowQuery:(bool)arg4 completionBlock:(id)arg5;
- (void)requestRemoteAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 outRequestID:(id*)arg5 completionBlock:(id)arg6;
- (void)requestRemotePasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 shouldRememberPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id)arg7;
- (void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 completionBlock:(id)arg3;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id)arg1;
- (void)setWantsRetries:(bool)arg1;
- (bool)wantsRetries;

@end
