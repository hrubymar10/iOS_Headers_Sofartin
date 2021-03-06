/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertUIItemSummaryCell : UITableViewCell {
    UIImageView *_itemImageView;
    UILabel *_itemSubtitleLabel;
    UILabel *_itemTitleLabel;
    UIView *_itemTitleView;
}

@property(assign,retain) UIImageView * itemImageView;
@property(assign,retain) UILabel * itemSubtitleLabel;
@property(assign,retain) UILabel * itemTitleLabel;
@property(assign,retain) UIView * itemTitleView;

+ (double)titleOriginX;

- (void).cxx_destruct;
- (id)_profileImageAppropriateForDevice;
- (void)_setupCell;
- (void)_setupConstraints;
- (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemImageView;
- (id)itemSubtitleLabel;
- (id)itemTitleLabel;
- (id)itemTitleView;
- (void)setItemImageView:(id)arg1;
- (void)setItemSubtitleLabel:(id)arg1;
- (void)setItemTitleLabel:(id)arg1;
- (void)setItemTitleView:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
