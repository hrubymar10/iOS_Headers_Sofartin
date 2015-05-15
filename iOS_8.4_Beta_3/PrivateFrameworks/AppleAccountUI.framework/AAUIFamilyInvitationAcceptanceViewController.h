/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    NSMutableURLRequest *_currentRemoteUIRequest;
    AAGrandSlamSigner *_grandSlamSigner;
    AAFamilyInvite *_invite;
    NSOperationQueue *_inviteOperationQueue;
    RemoteUIController *_remoteUIController;
    NSMutableURLRequest *_startRemoteUIRequest;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <AAUIFamilyInvitationAcceptanceDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (void)_loadiTunesLinkingRemoteUI;
- (void)_sendUserToiTunesSettings;
- (void)_showErrorAlert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)confirmIdentityViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initWithInvite:(id)arg1 grandSlamSigner:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;

@end