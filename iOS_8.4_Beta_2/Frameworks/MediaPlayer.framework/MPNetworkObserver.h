/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNetworkObserver : NSObject {
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}

@property(assign,readonly) bool isCellularNetworkingAllowed;
@property(assign,readonly) bool isUsingNetwork;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (id)_init;
- (void)beginUsingNetwork;
- (void)dealloc;
- (void)endUsingNetwork;
- (id)init;
- (bool)isCellularNetworkingAllowed;
- (bool)isUsingNetwork;

@end
