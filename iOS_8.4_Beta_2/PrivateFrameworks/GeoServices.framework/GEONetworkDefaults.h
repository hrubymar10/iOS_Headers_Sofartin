/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkDefaults : NSObject {
    NSString *_cacheFilePath;
    NSMutableArray *_completionHandlers;
    int _configChangedToken;
    bool _isRegistering;
    NSDictionary *_networkDefaults;
    NSLock *_networkDefaultsLock;
}

+ (void)setRunningInDaemon:(bool)arg1;
+ (id)sharedNetworkDefaults;

- (void)_registrationComplete;
- (void)dealloc;
- (id)init;
- (bool)needsUpdate;
- (void)refreshNetworkDefaults;
- (void)registerNetworkDefaults:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
