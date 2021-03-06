/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CDService : NSObject {
    NSString *_ID;
    NSSet *_desiredNotifications;
    bool _doesPeriodic;
    bool _doesPurge;
    NSXPCListenerEndpoint *_endpoint;
    NSXPCConnection *_xpcConn;
}

@property(assign,retain) NSString * ID;
@property(assign,retain) NSSet * desiredNotifications;
@property(assign,readwrite) bool doesPeriodic;
@property(assign,readwrite) bool doesPurge;
@property(assign,retain) NSXPCListenerEndpoint * endpoint;
@property(assign,retain) NSXPCConnection * xpcConn;

- (void).cxx_destruct;
- (id)ID;
- (id)desiredNotifications;
- (bool)doesPeriodic;
- (bool)doesPurge;
- (id)endpoint;
- (void)setDesiredNotifications:(id)arg1;
- (void)setDoesPeriodic:(bool)arg1;
- (void)setDoesPurge:(bool)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setID:(id)arg1;
- (void)setXpcConn:(id)arg1;
- (id)xpcConn;

@end
