/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentManager : NSObject {
    NSOperationQueue *_artworkUpdateQueue;
    bool _coalescingUpdates;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    MPPlayableContentManagerContext *_context;
    <MPPlayableContentDataSource> *_dataSource;
    <MPPlayableContentDelegate> *_delegate;
    AVExternalDevice *_externalDevice;
    NSMutableSet *_mutatedContentItems;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(assign,retain) MPPlayableContentManagerContext * context;
@property(assign,readwrite) <MPPlayableContentDataSource> * dataSource;
@property(assign,readwrite) <MPPlayableContentDelegate> * delegate;

+ (id)sharedContentManager;

- (void).cxx_destruct;
- (bool)_areContentLimitsEnabled;
- (void)_browsableContentEndpointChanged:(id)arg1;
- (void)_contentItemChangedNotification:(id)arg1;
- (bool)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_enqueueArtworkUpdate:(id)arg1 forContentItem:(id)arg2 withCompletion:(id)arg3;
- (void)_handleBeginLoadingCompletedAtIndexPath:(id)arg1 withError:(id)arg2;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (id)_init;
- (void)_limitedUIChanged:(id)arg1;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (bool)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (void)_pushContentItemsUpdate;
- (void)_setupMediaRemoteEndpoint;
- (void)_setupNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_tearDownNotifications;
- (void)beginUpdates;
- (id)context;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)endUpdates;
- (id)init;
- (void)reloadData;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
