/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilySettings : FAFamilyCircleRequest <AAUIFamilySetupPrompterDelegate> {
    SSAccount *_iTunesAccount;
    bool _isFirstRun;
    UIViewController *_presentingViewController;
    AAUIFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SSAccount * iTunesAccount;
@property(assign,readwrite) bool isFirstRun;
@property(assign,readwrite) UIViewController * presentingViewController;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemon;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (id)iTunesAccount;
- (bool)isFirstRun;
- (void)launchiCloudFamilySettings;
- (id)presentingViewController;
- (void)setITunesAccount:(id)arg1;
- (void)setIsFirstRun:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;

@end