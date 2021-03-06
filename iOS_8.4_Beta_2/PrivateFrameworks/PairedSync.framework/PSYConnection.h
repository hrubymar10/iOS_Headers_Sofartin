/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYConnection : NSObject {
    NSXPCConnection *_connection;
    <PSYConnectionDelegate> *_delegate;
    PSYOptions *_options;
    bool _valid;
}

@property(assign,retain) NSXPCConnection * connection;
@property(assign,readwrite) <PSYConnectionDelegate> * delegate;
@property(assign,retain) PSYOptions * options;
@property(getter=isValid,assign,readonly) bool valid;

- (void).cxx_destruct;
- (void)_handleConnectionInterruption;
- (void)_handleConnectionInvalidation;
- (void)_resumeConnectionIfPossible;
- (id)connection;
- (id)delegate;
- (id)init;
- (bool)isValid;
- (id)options;
- (id)remoteConnection;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)startSync;
- (void)startSyncWithOptions:(id)arg1;

@end
