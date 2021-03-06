/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallButton : UIButton {
    UILabel *_buttonLabel;
    NSLayoutConstraint *_horizontalPositioningConstraint;
    int _inCallButtonType;
    TPStarkInCallButtonRing *_ringView;
    int _specialLayoutType;
    bool _toggledOn;
    UIColor *_unhighlightedBackgroundColor;
}

@property (retain) UILabel *buttonLabel;
@property (retain) NSLayoutConstraint *horizontalPositioningConstraint;
@property (readonly) int inCallButtonType;
@property (retain) TPStarkInCallButtonRing *ringView;
@property (nonatomic) int specialLayoutType;
@property (nonatomic) bool toggledOn;
@property (retain) UIColor *unhighlightedBackgroundColor;

- (id)buttonLabel;
- (void)dealloc;
- (id)horizontalPositioningConstraint;
- (int)inCallButtonType;
- (id)initForButtonType:(int)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)ringView;
- (void)setButtonLabel:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasRingView:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHorizontalPositioningConstraint:(id)arg1;
- (void)setRingView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSpecialLayoutType:(int)arg1;
- (void)setToggledOn:(bool)arg1;
- (void)setUnhighlightedBackgroundColor:(id)arg1;
- (int)specialLayoutType;
- (bool)toggledOn;
- (id)unhighlightedBackgroundColor;
- (void)updateToProperIconColor;

@end
