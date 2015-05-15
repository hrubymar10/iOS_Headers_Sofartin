/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARApplicationWorkspace : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)defaultWorkspace;

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (void)_loadConnectionIfNeeded;
- (id)_workspaceServiceWithErrorHandler:(id)arg1;
- (id)connection;
- (void)getWorkspaceInfoWithCompletion:(id)arg1;
- (void)setConnection:(id)arg1;

@end
