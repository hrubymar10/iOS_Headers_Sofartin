/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDNavigationTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    bool _RTL;
    APDDataManager *_dataManager;
    <APDNavigationTableViewControllerDelegate> *_delegate;
    UIView *_tableFooterView;
    UITableView *_tableView;
    NSMutableArray *_tableViewDataArray;
}

@property (nonatomic) bool RTL;
@property (nonatomic, retain) APDDataManager *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <APDNavigationTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tableFooterView;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (bool)RTL;
- (id)dataManager;
- (id)delegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setTableFooterView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableFooterView;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (bool)updateCellSelectionWithScollPosition:(long long)arg1 topic:(id)arg2 animated:(bool)arg3;
- (void)updateFooterView;
- (void)updateLocalizedStrings;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
