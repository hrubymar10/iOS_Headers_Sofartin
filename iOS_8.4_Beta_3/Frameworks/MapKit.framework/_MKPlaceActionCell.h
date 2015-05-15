/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceActionCell : UITableViewCell {
    NSArray *_marginConstraints;
    NSMutableArray *_scaledConstraints;
    UILabel *_titleLabel;
}

@property(assign,retain) NSArray * marginConstraints;
@property(assign,retain) NSMutableArray * scaledConstraints;
@property(assign,retain) UILabel * titleLabel;

+ (id)fontForLabel;
+ (double)intrinsicContentHeight;

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (id)marginConstraints;
- (void)refreshMarginConstraints;
- (id)scaledConstraints;
- (void)setMarginConstraints:(id)arg1;
- (void)setScaledConstraints:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)tintColorDidChange;
- (id)titleLabel;
- (void)updateConstraints;

@end