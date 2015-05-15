/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFGroupDetailViewController : UITableViewController {
    <MFGroupDetailViewControllerDelegate> *_delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property(assign,readwrite) <MFGroupDetailViewControllerDelegate> * delegate;
@property(assign,retain) MFRecentComposeRecipientGroup * group;

- (void)_removeButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)group;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroup:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
