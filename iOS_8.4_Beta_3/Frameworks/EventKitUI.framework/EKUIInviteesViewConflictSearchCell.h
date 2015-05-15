/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell {
    UILabel *_label;
    double _leftInset;
    UIColor *_originalLabelFontColor;
    NSArray *_persistentConstraints;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic) double leftInset;
@property (nonatomic, retain) UIColor *originalLabelFontColor;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

+ (id)_grayTextColor;
+ (id)_labelFont;

- (void).cxx_destruct;
- (void)_setText:(id)arg1 textColor:(id)arg2 spinnerEnabled:(bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (double)leftInset;
- (id)originalLabelFontColor;
- (id)persistentConstraints;
- (void)setAvailabilityRequestInProgressState;
- (void)setInitialSearchInProgressState;
- (void)setLabel:(id)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)arg1;
- (void)setOriginalLabelFontColor:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setShowMoreState;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)updateConstraints;

@end
