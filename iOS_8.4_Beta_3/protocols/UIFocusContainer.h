/* Generated by RuntimeBrowser.
 */

@protocol UIFocusContainer <NSObject>

@required

- (UIView *)focusedView;
- (void)focusedViewDidChange;
- (void)focusedViewWillChange;
- (bool)isAncestorOfItem:(id <UIFocusContainer>)arg1;
- (<UIFocusContainer> *)preferredFocusedItem;
- (void)setNeedsPreferredFocusedItemUpdate;
- (bool)shouldChangeFocusedItem:(id <UIFocusContainer>)arg1 heading:(unsigned long long)arg2;

@end
