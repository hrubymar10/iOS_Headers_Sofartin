/* Generated by RuntimeBrowser.
 */

@protocol SKUISettingsGroupsDescriptionDelegate <NSObject>

@required

- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 deletedSettingAtIndexPath:(NSIndexPath *)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 didUpdateSettingsDescription:(SKUISettingsDescriptionUpdate *)arg2;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 dismissViewController:(UIViewController *)arg2 animated:(bool)arg3 completion:(id)arg4;
- (void)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 presentViewController:(UIViewController *)arg2 animated:(bool)arg3 completion:(id)arg4;
- (SKUISettingDescriptionView *)settingsGroupsDescription:(SKUISettingsGroupsDescription *)arg1 viewForSettingAtIndexPath:(NSIndexPath *)arg2;

@end