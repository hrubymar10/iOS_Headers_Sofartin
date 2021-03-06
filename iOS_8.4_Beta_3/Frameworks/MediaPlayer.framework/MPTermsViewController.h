/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTermsViewController : UIViewController {
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_bottomSpacerView;
    <MPTermsViewControllerDelegate> *_delegate;
    bool _needToLoadTerms;
    SSTermsAndConditions *_termsAndConditions;
    UITextView *_termsTextView;
    UIView *_topSpacerView;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) UIView *bottomSpacerView;
@property (nonatomic) <MPTermsViewControllerDelegate> *delegate;
@property (nonatomic, retain) UITextView *termsTextView;
@property (nonatomic, retain) UIView *topSpacerView;

- (void).cxx_destruct;
- (void)_acceptAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_failedToAcceptTermsWithError:(id)arg1;
- (void)_failedToLoadTermsWithError:(id)arg1;
- (void)_loadedTerms:(id)arg1;
- (void)_setupViewForFailedToAcceptTerms;
- (void)_setupViewForFailedToLoadTerms;
- (void)_setupViewForLoadingTerms;
- (void)_setupViewForShowingTerms;
- (void)_startLoadingTerms;
- (void)_userAcceptedTerms;
- (id)activityIndicatorView;
- (id)bottomSpacerView;
- (id)delegate;
- (id)init;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setBottomSpacerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTermsTextView:(id)arg1;
- (void)setTopSpacerView:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)termsTextView;
- (id)topSpacerView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
