/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _EmergencyCardContactCell : UITableViewCell {
    _HKEmergencyContact *_contact;
    UILabel *_nameLabel;
    UILabel *_phoneNumberLabel;
    UILabel *_relationshipLabel;
}

@property(assign,retain) _HKEmergencyContact * contact;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)contact;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
