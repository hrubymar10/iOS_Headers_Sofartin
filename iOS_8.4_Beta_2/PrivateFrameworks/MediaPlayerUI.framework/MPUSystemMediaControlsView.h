/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUSystemMediaControlsView : UIView <SKUIItemOfferButtonDelegate> {
    MPUItemOfferButton *_buyAlbumButton;
    MPUSystemBuyButtonConfiguration *_buyAlbumConfiguration;
    MPUItemOfferButton *_buyTrackButton;
    MPUSystemBuyButtonConfiguration *_buyTrackConfiguration;
    <MPUSystemMediaControlsViewDelegate> *_delegate;
    int _prefsChangedNotifyToken;
    MPUSkipLimitView *_skipLimitView;
    long long _style;
    MPUChronologicalProgressView *_timeInformationView;
    MPUMediaControlsTitlesView *_trackInformationView;
    MPUTransportControlsView *_transportControlsView;
    MPUMediaControlsVolumeView *_volumeView;
}

@property(assign,readonly) MPUSystemBuyButtonConfiguration * buyAlbumConfiguration;
@property(assign,readonly) MPUSystemBuyButtonConfiguration * buyTrackConfiguration;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MPUSystemMediaControlsViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) MPUSkipLimitView * skipLimitView;
@property(assign,readonly) long long style;
@property(assign,readonly) Class superclass;
@property(assign,readonly) MPUChronologicalProgressView * timeInformationView;
@property(assign,readonly) MPUMediaControlsTitlesView * trackInformationView;
@property(assign,readonly) MPUTransportControlsView * transportControlsView;
@property(assign,readonly) MPUMediaControlsVolumeView * volumeView;

- (void).cxx_destruct;
- (void)_buyButtonCancelConfirmationAction:(id)arg1;
- (id)_buyButtonForConfiguration:(id)arg1;
- (void)_buyButtonPurchaseAction:(id)arg1;
- (void)_buyButtonShowConfirmationAction:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_controlsInsets;
- (id)_createBuyButtonConfiguration;
- (id)_createBuyButtonWithTitle:(id)arg1 style:(long long)arg2;
- (void)_layoutBuyButtons;
- (void)_layoutBuyButtonsControlCenteriPad;
- (void)_layoutSubviewsControlCenteriPad;
- (void)_setBuyButtonVisibility:(bool)arg1 forButton:(id)arg2;
- (void)_setConfirmationState:(bool)arg1 forBuyButton:(id)arg2;
- (void)_setDownloadProgress:(float)arg1 forBuyButton:(id)arg2;
- (void)_setProgressType:(unsigned long long)arg1 forBuyButton:(id)arg2;
- (bool)_systemwideBuyButtonsEnabled;
- (void)_updateBuyButton:(id)arg1 withOffer:(id)arg2;
- (id)buyAlbumConfiguration;
- (id)buyTrackConfiguration;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (id)skipLimitView;
- (long long)style;
- (id)timeInformationView;
- (id)trackInformationView;
- (id)transportControlsView;
- (void)updatePlaybackState:(bool)arg1;
- (id)volumeView;

@end
