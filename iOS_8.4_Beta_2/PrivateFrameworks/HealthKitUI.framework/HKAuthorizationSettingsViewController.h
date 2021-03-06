/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKAuthorizationSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {
    UIBarButtonItem *_cancelButtonItem;
    HKDataCategoryController *_dataCategoryController;
    <HKAuthorizationSettingsViewControllerDelegate> *_delegate;
    UIBarButtonItem *_doneButtonItem;
    HKHealthStore *_healthStore;
    NSString *_shareDescription;
    HKSource *_source;
    HKSourceAuthorizationController *_sourceAuthorizationController;
    long long _style;
    NSString *_updateDescription;
}

@property(assign,retain) UIBarButtonItem * cancelButtonItem;
@property(assign,retain) HKDataCategoryController * dataCategoryController;
@property(assign,readwrite) <HKAuthorizationSettingsViewControllerDelegate> * delegate;
@property(assign,retain) UIBarButtonItem * doneButtonItem;
@property(assign,readonly) HKHealthStore * healthStore;
@property(assign,copy) NSString * shareDescription;
@property(assign,retain) HKSource * source;
@property(assign,retain) HKSourceAuthorizationController * sourceAuthorizationController;
@property(assign,readonly) long long style;
@property(assign,copy) NSString * updateDescription;

- (void).cxx_destruct;
- (void)_addCancelAndDoneButtons;
- (void)_addHeaderView;
- (void)_addMessageLabelWithMessage:(id)arg1 size:(double)arg2;
- (long long)_authorizationSectionForSection:(long long)arg1;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (void)_configurationFailedWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (bool)_isPrompting;
- (bool)_isTypeEnabledAtIndexPath:(id)arg1;
- (bool)_shouldDisplayReadingSection;
- (bool)_shouldDisplaySharingSection;
- (id)_typeForIndexPath:(id)arg1 section:(long long*)arg2;
- (id)cancelButtonItem;
- (id)dataCategoryController;
- (id)delegate;
- (id)doneButtonItem;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1 style:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadAuthorizationSettings;
- (void)setCancelButtonItem:(id)arg1;
- (void)setDataCategoryController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setShareDescription:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceAuthorizationController:(id)arg1;
- (void)setUpdateDescription:(id)arg1;
- (id)shareDescription;
- (id)source;
- (id)sourceAuthorizationController;
- (long long)style;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)updateDescription;
- (void)viewDidLoad;

@end
