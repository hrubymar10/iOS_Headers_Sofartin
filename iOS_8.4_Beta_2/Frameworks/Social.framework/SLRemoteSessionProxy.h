/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRemoteSessionProxy : NSObject {
    NSXPCConnection *_connection;
    id _connectionResetBlock;
    NSXPCInterface *_exportedInterface;
    NSObject *_exportedObject;
    NSMutableArray *_guaranteedRemoteCalls;
    NSLock *_guaranteedRemoteCallsLock;
    NSXPCInterface *_remoteInterface;
    id _remoteProxy;
    NSString *_serviceName;
}

@property(assign,copy) id connectionResetBlock;
@property(assign,retain) NSXPCInterface * exportedInterface;
@property(assign,readwrite) NSObject * exportedObject;

- (void).cxx_destruct;
- (void)_remoteSessionConnectionWasInterrupted;
- (void)_setupConnection;
- (id)connectionResetBlock;
- (void)dealloc;
- (void)disconnect;
- (void)dropGuaraneteedRemoteCall:(id)arg1;
- (id)exportedInterface;
- (id)exportedObject;
- (void)forwardInvocation:(id)arg1;
- (id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerGuaranteedRemoteCall:(id)arg1;
- (void)setConnectionResetBlock:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end
