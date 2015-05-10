/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySharingFeaturesView : UIView {
    UIImageView *_calendarIcon;
    UILabel *_calendarSharingLabel;
    long long _context;
    UIImageView *_fmfIcon;
    UIImageView *_fmipIcon;
    UILabel *_inviteHeaderLabel;
    UIImageView *_itunesIcon;
    UIButton *_learnMoreButton;
    UILabel *_locationSharingLabel;
    UILabel *_lostDeviceHelpLabel;
    UILabel *_photoSharingLabel;
    UIImageView *_photosIcon;
    UILabel *_purchaseShaingLabel;
    bool _shouldHideLocationSharing;
}

- (void).cxx_destruct;
- (id)_contextSensitiveLocalizedStringWithKey:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (id)_imageViewWithIconNamed:(id)arg1 addBorder:(bool)arg2;
- (id)_labelWithStringAtKey:(id)arg1;
- (void)_layoutFeatureLabel:(id)arg1 withIconView:(id)arg2 underIconView:(id)arg3 constrainedToWidth:(double)arg4;
- (void)_learnMoreButtonTapped:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithContext:(long long)arg1 hideLocationSharing:(bool)arg2;
- (void)layoutSubviews;

@end
