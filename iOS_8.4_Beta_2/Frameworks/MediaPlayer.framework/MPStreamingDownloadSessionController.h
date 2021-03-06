/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSessionController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMapTable *_assetDownloadSessionToDownloadSessions;
    NSMapTable *_assetDownloadSessionToPlaybackMetadata;
    NSMutableArray *_assetDownloadSessionsPendingStart;
    unsigned long long _pausingAllDownloadsTransactionCount;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { 
            unsigned long long *__first_; 
        } __end_cap_; 
    } _prioritizedDownloadTokens;
    NSOperationQueue *_streamingOperationQueue;
    NSMapTable *_uniqueKeyToDownloadSessions;
}

+ (id)sharedDownloadSessionController;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_assetDownloadSessionDownloadFailedNotification:(id)arg1;
- (void)_assetDownloadSessionDownloadSucceededNotification:(id)arg1;
- (void)_assetDownloadSessionFileSizeAvailableNotification:(id)arg1;
- (id)_assetDownloadSessionForDownloadSession:(id)arg1 returningAllDownloadSessions:(id*)arg2 playbackItemMetadata:(id*)arg3;
- (unsigned long long)_assetQualityForAssetFlavor:(id)arg1;
- (void)_auditAssetDownloadSession:(id)arg1 withNetworkConstraints:(id)arg2;
- (void)_auditNetworkConstraintsForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2;
- (id)_createNewDownloadSessionWithExistingDownloadSessionForUniqueKey:(id)arg1;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (void)_getNetworkConstraintsForPlaybackItemMetadata:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_handleNewDownloadSession:(id)arg1 withAssetDownloadSession:(id)arg2 forPlaybackItemMetadata:(id)arg3 uniqueKey:(id)arg4;
- (void)_handlePrioritizationForFinishingAssetDownloadSession:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_newDownloadSessionForPlaybackItemMetadata:(id)arg1 sourceURL:(id)arg2 downloadKey:(id)arg3 sinfs:(id)arg4 pathExtension:(id)arg5 assetFlavor:(id)arg6 protectionType:(unsigned long long)arg7 returningAssetDownloadSession:(id*)arg8;
- (void)_playbackItemMetadataCanDownloadContentDidChangeNotification:(id)arg1;
- (void)_postFailedForDownloadSession:(id)arg1;
- (id)_preferredAssetFlavorsForAssetQuality:(unsigned long long)arg1;
- (void)_registerForNotificationsForAssetDownloadSession:(id)arg1;
- (void)_registerForNotificationsForPlaybackItemMetadata:(id)arg1;
- (void)_removeFileForAssetDownloadSession:(id)arg1 playbackItemMetadata:(id)arg2;
- (id)_sinfsByCleaningSinfs:(id)arg1;
- (id)_uniqueKeyForPlaybackItemMetadata:(id)arg1;
- (void)_unregisterDownloadSession:(id)arg1 withAssetDownloadSession:(id)arg2 playbackItemMetadata:(id)arg3 returningWasLastAssociatedDownloadSession:(bool*)arg4;
- (void)_unregisterForNotificationsForAssetDownloadSession:(id)arg1;
- (void)_unregisterForNotificationsForPlaybackItemMetadata:(id)arg1;
- (void)acquireDownloadSessionWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)beginPausingAllDownloadSessions;
- (void)dealloc;
- (void)endPausingAllDownloadSessions;
- (id)init;
- (void)prioritizeDownloadSession:(id)arg1;
- (void)releaseDownloadSession:(id)arg1;
- (void)startDownloadSession:(id)arg1;

@end
