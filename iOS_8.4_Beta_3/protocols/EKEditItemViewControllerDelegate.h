/* Generated by RuntimeBrowser.
 */

@protocol EKEditItemViewControllerDelegate <NSObject>

@required

- (void)editItemViewController:(EKEditItemViewController *)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerShouldShowDetachAlert;

@optional

- (bool)editItemViewControllerCommit:(EKEditItemViewController *)arg1;
- (void)editItemViewControllerWantsKeyboardPinned:(bool)arg1;

@end
