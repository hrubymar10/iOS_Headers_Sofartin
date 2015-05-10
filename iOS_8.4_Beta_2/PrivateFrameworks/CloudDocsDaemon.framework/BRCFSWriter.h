/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSWriter : NSObject <BRCFileCoordinationWriting, BRCModule> {
    bool _isCancelled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BRCAccountSession *_session;
    int _suspendCount;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isCancelled;
@property(assign,readonly) NSObject<OS_dispatch_queue> * serialQueue;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4;
- (void)cancel;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (void)resume;
- (id)serialQueue;
- (void)setIsCancelled:(bool)arg1;
- (void)suspend;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;

@end
