/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIRemoteUIRepairFlow : NSObject <AAUIAccountRepairRemoteUIDelegate> {
    ACAccount *_account;
    id _completion;
    <AAUIRemoteUIRepairFlowDelegate> *_delegate;
    AAUIAccountRepairRemoteUI *_remoteUI;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <AAUIRemoteUIRepairFlowDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(bool)arg3;
- (void)accountRepairRemoteUIWillAppear:(id)arg1;
- (void)accountRepairRemoteUIWillDismiss:(id)arg1;
- (id)delegate;
- (id)initWithAccount:(id)arg1;
- (void)presentFlowFromViewController:(id)arg1 modal:(bool)arg2 completion:(id)arg3;
- (void)setDelegate:(id)arg1;

@end