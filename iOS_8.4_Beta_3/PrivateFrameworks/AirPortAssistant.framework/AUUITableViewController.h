/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {
    TableViewManager *_tableManager;
}

@property(assign,readwrite) <TableViewManagerDelegate> * delegate;
@property(assign,readonly) TableViewManager * tableManager;
@property(assign,retain) UITableView * tableView;

- (void)dealloc;
- (id)delegate;
- (void)initAUUITableViewControllerCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableManager;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
