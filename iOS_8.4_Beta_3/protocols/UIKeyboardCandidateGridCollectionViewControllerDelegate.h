/* Generated by RuntimeBrowser.
 */

@protocol UIKeyboardCandidateGridCollectionViewControllerDelegate <UIKeyboardCandidateList>

@required

- (unsigned long long)gridCollectionViewNumberOfColumns:(UIKeyboardCandidateGridCollectionViewController *)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(UIKeyboardCandidateGridCollectionViewController *)arg1;

@optional

- (UIView *)headerViewForCandidateSet:(TIKeyboardCandidateResultSet *)arg1;
- (void)padInlineFloatingViewExpand:(UIKeyboardCandidateGridCollectionViewController *)arg1;
- (bool)padInlineFloatingViewIsExpanded:(UIKeyboardCandidateGridCollectionViewController *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;

@end
