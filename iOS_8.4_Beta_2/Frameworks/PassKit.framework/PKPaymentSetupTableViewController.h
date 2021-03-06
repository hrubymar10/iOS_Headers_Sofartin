/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_containerView;
    long long _context;
    long long _style;
    UITableView *_tableView;
    UITableViewController *_tableViewController;
}

@property(assign,readwrite) long long context;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UITableView * tableView;

- (long long)context;
- (void)dealloc;
- (unsigned long long)edgesForExtendedLayout;
- (bool)extendedLayoutIncludesOpaqueBars;
- (id)initWithStyle:(long long)arg1 context:(long long)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContext:(long long)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
