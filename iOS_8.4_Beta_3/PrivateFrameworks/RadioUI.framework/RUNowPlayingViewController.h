/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUNowPlayingViewController : MPUNowPlayingViewController <RUNowPlayingPlaybackControlsViewDelegate, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, RUTrackDownloadViewDelegate, SKStoreProductViewControllerDelegate, UIModalItemDelegate, UIPopoverPresentationControllerDelegate> {
    <RUNowPlayingViewControllerDelegate> *_delegate;
    UIView *_infoButtonContainerView;
    bool _isVisibleForVisuallyEngagedAds;
    SKStoreProductViewController *_productViewController;
    RUPurchaseAlbumView *_purchaseAlbumView;
    UIPopoverPresentationController *_stationActionsPresentationController;
    UIView *_stationActionsPresentationView;
    RUStationActionsViewController *_stationActionsViewController;
    RUTrackActionsModalItem *_trackActionsModalItem;
    UIPopoverPresentationController *_trackActionsPresentationController;
    RUTrackActionsViewController *_trackActionsViewController;
    RUTrackDownloadView *_trackDownloadView;
    bool _visuallyEngagedAds;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUNowPlayingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)MPU_prepareForNavigationController:(id)arg1 poppingToViewController:(id)arg2 animated:(bool)arg3 completion:(id)arg4;
- (void)_adTrackDidFailToLoadNotification:(id)arg1;
- (void)_addStationFromItem:(id)arg1 usingArtist:(bool)arg2;
- (id)_albumTextForItem:(id)arg1;
- (void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2;
- (id)_artistTextForItem:(id)arg1;
- (void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(bool)arg3 canShowAlert:(bool)arg4;
- (struct CGSize { double x1; double x2; })_contentViewSizeForItem:(id)arg1 withContentView:(id)arg2 orientation:(long long)arg3;
- (id)_createContentViewForItem:(id)arg1 contentViewController:(id*)arg2;
- (void)_didUpdateArtworkImage;
- (bool)_dismissModalViewsAnimated:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)_handleTrackAction:(long long)arg1 withItem:(id)arg2;
- (void)_infoButtonAction:(id)arg1;
- (bool)_isActionForHandlingDoubleTapOnArtworkImageViewEnabled;
- (void)_itemAlbumBuyButtonInfoDidChangeNotification:(id)arg1;
- (void)_itemAlbumStoreIDDidChangeNotification:(id)arg1;
- (bool)_itemSupportsRatings:(id)arg1;
- (void)_itemTitlesDidChange;
- (bool)_makeRadioVisible;
- (Class)_playbackControlsViewClass;
- (void)_prepareToAddStation;
- (void)_purchaseAlbumButtonAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioPurchaseAllowedDidChangeNotification:(id)arg1;
- (void)_scaleAndSetModalItemArtworkImageToCurrentArtworkImage;
- (bool)_shouldAbortUpdatingContentView:(id)arg1 forItem:(id)arg2;
- (bool)_shouldUpdateContentView:(id)arg1 forBufferingState:(unsigned long long)arg2;
- (id)_titleTextForItem:(id)arg1;
- (long long)_transitionDirectionForChangeFromItem:(id)arg1 toItem:(id)arg2;
- (bool)_updateItemRelatedStateForChangeToItem:(id)arg1 animated:(bool)arg2;
- (bool)_updateNavigationItemAnimated:(bool)arg1;
- (void)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (void)_updateVisualEngagementWithItem:(id)arg1;
- (void)_videoAdTapGestureRecognizerAction:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)modalItem:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)playbackControlsDidTapInfoButton:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stationActionsViewController:(id)arg1 didFinishAction:(long long)arg2 withObject:(id)arg3 error:(id)arg4;
- (void)stationActionsViewController:(id)arg1 willBeginAction:(long long)arg2;
- (void)trackActioningObject:(id)arg1 didSelectAction:(long long)arg2 atIndex:(long long)arg3;
- (void)trackDownloadView:(id)arg1 stateDidChangeToState:(long long)arg2;
- (void)trackDownloadViewWillTransition:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
