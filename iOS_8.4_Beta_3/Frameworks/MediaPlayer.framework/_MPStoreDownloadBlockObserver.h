/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {
    id _didFinishDownloadHandler;
    id _didFinishPurchaseHandler;
    MPStoreDownload *_download;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) id didFinishDownloadHandler;
@property(assign,copy) id didFinishPurchaseHandler;
@property(assign,readonly) MPStoreDownload * download;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)didFinishDownloadHandler;
- (id)didFinishPurchaseHandler;
- (id)download;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)initWithDownload:(id)arg1;
- (void)setDidFinishDownloadHandler:(id)arg1;
- (void)setDidFinishPurchaseHandler:(id)arg1;

@end
