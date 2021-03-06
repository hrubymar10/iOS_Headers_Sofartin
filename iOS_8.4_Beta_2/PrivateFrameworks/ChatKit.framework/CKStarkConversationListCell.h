/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKStarkConversationListCell : UITableViewCell {
    UIDateLabel *_dateLabel;
    UIImage *_monogramImage;
    UILabel *_recipientsLabel;
    UIImageView *_unreadImageView;
}

@property(assign,retain) NSDate * date;
@property(assign,retain) UIDateLabel * dateLabel;
@property(assign,readwrite) bool hasUnreadMessages;
@property(assign,readwrite) UIImage * monogramImage;
@property(assign,retain) NSString * recipientNames;
@property(assign,retain) UILabel * recipientsLabel;
@property(assign,retain) UIImageView * unreadImageView;

+ (double)starkCellMarginWidth;

- (id)dateLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)monogramImage;
- (id)recipientsLabel;
- (void)setDate:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setHasUnreadMessages:(bool)arg1;
- (void)setMonogramImage:(id)arg1;
- (void)setRecipientNames:(id)arg1;
- (void)setRecipientsLabel:(id)arg1;
- (void)setUnreadImageView:(id)arg1;
- (id)unreadImageView;

@end
