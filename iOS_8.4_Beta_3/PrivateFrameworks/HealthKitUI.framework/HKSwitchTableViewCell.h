/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKSwitchTableViewCell : UITableViewCell {
    bool _centersIcon;
    <HKSwitchTableViewCellDelegate> *_delegate;
    UILabel *_displayLabel;
    bool _enabled;
    UIImageView *_iconImageView;
    UISwitch *_switch;
}

@property (nonatomic) bool centersIcon;
@property (nonatomic) <HKSwitchTableViewCellDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSize;
@property (getter=isOn, nonatomic) bool on;

- (void).cxx_destruct;
- (void)_setupUI;
- (bool)centersIcon;
- (id)delegate;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEnabled;
- (bool)isOn;
- (void)layoutSubviews;
- (void)setCentersIcon:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)switchValueChanged:(id)arg1;

@end
