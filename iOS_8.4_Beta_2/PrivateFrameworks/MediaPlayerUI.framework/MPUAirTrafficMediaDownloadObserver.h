/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUAirTrafficMediaDownloadObserver : MPUMediaDownloadObserver {
    NSString *_assetIdentifier;
    double _lastDownloadProgress;
}

+ (void)connection:(id)arg1 updatedProgress:(id)arg2;
+ (void)initialize;
+ (void)registerObserver:(id)arg1 forAssetID:(id)arg2;
+ (void)unregisterObserver:(id)arg1 forAssetID:(id)arg2;

- (void).cxx_destruct;
- (void)_onQueue_invalidate;
- (void)dealloc;
- (double)downloadProgress;
- (id)initWithAssetIdentifier:(id)arg1;
- (bool)isPurchasing;

@end
