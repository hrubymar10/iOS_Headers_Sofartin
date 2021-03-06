/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    bool _backgroundTask;
    id _cancelHandler;
    bool _cancelledByEngine;
    NSString *_clientBundleID;
    CPLResource *_cloudResource;
    id _completionHandler;
    id _didStartHandler;
    id _launchHandler;
    id _progressHandler;
    unsigned long long _taskIdentifierForQueue;
    bool _transportOwnsTask;
    <CPLEngineTransportTask> *_transportTask;
    bool _wantsTransportTask;
}

@property(getter=isBackgroundTask,assign,readwrite) bool backgroundTask;
@property(assign,readonly) id cancelHandler;
@property(getter=isCancelledByEngine,assign,readwrite) bool cancelledByEngine;
@property(assign,retain) NSString * clientBundleID;
@property(assign,retain) CPLResource * cloudResource;
@property(assign,readonly) id completionHandler;
@property(assign,readonly) id didStartHandler;
@property(assign,readonly) id launchHandler;
@property(assign,readonly) id progressHandler;
@property(assign,readwrite) unsigned long long taskIdentifierForQueue;
@property(assign,readwrite) bool transportOwnsTask;
@property(assign,retain) <CPLEngineTransportTask> * transportTask;
@property(assign,readwrite) bool wantsTransportTask;

- (void).cxx_destruct;
- (id)cancelHandler;
- (void)cancelTask;
- (id)clientBundleID;
- (id)cloudResource;
- (id)completionHandler;
- (id)didStartHandler;
- (id)initWithLaunchHandler:(id)arg1 cancelHandler:(id)arg2 didStartHandler:(id)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (bool)isBackgroundTask;
- (bool)isCancelledByEngine;
- (void)launch;
- (id)launchHandler;
- (id)progressHandler;
- (void)setBackgroundTask:(bool)arg1;
- (void)setCancelledByEngine:(bool)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTaskIdentifierForQueue:(unsigned long long)arg1;
- (void)setTransportOwnsTask:(bool)arg1;
- (void)setTransportTask:(id)arg1;
- (void)setWantsTransportTask:(bool)arg1;
- (unsigned long long)taskIdentifierForQueue;
- (bool)transportOwnsTask;
- (id)transportTask;
- (bool)wantsTransportTask;

@end
