/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUMediaDownloadObserver : NSObject {
    bool _hasPendingProgressHandlerExecution;
    bool _invalidated;
    bool _paused;
    long long _pid;
    id _progressHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) bool canCancel;
@property (getter=isCurrentlyPlayable, readonly) bool currentlyPlayable;
@property (readonly) double downloadProgress;
@property (getter=isPaused, readonly) bool paused;
@property (nonatomic, readonly) long long persistentID;
@property (copy) id progressHandler;
@property (getter=isPurchasing, nonatomic, readonly) bool purchasing;
@property (nonatomic, readonly) double rawDownloadProgress;
@property (nonatomic, readonly) double rawDownloadTotal;
@property (getter=isRestoreDownload, readonly) bool restoreDownload;

+ (id)newObserverForMediaCollection:(id)arg1;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(bool)arg2 storeID:(long long)arg3;
+ (id)newObserverForStoreID:(long long)arg1;
+ (id)sharedITunesStoreDownloadManager;

- (void).cxx_destruct;
- (void)_onQueue_invalidate;
- (void)_onQueue_setShouldFireProgressHandler;
- (bool)canCancel;
- (void)cancelDownload;
- (void)dealloc;
- (double)downloadProgress;
- (id)init;
- (void)invalidate;
- (bool)isCurrentlyPlayable;
- (bool)isPaused;
- (bool)isPurchasing;
- (bool)isRestoreDownload;
- (void)pauseDownload;
- (long long)persistentID;
- (id)progressHandler;
- (double)rawDownloadProgress;
- (double)rawDownloadTotal;
- (void)resumeDownload;
- (void)setProgressHandler:(id)arg1;

@end
