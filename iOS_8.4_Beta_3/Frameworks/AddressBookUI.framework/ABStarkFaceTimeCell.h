/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkFaceTimeCell : ABContactCell {
    <ABPropertyCellDelegate> *_delegate;
    UILabel *_faceTimeLabel;
    NSDictionary *_labelTextAttributes;
    ABTransportButton *_transportIcon;
}

@property (nonatomic) <ABPropertyCellDelegate> *delegate;
@property (nonatomic, retain) UILabel *faceTimeLabel;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (nonatomic, readonly) ABTransportButton *transportIcon;

+ (bool)requiresConstraintBasedLayout;

- (id)constantConstraints;
- (void)dealloc;
- (id)delegate;
- (id)faceTimeLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelTextAttributes;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (void)setFaceTimeLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;
- (void)transportButtonClicked:(id)arg1;
- (id)transportIcon;

@end
