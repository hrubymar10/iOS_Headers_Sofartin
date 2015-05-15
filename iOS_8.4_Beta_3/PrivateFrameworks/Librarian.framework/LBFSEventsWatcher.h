/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@interface LBFSEventsWatcher : NSObject {
    long long _disableCount;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_inodeMap;
    NSOperationQueue *_messageQueue;
    bool _started;
    struct __FSEventStream { } *_streamRef;
    id _updateHandler;
    NSURL *_url;
}

@property (nonatomic, copy) id updateHandler;
@property (readonly) NSURL *url;

- (void)dealloc;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)initWithDirectoryURL:(id)arg1;
- (id)messageForURL:(id)arg1 inode:(long long)arg2 exists:(bool)arg3 flags:(unsigned int)arg4;
- (void)processEventForPath:(id)arg1 flags:(unsigned int)arg2;
- (void)scanDirectory:(id)arg1 isGathering:(bool)arg2;
- (void)sendMessage:(id)arg1;
- (void)setUpdateHandler:(id)arg1;
- (void)start;
- (void)stop;
- (id)updateHandler;
- (id)url;

@end
