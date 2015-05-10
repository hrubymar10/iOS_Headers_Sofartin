/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupPeripheral : NSObject {
    _TRUserNotfication *_activeUserNotification;
    NSString *_authenticationAppleID;
    unsigned long long _authenticationAttemptCount;
    NSData *_dataToSend;
    NSObject<OS_dispatch_semaphore> *_dataToSendSemaphore;
    <TRDeviceSetupPeripheralDelegate> *_delegate;
    NSString *_deviceGUID;
    bool _performingSetup;
    bool _preparingForSetup;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_userAgent;
}

@property(assign,readwrite) <TRDeviceSetupPeripheralDelegate> * delegate;

- (void).cxx_destruct;
- (void)_authenticateWithParameters:(id)arg1;
- (bool)_canPerformSetupReturningHasWiFiNetwork:(bool*)arg1;
- (void)_didDisconnect;
- (id)_didReceiveData:(id)arg1;
- (id)_didTap;
- (void)_sendSetupDataWithAuthInfo:(id)arg1 diagnosticSubmissionEnabled:(bool)arg2 rememberPasswordEnabled:(bool)arg3;
- (void)_setupDidComplete;
- (void)_setupDidFailWithError:(id)arg1;
- (bool)_showUserNotificationForAppleID:(id)arg1 returningAppleID:(id*)arg2 password:(id*)arg3;
- (void)_showUserNotificationForAuthenticationFailure:(id)arg1;
- (bool)_showUserNotificationForDiagnosticSubmission;
- (void)_showUserNotificationForErrorWithTitle:(id)arg1 message:(id)arg2;
- (bool)_showUserNotificationForRememberPasswordForAppleID:(id)arg1;
- (void)_startAuthentication;
- (void)cancelPreparingForSetup;
- (void)cancelSetupForStateChange;
- (void)cancelSetupForTimeout;
- (id)delegate;
- (id)init;
- (bool)performSetup;
- (void)setDelegate:(id)arg1;

@end
