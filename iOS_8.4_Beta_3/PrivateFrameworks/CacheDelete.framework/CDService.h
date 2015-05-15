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

@property (nonatomic, retain) NSString *ID;
@property (nonatomic, retain) NSSet *desiredNotifications;
@property bool doesPeriodic;
@property bool doesPurge;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, retain) NSXPCConnection *xpcConn;

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
