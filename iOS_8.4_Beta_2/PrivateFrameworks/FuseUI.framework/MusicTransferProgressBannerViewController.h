/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTransferProgressBannerViewController : UIViewController <MusicTransferObserver> {
    MusicTransferProgressBannerView *_bannerView;
    MusicTransferAggregator *_transferAggregator;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_bannerEvent:(id)arg1;
- (void)_reloadBannerViewAnimated:(bool)arg1;
- (void)dealloc;
- (id)initWithTransferAggregator:(id)arg1;
- (void)loadView;
- (void)transferAggregatorDidChange:(id)arg1;

@end
