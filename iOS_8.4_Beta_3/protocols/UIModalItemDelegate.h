/* Generated by RuntimeBrowser.
 */

@protocol UIModalItemDelegate <NSObject>

@optional

- (void)didPresentModalItem:(_UIModalItem *)arg1;
- (void)modalItem:(_UIModalItem *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)modalItem:(_UIModalItem *)arg1 shouldDismissForButtonAtIndex:(long long)arg2;
- (void)modalItem:(_UIModalItem *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (bool)modalItemShouldEnableFirstOtherButton:(_UIModalItem *)arg1;
- (void)willPresentModalItem:(_UIModalItem *)arg1;

@end
