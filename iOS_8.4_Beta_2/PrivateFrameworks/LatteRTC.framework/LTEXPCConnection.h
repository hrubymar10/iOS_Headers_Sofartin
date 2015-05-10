/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface LTEXPCConnection : NSObject {
    NSObject<OS_xpc_object> *connection;
    id context;
    int pid;
    NSData *tokenData;
}

@property(assign,readwrite) NSObject<OS_xpc_object> * connection;
@property(assign,retain) id context;
@property(assign,readwrite) int pid;
@property(assign,retain) NSData * tokenData;

- (id)connection;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)init;
- (int)pid;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
