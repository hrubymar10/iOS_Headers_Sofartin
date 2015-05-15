/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkPhoneCallViewCell : UIControl {
    NSLayoutConstraint *_containerSpecificLeftConstraint;
    NSLayoutConstraint *_containerSpecificRightConstraint;
    UILabel *_mainLabel;
    UILabel *_subtitleLabel;
}

@property (retain) NSLayoutConstraint *containerSpecificLeftConstraint;
@property (retain) NSLayoutConstraint *containerSpecificRightConstraint;
@property (retain) UILabel *mainLabel;
@property (retain) UILabel *subtitleLabel;

- (id)containerSpecificLeftConstraint;
- (id)containerSpecificRightConstraint;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mainLabel;
- (void)setContainerSpecificLeftConstraint:(id)arg1;
- (void)setContainerSpecificRightConstraint:(id)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setMainLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (id)subtitleLabel;

@end
