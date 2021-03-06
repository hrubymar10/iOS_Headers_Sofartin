/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationTrackInfoView : UIView <RUTrackDownloadViewDelegate> {
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    MPAVItem *_avItem;
    <RUStationTrackInfoViewDelegate> *_delegate;
    UIImageView *_imageView;
    UITapGestureRecognizer *_imageViewTapGestureRecognizer;
    UIButton *_storeButton;
    UILabel *_titleLabel;
    RUTrackDownloadView *_trackDownloadView;
}

@property(setter=setAVItem:,assign,retain) MPAVItem * avItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RUStationTrackInfoViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * stationHash;
@property(assign,readwrite) long long stationID;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) UIViewController * trackDownloadPresentingViewController;

+ (id)_albumLabelFont;
+ (id)_artistLabelFont;
+ (id)_titleLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_avItemAlbumStoreIDDidChangeNotification:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_imageViewTapAction:(id)arg1;
- (id)_newTrackDownloadView;
- (void)_registerForAVItemNotifications;
- (void)_storeButtonTapAction:(id)arg1;
- (void)_unregisterForAVItemNotifications;
- (id)avItem;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAVItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setTrackDownloadPresentingViewController:(id)arg1;
- (id)stationHash;
- (long long)stationID;
- (id)trackDownloadPresentingViewController;
- (void)trackDownloadViewWillTransition:(id)arg1;

@end
