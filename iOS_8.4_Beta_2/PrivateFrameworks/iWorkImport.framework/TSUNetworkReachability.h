/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNetworkReachability : NSObject {
    long long _enableCount;
    bool _localWiFi;
    bool _notifierActive;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

@property(assign,readonly) bool connectionRequired;
@property(assign,readwrite) bool notifierActive;
@property(assign,readonly) long long status;

+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityForInternetConnection;
+ (id)networkReachabilityForLocalWiFi;
+ (long long)networkReachabilityStatusForDocumentResources;
+ (long long)networkReachabilityStatusForInternetConnection;
+ (long long)networkReachabilityStatusForLocalWiFi;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)networkReachabilityWithHostName:(id)arg1;

- (bool)connectionRequired;
- (void)dealloc;
- (void)disableNotifier;
- (bool)enableNotifier;
- (id)init;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability { }*)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (bool)notifierActive;
- (void)setNotifierActive:(bool)arg1;
- (bool)startNotifier;
- (long long)status;
- (void)stopNotifier;

@end
