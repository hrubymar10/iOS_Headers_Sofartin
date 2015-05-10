/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderEditor : EKCalendarItemEditor {
    <EKReminderEditorDelegate> *_reminderEditorDelegate;
    <EKStyleProvider> *_styleProvider;
}

@property(assign,retain) EKReminder * reminder;
@property(assign,readwrite) <EKReminderEditorDelegate> * reminderEditorDelegate;
@property(assign,retain) <EKStyleProvider> * styleProvider;

- (void).cxx_destruct;
- (bool)_canDetachSingleOccurrence;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (id)_nameForDeleteButton;
- (void)_revertEvent;
- (id)_viewForSheet;
- (bool)allowsDeletingFutureOccurrences;
- (void)customizeActionSheet:(id)arg1;
- (id)defaultAlertTitle;
- (id)defaultTitleForCalendarItem;
- (void)editItem:(id)arg1 didCommitFromDetailViewController:(bool)arg2;
- (void)editItem:(id)arg1 didEndDatePickingAnimated:(bool)arg2;
- (void)editItem:(id)arg1 willBeginDatePickingWithDate:(id)arg2 action:(SEL)arg3 animated:(bool)arg4 forSubitem:(unsigned long long)arg5;
- (void)editItemTextChanged:(id)arg1;
- (unsigned long long)entityType;
- (void)loadView;
- (double)marginForTableView:(id)arg1;
- (id)notificationNamesForLocaleChange;
- (id)preferredTitle;
- (void)prepareEditItems;
- (id)reminder;
- (id)reminderEditorDelegate;
- (bool)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setReminder:(id)arg1;
- (void)setReminderEditorDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupDeleteButton;
- (bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;
- (id)styleProvider;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

@end