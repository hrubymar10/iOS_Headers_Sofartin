/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentCell : UICollectionViewCell {
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    bool _editing;
    CKAttachmentItem *_representedObject;
}

@property(assign,retain) UIImageView * checkmarkView;
@property(assign,readwrite) NSObject<CKAttachmentCellDelegate> * delegate;
@property(getter=isEditing,assign,readwrite) bool editing;
@property(assign,retain) CKAttachmentItem * representedObject;

- (id)checkmarkView;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)more:(id)arg1;
- (id)representedObject;
- (void)saveAttachment:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
