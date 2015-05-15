/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentBalloonView : CKColoredBalloonView {
    UIView<CKAttachmentView> *_attachmentView;
}

@property(assign,retain) UIView<CKAttachmentView> * attachmentView;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attachmentView;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAttachmentView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transferUpdated:(id)arg1;

@end
