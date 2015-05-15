/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFileWatcher : NSObject {
    <CPLFileWatcherDelegate> *_delegate;
    NSURL *_fileURL;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,readwrite) <CPLFileWatcherDelegate> * delegate;
@property(assign,copy) NSURL * fileURL;

- (void).cxx_destruct;
- (void)_startWatchingNode;
- (void)_startWatchingParent;
- (void)_stopWatchingNode;
- (void)_stopWatchingParent;
- (id)delegate;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)startWatching;
- (void)stopWatching;

@end