/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDConnectionManager : NSObject {
    bool _connected;
    bool _hostActive;
    APDReachability *_hostReachability;
    bool _internetActive;
    APDReachability *_internetReachability;
    bool _reachabilityInitialized;
}

@property(getter=connected,assign,readwrite) bool connected;
@property(assign,readwrite) bool internetActive;
@property(assign,readwrite) bool reachabilityInitialized;

- (void).cxx_destruct;
- (bool)connected;
- (void)dealloc;
- (id)init;
- (bool)internetActive;
- (void)onReachabilityChanged:(id)arg1;
- (bool)reachabilityInitialized;
- (void)setConnected:(bool)arg1;
- (void)setInternetActive:(bool)arg1;
- (void)setReachabilityInitialized:(bool)arg1;

@end
