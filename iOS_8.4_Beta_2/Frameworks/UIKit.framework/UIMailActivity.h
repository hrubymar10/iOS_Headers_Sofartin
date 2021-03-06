/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMailActivity : UIActivity <UIStateRestoring> {
    NSString *_autosaveIdentifier;
    bool _hasAnyAccount;
    bool _hasFilteredAccount;
    bool _keyboardVisible;
    MFMailComposeViewController *_mailComposeViewController;
    bool _sourceIsManaged;
}

@property(assign,retain) NSString * autosaveIdentifier;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool hasAnyAccount;
@property(assign,readwrite) bool hasFilteredAccount;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool keyboardVisible;
@property(assign,retain) MFMailComposeViewController * mailComposeViewController;
@property(assign,readonly) Class objectRestorationClass;
@property(assign,readonly) <UIStateRestoring> * restorationParent;
@property(assign,readwrite) bool sourceIsManaged;
@property(assign,readonly) Class superclass;

+ (long long)activityCategory;

- (id)_activityImage;
- (id)_activitySettingsImage;
- (void)_cleanup;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (id)_mailDraftRestorationURL;
- (bool)_restoreDraft;
- (void)_saveDraft:(id)arg1;
- (void)_setSubject:(id)arg1;
- (id)_stateRestorationDraftIsAvailable;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)autosaveIdentifier;
- (void)autosaveWithHandler:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)hasAnyAccount;
- (bool)hasFilteredAccount;
- (id)init;
- (bool)keyboardVisible;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)mailComposeViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setHasAnyAccount:(bool)arg1;
- (void)setHasFilteredAccount:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setMailComposeViewController:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setSubject:(id)arg1;
- (bool)sourceIsManaged;

@end
