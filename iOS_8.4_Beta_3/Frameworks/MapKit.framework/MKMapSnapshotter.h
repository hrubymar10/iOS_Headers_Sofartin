/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotter : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id _completionHandler;
    int _loadingFlag;
    bool _needsResume;
    MKMapSnapshotOptions *_options;
    VKMapSnapshotCreator *_snapshotCreator;
}

@property(getter=isLoading,assign,readonly) bool loading;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_cleanupSnapshotCreator;
- (void)_enterBackground:(id)arg1;
- (void)_exitBackground:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_performSnapshot;
- (void)_succeedWithSnapshot:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (bool)isLoading;
- (void)startWithCompletionHandler:(id)arg1;
- (void)startWithQueue:(id)arg1 completionHandler:(id)arg2;

@end