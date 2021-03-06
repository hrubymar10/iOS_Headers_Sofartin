/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal *_internal;
}

@property(assign,readonly) NSURL * URL;
@property(assign,readonly) unsigned long long availableFileSize;
@property(assign,readonly) NSURL * destinationURL;
@property(assign,readonly) unsigned long long downloadToken;
@property(assign,readonly) NSError * error;
@property(assign,readonly) unsigned long long fileSize;
@property(assign,readonly) long long priority;
@property(assign,readonly) long long status;

+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;

- (id)URL;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (int)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (int)_readyForInspection;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (bool)_setFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (id)_weakReference;
- (unsigned long long)availableFileSize;
- (void)dealloc;
- (id)destinationURL;
- (unsigned long long)downloadToken;
- (id)error;
- (unsigned long long)fileSize;
- (void)finalize;
- (id)init;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (void)pause;
- (long long)priority;
- (void)start;
- (long long)status;
- (void)stop;

@end
