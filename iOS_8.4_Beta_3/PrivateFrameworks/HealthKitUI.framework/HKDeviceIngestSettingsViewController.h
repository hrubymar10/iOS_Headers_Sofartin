/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKDeviceIngestSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {
    NSMutableArray *_dataTypeNames;
    HKDataUnitGroupController *_dataUnitGroupController;
    bool _deviceEnabled;
    bool _deviceFound;
    NSUUID *_deviceIdentifier;
    HKHealthStore *_healthStore;
    HKSource *_source;
}

- (void).cxx_destruct;
- (id)initWithHealthStore:(id)arg1 dataUnitGroupController:(id)arg2 source:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;

@end
