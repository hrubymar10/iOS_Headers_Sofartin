/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKReportSpamChatItem : CKStampChatItem {
    NSAttributedString *_transcriptButtonText;
}

@property(assign,copy) NSAttributedString * transcriptButtonText;

- (Class)cellClass;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setTranscriptButtonText:(id)arg1;
- (id)transcriptButtonText;

@end
