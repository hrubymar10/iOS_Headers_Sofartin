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

@property(assign,readonly) bool canCancel;
@property(getter=isCurrentlyPlayable,assign,readonly) bool currentlyPlayable;
@property(assign,readonly) double downloadProgress;
@property(getter=isPaused,assign,readonly) bool paused;
@property(assign,readonly) long long persistentID;
@property(assign,copy) id progressHandler;
@property(getter=isPurchasing,assign,readonly) bool purchasing;
@property(assign,readonly) double rawDownloadProgress;
@property(assign,readonly) double rawDownloadTotal;
@property(getter=isRestoreDownload,assign,readonly) bool restoreDownload;

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