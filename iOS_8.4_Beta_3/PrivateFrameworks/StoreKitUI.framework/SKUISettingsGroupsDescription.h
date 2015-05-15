/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate> {
    SKUIClientContext *_clientContext;
    NSMapTable *_controllers;
    <SKUISettingsGroupsDescriptionDelegate> *_delegate;
    SKUISettingsObjectStore *_groupDescriptions;
}

@property(assign,readwrite) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUISettingsGroupsDescriptionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSettingsGroupWithViewElement:(id)arg1 controller:(id)arg2;
- (id)_controllerForGroupElement:(id)arg1;
- (void)_dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)_dispatchUpdateForSettingsGroupDescription:(id)arg1 atIndex:(unsigned long long)arg2 withUpdateType:(long long)arg3;
- (id)_gatherEditableSettings;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)addSettingsGroupWithViewElement:(id)arg1;
- (id)clientContext;
- (id)createEditTransaction;
- (id)delegate;
- (void)deleteSettingAtIndexPath:(id)arg1;
- (void)deleteSettingsGroupDescription:(id)arg1;
- (void)dispatchUpdate:(id)arg1;
- (id)footerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (bool)hasEditableSettingDescriptions;
- (id)headerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (void)hideSettingsGroupDescription:(id)arg1;
- (unsigned long long)indexOfSettingsGroupDescription:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 clientContext:(id)arg2;
- (unsigned long long)numberOfGroups;
- (unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)arg1;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (void)revealSettingsGroupDescription:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settingDescriptionAtIndexPath:(id)arg1;
- (void)settingsGroupController:(id)arg1 reloadSettingDescription:(id)arg2;
- (id)settingsGroupController:(id)arg1 viewForSettingDescription:(id)arg2;
- (bool)shouldShowFooterForGroupAtIndex:(unsigned long long)arg1;
- (bool)shouldShowHeaderForGroupAtIndex:(unsigned long long)arg1;
- (id)viewElementForSettingAtIndexPath:(id)arg1;

@end