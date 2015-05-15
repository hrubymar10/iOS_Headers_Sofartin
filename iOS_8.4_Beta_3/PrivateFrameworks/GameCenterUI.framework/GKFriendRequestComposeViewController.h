/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendRequestComposeViewController : UINavigationController {
    UIAlertController *_alertController;
    GKComposeHostedViewController *_composeController;
    <GKFriendRequestComposeViewControllerDelegate> *_composeViewDelegateWeak;
    NSString *_message;
    unsigned long long _recipientCount;
}

@property(assign,retain) UIAlertController * alertController;
@property(assign,retain) GKComposeHostedViewController * composeController;
@property(assign,readwrite) <GKFriendRequestComposeViewControllerDelegate> * composeViewDelegate;
@property(assign,retain) NSString * message;
@property(assign,readwrite) unsigned long long recipientCount;
@property(assign,readwrite) unsigned int rid;

+ (bool)_preventsAppearanceProxyCustomization;
+ (unsigned long long)maxNumberOfRecipients;

- (void)__viewControllerWillBePresented:(bool)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (id)alertController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)composeController;
- (id)composeViewDelegate;
- (void)dealloc;
- (id)init;
- (id)message;
- (bool)navigationBarHidden;
- (void)prepareForNewRecipients:(id)arg1;
- (unsigned long long)recipientCount;
- (unsigned int)rid;
- (void)sendFinishedMessageToDelegateCancelled:(bool)arg1;
- (void)setAlertController:(id)arg1;
- (void)setComposeController:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipientCount:(unsigned long long)arg1;
- (void)setRid:(unsigned int)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
