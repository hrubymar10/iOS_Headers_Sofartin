/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetDownloadSessionInternal : NSObject {
    NSURL *URL;
    struct OpaqueFigAsset { } *asset;
    NSNumber *cachePrimingDownloadTokenNum;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSError *error;
    struct OpaqueFigPlaybackItem { } *playbackItem;
    struct OpaqueFigPlayer { } *player;
    long long priority;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    long long status;
    AVWeakReference *weakReference;
}

@end
