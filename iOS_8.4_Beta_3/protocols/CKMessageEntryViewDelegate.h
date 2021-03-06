/* Generated by RuntimeBrowser.
 */

@protocol CKMessageEntryViewDelegate <NSObject>

@required

- (bool)messageEntryView:(CKMessageEntryView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryViewDidBeginEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidEndEditing:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(CKMessageEntryView *)arg1;
- (void)messageEntryViewRecordingDidChange:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(CKMessageEntryView *)arg1;
- (bool)messageEntryViewShouldBeginEditing:(CKMessageEntryView *)arg1;

@optional

- (bool)getContainerWidth:(double*)arg1 offset:(double*)arg2;

@end
