/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTNetworkController : NSObject {
    bool _isCellular;
    bool _isReachable;
    int _networkType;
    NSTimer *_notificationTimer;
    bool _registered;
}

+ (id)sharedNetworkController;

- (void)_carrierBundleChangeNotification:(id)arg1;
- (void)_checkForNetworkWithDataStatus:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (bool)allowsHighQuality3GPlayback;
- (int)networkType;
- (void)recheckNetwork;
- (bool)serviceIsReachable;
- (void)start;

@end
