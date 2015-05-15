/* Generated by RuntimeBrowser.
 */

@protocol ABContactViewControllerDelegate <NSObject>

@optional

- (void)contactViewController:(ABContactViewController *)arg1 didChangeToEditMode:(bool)arg2;
- (void)contactViewController:(ABContactViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactViewController:(ABContactViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (UIColor *)contactViewController:(ABContactViewController *)arg1 highlightColorForPropertyItem:(ABPropertyGroupItem *)arg2 contact:(CNContact *)arg3;
- (bool)contactViewController:(ABContactViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 property:(NSString *)arg3 labeledValue:(CNLabeledValue *)arg4;

@end
