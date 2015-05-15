/* Generated by RuntimeBrowser.
 */

@protocol EKUIInviteesViewSection <NSObject>

@required

- (bool)canEditRow:(NSIndexPath *)arg1;
- (bool)canSelectRow:(NSIndexPath *)arg1;
- (void)cancelOutstandingOperations;
- (UITableViewCell *)cellForIndexPath:(NSIndexPath *)arg1 inTableView:(UITableView *)arg2;
- (void)commitEditingStyle:(long long)arg1 forRow:(NSIndexPath *)arg2;
- (NSString *)debugTitle;
- (long long)editingStyleForRow:(NSIndexPath *)arg1;
- (double)estimatedHeightForRow:(NSIndexPath *)arg1;
- (NSString *)headerTitle;
- (unsigned long long)numberOfRows;
- (void)reloadAndRegisterReusableCellsWithTableView:(UITableView *)arg1;
- (bool)sectionShouldBeShown;
- (void)selectRow:(NSIndexPath *)arg1;
- (void)setTableViewCellHook:(id)arg1;
- (NSString *)titleForDeleteConfirmationButtonForRow:(NSIndexPath *)arg1;

@end