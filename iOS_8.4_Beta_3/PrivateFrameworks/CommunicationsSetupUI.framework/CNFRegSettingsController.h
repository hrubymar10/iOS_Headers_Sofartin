/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSettingsController : CNFRegListController <CNFRegFirstRunDelegate, CNFRegViewAccountControllerDelegate, CNFRegWizardControllerDelegate> {
    NSArray *_accountGroupSpecifiers;
    TUAccountsController *_accountsController;
    PSSpecifier *_addAddressButtonSpecifier;
    NSMutableArray *_addresses;
    id _alertHandler;
    NSArray *_aliasGroupSpecifiers;
    NSArray *_blacklistGroupSpecifiers;
    PSSpecifier *_blankAddressSpecifier;
    NSArray *_callerIdGroupSpecifiers;
    NSNumber *_delayedRefreshAnimatedFlag;
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSString *_pendingAddress;
    NSArray *_receiveRelayCallsGroupSpecifiers;
    NSArray *_replyWithMessageGroupSpecifiers;
    struct { 
        unsigned int listeningForFinishedEditingEvents : 1; 
        unsigned int appeared : 1; 
        unsigned int ignoringTextFieldChanges : 1; 
        unsigned int showEnableSwitch : 1; 
        unsigned int refreshingCallerIdValues : 1; 
    } _settingsFlags;
    bool _showReceiveRelayCalls;
}

@property (nonatomic, retain) TUAccountsController *accountsController;
@property (nonatomic, copy) id alertHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *pendingAddress;
@property (nonatomic) bool showEnableSwitch;
@property (nonatomic, readonly) bool showReceiveRelayCalls;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (bool)_allAccountsAreDeactivated;
- (id)_appleIDAccounts;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(bool*)arg2;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (bool)_canDeselectAlias:(id)arg1;
- (void)_clearBlankAliasField;
- (void)_handleDeactivation:(id)arg1;
- (void)_handleFaceTimeCTRegistrationStatusChanged;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)_handleFaceTimeStateChanged;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_handleOutgoingRelayCallerIDChanged;
- (void)_handleRelayCapabilitiesChanged;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (void)_hideLocaleChooser;
- (id)_localeChooserForAccount:(id)arg1;
- (id)_operationalAccounts;
- (id)_operationalAccountsForService:(long long)arg1;
- (bool)_popFromSettingsAnimated:(bool)arg1;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (void)_reloadSpecifier:(id)arg1 withBlock:(id)arg2;
- (void)_setupAccountHandlers;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)_setupAccountHandlersForDisabling;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_setupAllListeners;
- (bool)_shouldShowAliasInfo;
- (bool)_shouldUseDisabledHandlers;
- (void)_showAccountAlertForAccount:(id)arg1;
- (void)_showAliasValidationError:(id)arg1;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (void)_showSignInController;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (id)_switchFooterText;
- (void)_tearDownAllListeners;
- (void)_updateAddAliasButtonText;
- (void)_updateControllerStateAnimated:(bool)arg1;
- (void)_updateSwitch;
- (void)_updateSwitchDelayed;
- (id)_useableAccounts;
- (id)accountSpecifiers;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)accountsController;
- (void)addAddressTapped:(id)arg1;
- (bool)additionalAliasesAvailable;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)aliasDetailControllerForSpecifier:(id)arg1;
- (id)aliasForSpecifier:(id)arg1;
- (id)aliasSpecifiers;
- (id)aliasWithIdentifier:(id)arg1;
- (id)blankAliasTextField;
- (id)bundle;
- (id)callerIdAliasSpecifiers;
- (void)clearAccountCache;
- (id)createSpecifierForAccount:(id)arg1;
- (id)createSpecifierForAlias:(id)arg1;
- (id)createSpecifierForCallerIdAlias:(id)arg1;
- (id)customTitle;
- (void)dealloc;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(bool)arg2;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (id)getAccountNameForSpecifier:(id)arg1;
- (id)getAddAliasTextForSpecifier:(id)arg1;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg1;
- (long long)groupIdForSpecifier:(id)arg1;
- (long long)groupIdForSpecifierId:(id)arg1;
- (long long)indexOfLastSpecifierInGroup:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isShowingAddButton;
- (bool)isShowingBlankAlias;
- (void)keyboardDismissed:(id)arg1;
- (id)logName;
- (id)pendingAddress;
- (id)pendingAddressForSpecifier:(id)arg1;
- (bool)popToFirstRunControllerAnimated:(bool)arg1;
- (id)possibleCallerIdAliases;
- (void)refreshAccountsAnimated:(bool)arg1;
- (void)refreshAliasSpecifier:(id)arg1;
- (void)refreshAliasesAnimated:(bool)arg1;
- (void)refreshAllAliasSpecifiers;
- (void)refreshAllCallerIdAliasSpecifiers;
- (void)refreshBlacklistSettingsAnimated:(bool)arg1;
- (void)refreshCallerIdAliasesAnimated:(bool)arg1;
- (void)refreshCallerIdSpecifier:(id)arg1;
- (void)refreshEnabledStateAnimated:(bool)arg1;
- (void)refreshFaceTimeSettingsAnimated:(bool)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(bool)arg1;
- (void)refreshReceiveRelayCallsSettingsAnimated:(bool)arg1;
- (void)returnKeyPressed:(id)arg1;
- (void)setAccountsController:(id)arg1;
- (void)setAlertHandler:(id)arg1;
- (void)setAliasSelected:(id)arg1;
- (void)setCallerId:(id)arg1;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(bool)arg3;
- (void)setPendingAddress:(id)arg1;
- (void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2;
- (void)setReceiveRelayedCallsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setShowEnableSwitch:(bool)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowBlacklistSettings;
- (bool)shouldShowReceiveRelayCalls;
- (bool)shouldShowReplyWithMessage;
- (bool)showAccounts:(bool)arg1 animated:(bool)arg2;
- (void)showAddAliasButton:(bool)arg1 animated:(bool)arg2;
- (bool)showAliases:(bool)arg1 animated:(bool)arg2;
- (void)showAllSettings:(bool)arg1 animated:(bool)arg2;
- (void)showBlacklistSettings:(bool)arg1 animated:(bool)arg2;
- (void)showBlankAlias:(bool)arg1 animated:(bool)arg2;
- (bool)showCallerId:(bool)arg1 animated:(bool)arg2;
- (bool)showEnableSwitch;
- (bool)showReceiveRelayCalls;
- (void)showReceiveRelayCallsSettings:(bool)arg1 animated:(bool)arg2;
- (void)showReplyWithMessage:(bool)arg1 animated:(bool)arg2;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(bool)arg3;
- (id)specifierList;
- (void)startEditingTextField;
- (void)startListeningForFinishedEditingEventNotifications;
- (id)statusForAlias:(id)arg1;
- (id)statusForSpecifier:(id)arg1;
- (void)stopEditingTextField:(bool)arg1;
- (void)stopListeningForFinishedEditingEventNotifications;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
