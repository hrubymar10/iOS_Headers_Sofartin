/* Generated by RuntimeBrowser.
 */

@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>

@required

- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 balloonViewTitleTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 collectionViewContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKTranscriptCollectionViewController *)arg1 moreButtonTappedForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerDidInset:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(CKTranscriptCollectionViewController *)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(CKTranscriptCollectionViewController *)arg1;
- (void)transcriptCollectionViewControllerWillInset:(CKTranscriptCollectionViewController *)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(CKTranscriptCollectionViewController *)arg1;

@end
