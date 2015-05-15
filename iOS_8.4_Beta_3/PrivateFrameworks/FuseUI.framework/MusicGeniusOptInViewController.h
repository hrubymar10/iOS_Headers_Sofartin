/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicGeniusOptInViewController : UIViewController <MPTermsViewControllerDelegate> {
    UILabel *_aboutGeniusLabel;
    UIView *_bottomSpacerView;
    HSCloudClient *_cloudClient;
    NSLayoutConstraint *_contentSizeHeightConstraint;
    UILabel *_continueUsingMusicLabel;
    UIImageView *_geniusImageView;
    UIButton *_geniusLearnMoreButton;
    UILabel *_geniusLegalLabel;
    UIButton *_geniusOptInButton;
    long long _geniusTermsVersion;
    bool _hasUpdateGeniusCompletionBlock;
    MPUIndeterminateProgressIndicatorView *_indeterminateProgressIndicator;
    NSURL *_learnMoreURL;
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    UIScrollView *_scrollView;
    long long _state;
    UILabel *_stepOneBulletLabel;
    UIImageView *_stepOneCompleteImageView;
    UILabel *_stepOneDescriptionLabel;
    UILabel *_stepThreeBulletLabel;
    UIImageView *_stepThreeCompleteImageView;
    UILabel *_stepThreeDescriptionLabel;
    UILabel *_stepTwoBulletLabel;
    UIImageView *_stepTwoCompleteImageView;
    UILabel *_stepTwoDescriptionLabel;
    NSObject<OS_dispatch_source> *_updateStatusTimer;
    MPUContentSizeLayoutConstraint *_updatingAboutGeniusLabelBaselineContraint;
    NSLayoutConstraint *_updatingContinueUsingMusicLabelTopConstraint;
    MPUContentSizeLayoutConstraint *_updatingGeniusLearnMoreButtonBaselineContraint;
    NSLayoutConstraint *_updatingGeniusLegalLabelTopConstraint;
    MPUContentSizeLayoutConstraint *_updatingGeniusOptInButtonBaselineContraint;
    NSLayoutConstraint *_updatingIndeterminateProgressIndicatorWidthConstraint;
    NSLayoutConstraint *_updatingStepOneBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepOneCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepOneDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingStepThreeBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepThreeCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepThreeDescriptionLabelBaselineContraint;
    NSLayoutConstraint *_updatingStepTwoBulletLeadingToLeadingConstraint;
    NSLayoutConstraint *_updatingStepTwoCompletedImageViewCenterYConstraint;
    MPUContentSizeLayoutConstraint *_updatingStepTwoDescriptionLabelBaselineContraint;
    UIView *_widthConstrainingView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIScrollView * scrollView;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateToGeniusEnabledStateWithCompletionHandler:(id)arg1;
- (id)_completionBlock;
- (id)_createHorizontalSpacerViewInView:(id)arg1;
- (id)_createVerticalSpacerViewInView:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_enableGenius;
- (void)_ensureCompletionHandlerIsAttached;
- (void)_ensureUpdateStatusTimerIsRunning;
- (void)_geniusLearnMoreButtonAction:(id)arg1;
- (void)_geniusOptInButtonAction:(id)arg1;
- (void)_optInToGenius;
- (void)_prepareForDisabledViews;
- (void)_prepareForEnabledViews;
- (void)_prepareIndeterminateProgressIndicatorForUse;
- (void)_setupViewsForGeniusDisabledIfNeeded;
- (void)_setupViewsForGeniusEnabledIfNeeded;
- (void)_showErrorAlert;
- (void)_updateConstraintsForContentSizeDidChangeNotification;
- (void)_updateGeniusState;
- (void)_updateLearnMoreButtonState;
- (void)_updateViewConstraintsForGeniusDisabled;
- (void)_updateViewConstraintsForGeniusEnabled;
- (void)_updateViewsForCurrentState;
- (id)contentScrollView;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)init;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)termsViewController:(id)arg1 acceptTermsAndConditions:(id)arg2 completionHandler:(id)arg3;
- (void)termsViewController:(id)arg1 loadTermsAndConditionsWithCompletionHandler:(id)arg2;
- (void)termsViewControllerDidCancel:(id)arg1;
- (void)termsViewControllerShouldDismiss:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
