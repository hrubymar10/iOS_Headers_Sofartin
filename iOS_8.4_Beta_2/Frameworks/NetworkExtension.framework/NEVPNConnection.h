/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNConnection : NSObject {
    void *_session;
    long long _status;
}

@property(assign,readwrite) void* session;
@property(assign,readonly) long long status;

- (void)dealloc;
- (void)destroySession;
- (id)init;
- (void)newSessionWithConfigID:(id)arg1 withCompletionHandler:(id)arg2;
- (void*)session;
- (void)setSession:(void*)arg1;
- (bool)startVPNTunnelAndReturnError:(id*)arg1;
- (long long)status;
- (void)stopVPNTunnel;

@end
