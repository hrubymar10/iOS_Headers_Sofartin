/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptLocationShareCell : UITableViewCell {
    double _offerTimeRemaining;
    bool _showOfferTimeRemaining;
    UILabel *_timeRemainingLabel;
}

@property(assign,readwrite) double offerTimeRemaining;
@property(assign,readwrite) bool showOfferTimeRemaining;
@property(assign,retain) UILabel * timeRemainingLabel;

+ (id)identifier;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (double)offerTimeRemaining;
- (void)setOfferTimeRemaining:(double)arg1;
- (void)setShowOfferTimeRemaining:(bool)arg1;
- (void)setTimeRemainingLabel:(id)arg1;
- (bool)showOfferTimeRemaining;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeRemainingLabel;
- (id)timeStringForTimeInterval:(double)arg1;

@end
