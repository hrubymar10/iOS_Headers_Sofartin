/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDownloadManager : NSObject {
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

@property(assign,readonly) SSDownloadManager * downloadManager;
@property(assign,readonly) NSArray * downloads;

- (void)_finishPreflightWithCompletionBlock:(id)arg1;
- (void)_reloadDownloadManager;
- (void)_removeObject:(id)arg1 fromArray:(id*)arg2;
- (void)dealloc;
- (bool)deleteDownload:(id)arg1;
- (id)downloadForDownloadIdentifier:(long long)arg1;
- (id)downloadManager;
- (id)downloads;
- (id)initWithDownloadManager:(id)arg1;
- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;
- (void)preflightWithCompletionBlock:(id)arg1;
- (void)reloadDownloadManager;

@end
