/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventEditor : EKCalendarItemEditor {
    UIColor *_backgroundColor;
    EKEventDateEditItem *_dateItem;
    bool _isTransitioning;
    bool _showAttachments;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic) bool showAttachments;

- (void).cxx_destruct;
- (id)_calendarItemIndexSet;
- (bool)_canDetachSingleOccurrence;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (id)_nameForDeleteButton;
- (id)_orderedEditItems;
- (void)_revertEvent;
- (id)_viewForSheet;
- (id)backgroundColor;
- (id)defaultAlertTitle;
- (id)defaultTitleForCalendarItem;
- (unsigned long long)entityType;
- (id)event;
- (void)loadView;
- (id)notificationNamesForLocaleChange;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredTitle;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)refreshStartAndEndDates;
- (bool)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setShowAttachments:(bool)arg1;
- (void)setupDeleteButton;
- (bool)shouldAutorotate;
- (bool)showAttachments;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
