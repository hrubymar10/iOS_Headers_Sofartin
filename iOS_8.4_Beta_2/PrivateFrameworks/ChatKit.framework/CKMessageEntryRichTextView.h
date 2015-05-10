/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate> {
    BOOL _balloonColor;
    NSMutableDictionary *_composeImages;
    NSMutableDictionary *_mediaObjects;
    long long _pasteboardChangeCount;
    CKComposition *_pasteboardComposition;
}

@property(assign,readwrite) BOOL balloonColor;
@property(assign,retain) NSMutableDictionary * composeImages;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSMutableDictionary * mediaObjects;
@property(assign,readwrite) long long pasteboardChangeCount;
@property(assign,retain) CKComposition * pasteboardComposition;
@property(assign,readonly) Class superclass;

- (id)attributedTextForCompositionText:(id)arg1;
- (BOOL)balloonColor;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)composeImageForTransferGUID:(id)arg1;
- (id)composeImages;
- (id)compositionText;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)mediaObjects;
- (void)paste:(id)arg1;
- (long long)pasteboardChangeCount;
- (id)pasteboardComposition;
- (void)previewDidChange:(id)arg1;
- (void)setBalloonColor:(BOOL)arg1;
- (void)setComposeImages:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setPasteboardChangeCount:(long long)arg1;
- (void)setPasteboardComposition:(id)arg1;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (void)updateComposeImages;

@end
