/* Generated by RuntimeBrowser.
 */

@protocol EKUIInviteesViewConflictResolutionSection <EKUIInviteesViewSection>

@required

- (EKUIInviteeAlternativeTimeSearcher *)availabilitySearcher;
- (void)availabilitySearcherChangedState:(long long)arg1;
- (void)clearCheckmark;
- (bool)injectNewRowsBeforeLastExistingRow;
- (void)refreshCellsAfterStateChange;
- (void)setAvailabilitySearcher:(EKUIInviteeAlternativeTimeSearcher *)arg1;
- (void)setNewTimeChosen:(id)arg1;
- (void)setShowPreviewOfEventAtTime:(id)arg1;

@end