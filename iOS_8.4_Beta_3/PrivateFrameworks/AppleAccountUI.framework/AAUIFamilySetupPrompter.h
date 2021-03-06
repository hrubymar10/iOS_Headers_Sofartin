/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupPrompter : NSObject <AAUIFamilySetupDelegate> {
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    <AAUIFamilySetupPrompterDelegate> *_delegate;
    ACAccount *_grandSlamAccount;
    SSAccount *_iTunesAccount;
    bool _isRequestInFlight;
    NSOperationQueue *_networkingQueue;
    UIViewController *_presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIFamilySetupPrompterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_goToFamilySetup;
- (void)_goToInvitations;
- (void)_handleFamilyEligibilityResponse:(id)arg1 isFirstRun:(bool)arg2;
- (void)_showConfirmationForStartingFamilySetup;
- (void)_showConfirmationForStartingFamilySetupWithPendingInvite;
- (void)_showPendingInvitesDialog;
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;
- (void)_startFamilySetupFlowWithEligibilityResponse:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)init;
- (id)initWithiTunesAccount:(id)arg1;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(bool)arg2;
- (void)setDelegate:(id)arg1;

@end
