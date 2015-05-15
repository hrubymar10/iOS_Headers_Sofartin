/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSSet *_exportingCompositionAVURLs;
    int _exportingCompositionAVURLsDistributedNotificationToken;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    <RCSSavedRecordingServiceProtocol> *_serviceProxy;
    NSXPCConnection *_xpcConnection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSSet * exportingCompositionAVURLs;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)_handleExportingCompositionAVURLsDidChange;
- (struct NSNumber { Class x1; }*)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(struct NSNumber { Class x1; }*)arg1;
- (void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(id)arg2 messagingBlock:(id)arg3;
- (void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(id)arg2 messagingBlock:(id)arg3;
- (void)closeServiceConnection;
- (void)dealloc;
- (oneway void)disableOrphanHandlingWithCompletionBlock:(id)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(id)arg2;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(id)arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)endAccessSessionWithToken:(id)arg1;
- (id)exportingCompositionAVURLs;
- (oneway void)fetchExportingCompositionAVURLs:(id)arg1;
- (id)init;
- (void)openServiceConnection;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(bool)arg2 accessRequestHandler:(id)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (id)serviceProxy;
- (void)setExportingCompositionAVURLs:(id)arg1;

@end