/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCell : UITableViewCell {
    UILabel *_authorLabel;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
    NSDate *_date;
    UILabel *_dateLabel;
    NSLayoutConstraint *_dateLabelBaselineConstraint;
    UIImageView *_pictureView;
    UILabel *_reviewLabel;
    NSLayoutConstraint *_reviewLabelBaselineConstraint;
    NSLayoutConstraint *_reviewLabelHeightConstraint;
    NSLayoutConstraint *_reviewLabelToBottomConstraint;
    MKStarRatingAndLabelView *_starView;
}

@property(assign,readwrite) NSString * author;
@property(assign,readwrite) NSDate * date;
@property(assign,readwrite) UIImage * picture;
@property(assign,readwrite) unsigned long long rating;
@property(assign,readwrite) NSString * reviewText;

+ (double)intrinsicContentHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)fontForAuthor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)refreshMarginConstraints;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setRating:(unsigned long long)arg1;
- (void)setReviewText:(id)arg1;
- (void)updateConstraints;

@end
