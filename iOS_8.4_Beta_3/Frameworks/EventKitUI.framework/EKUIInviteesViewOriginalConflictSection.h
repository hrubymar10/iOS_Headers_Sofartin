/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewOriginalConflictSection : NSObject <EKUIInviteesViewConflictResolutionSection> {
    EKUIInviteeAlternativeTimeSearcher *_availabilitySearcher;
    NSArray *_busyParticipants;
    NSString *_cachedCellReuseIdentifier;
    bool _checked;
    bool _conflictFound;
    NSDate *_endDate;
    id _newTimeChosen;
    unsigned long long _reuseIdentifierVersion;
    NSMutableSet *_rowsShowingAllParticipants;
    id _showPreviewOfEventAtTime;
    NSDate *_startDate;
    id _tableViewCellHook;
}

@property (nonatomic, retain) EKUIInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (nonatomic, retain) NSArray *busyParticipants;
@property (nonatomic, retain) NSString *cachedCellReuseIdentifier;
@property (nonatomic) bool checked;
@property (nonatomic) bool conflictFound;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id newTimeChosen;
@property (nonatomic) unsigned long long reuseIdentifierVersion;
@property (nonatomic, retain) NSMutableSet *rowsShowingAllParticipants;
@property (nonatomic, copy) id showPreviewOfEventAtTime;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) id tableViewCellHook;

- (void).cxx_destruct;
- (bool)_isValidRow:(long long)arg1;
- (id)availabilitySearcher;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (id)busyParticipants;
- (id)cachedCellReuseIdentifier;
- (bool)canEditRow:(id)arg1;
- (bool)canSelectRow:(id)arg1;
- (void)cancelOutstandingOperations;
- (id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
- (bool)checked;
- (void)clearCheckmark;
- (void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
- (bool)conflictFound;
- (id)debugTitle;
- (long long)editingStyleForRow:(id)arg1;
- (id)endDate;
- (double)estimatedHeightForRow:(id)arg1;
- (id)headerTitle;
- (id)init;
- (bool)injectNewRowsBeforeLastExistingRow;
- (id)newTimeChosen;
- (unsigned long long)numberOfRows;
- (void)refreshCellsAfterStateChange;
- (void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
- (unsigned long long)reuseIdentifierVersion;
- (id)rowsShowingAllParticipants;
- (bool)sectionShouldBeShown;
- (void)selectRow:(id)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setBusyParticipants:(id)arg1;
- (void)setCachedCellReuseIdentifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setConflictFound:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setNewTimeChosen:(id)arg1;
- (void)setReuseIdentifierVersion:(unsigned long long)arg1;
- (void)setRowsShowingAllParticipants:(id)arg1;
- (void)setShowPreviewOfEventAtTime:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTableViewCellHook:(id)arg1;
- (id)showPreviewOfEventAtTime;
- (id)startDate;
- (id)tableViewCellHook;
- (id)titleForDeleteConfirmationButtonForRow:(id)arg1;

@end
