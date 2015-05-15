/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
    NSMutableDictionary *_downloads;
    SSDownloadManager *_manager;
    NSOperationQueue *_queue;
    bool _reconnectInProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_attemptReconnect;
- (void)addDownload:(id)arg1 completionBlock:(id)arg2;
- (void)addDownloads:(id)arg1 completionBlock:(id)arg2;
- (void)addOperationWithBlock:(id)arg1;
- (void)cancelDownload:(long long)arg1 completionBlock:(id)arg2;
- (void)dealloc;
- (void)downloadHandlerDisconnected:(bool)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)finishDownload:(long long)arg1;
- (id)initWithDownloadManager:(id)arg1;
- (void)setDelegate:(id)arg1 forDownload:(long long)arg2;
- (void)withDownload:(long long)arg1 perform:(id)arg2;
- (void)withDownload:(long long)arg1 performAsync:(id)arg2;
- (void)withDownloadMatchingIdentifier:(id)arg1 perform:(id)arg2;

@end
