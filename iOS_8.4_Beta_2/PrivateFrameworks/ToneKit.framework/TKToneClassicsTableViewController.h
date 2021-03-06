/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKToneClassicsTableViewController : UITableViewController <TKTonePickerTableViewLayoutMarginsObserver> {
    TKTonePickerItem *_classicTonesHeaderItem;
    <TKTonePickerTableViewControllerHelper> *_tonePickerTableViewControllerHelper;
}

@property(setter=_setClassicTonesHeaderItem:,assign,retain) TKTonePickerItem * _classicTonesHeaderItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) <TKTonePickerTableViewControllerHelper> * tonePickerTableViewControllerHelper;

- (id)_classicTonesHeaderItem;
- (void)_setClassicTonesHeaderItem:(id)arg1;
- (void)dealloc;
- (void)didReloadTones;
- (void)didUpdateCheckedStatus:(bool)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;
- (id)initWithClassicTonesHeaderItem:(id)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTonePickerTableViewControllerHelper:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tonePickerTableViewControllerHelper;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
