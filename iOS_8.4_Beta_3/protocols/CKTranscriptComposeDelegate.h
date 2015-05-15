/* Generated by RuntimeBrowser.
 */

@protocol CKTranscriptComposeDelegate <NSObject>

@required

- (void)didCancelComposition:(CKTranscriptController *)arg1;
- (void)showNewMessageCompositionForComposition:(CKComposition *)arg1;
- (bool)supportsAttachments;
- (void)transcriptController:(CKTranscriptController *)arg1 didSelectNewConversation:(CKConversation *)arg2;
- (void)transcriptController:(CKTranscriptController *)arg1 didSendMessageInConversation:(CKConversation *)arg2;
- (void)transcriptController:(CKTranscriptController *)arg1 willSendComposition:(CKComposition *)arg2 inConversation:(CKConversation *)arg3;
- (void)transcriptControllerDidReportSpam:(CKTranscriptController *)arg1;

@optional

- (bool)canEditRecipients;

@end