/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageStatusChatItem : CKChatItem {
    struct CGSize { 
        double width; 
        double height; 
    } _buttonSize;
    bool _buttonSizeLoaded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _buttonTextAlignmentInsets;
    NSAttributedString *_transcriptButtonText;
}

@property(assign,readonly) struct CGSize { double x1; double x2; } buttonSize;
@property(getter=isButtonSizeLoaded,assign,readwrite) bool buttonSizeLoaded;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } buttonTextAlignmentInsets;
@property(assign,readonly) long long buttonType;
@property(assign,copy) NSAttributedString * transcriptButtonText;

+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;
+ (id)todayDateFormatter;

- (struct CGSize { double x1; double x2; })buttonSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonTextAlignmentInsets;
- (long long)buttonType;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (unsigned long long)count;
- (void)dealloc;
- (long long)expireStatusType;
- (bool)isButtonSizeLoaded;
- (bool)isFromMe;
- (struct CGSize { double x1; double x2; })loadButtonSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptButtonText;
- (id)loadTranscriptText;
- (id)now;
- (void)setButtonSizeLoaded:(bool)arg1;
- (void)setTranscriptButtonText:(id)arg1;
- (long long)statusType;
- (id)time;
- (id)transcriptButtonText;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptTextAlignmentInsets;
- (void)unloadSize;
- (void)unloadTranscriptText;
- (bool)wantsDrawerLayout;

@end
