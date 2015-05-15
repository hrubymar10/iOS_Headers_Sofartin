/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDownloadsViewController : SKUIViewController <SKUIDownloadsChildViewControllerDelegate, SSDownloadManagerObserver> {
    SKUIImageDataConsumer *_consumer;
    SSDownloadManager *_downloadManager;
    NSArray *_downloads;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIIPadDownloadsViewController *_ipadViewController;
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    UIImage *_nullImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_sizeClassForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_reloadBadge;
- (void)_reloadManagerFromServer;
- (void)_reloadView;
- (void)_reloadViewControllerWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setArtwork:(id)arg1 forURLString:(id)arg2;
- (id)childViewController:(id)arg1 artworkForDownload:(id)arg2;
- (void)childViewController:(id)arg1 performActionForDownload:(id)arg2;
- (void)childViewController:(id)arg1 removeDownloads:(id)arg2;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLayoutSubviews;

@end
