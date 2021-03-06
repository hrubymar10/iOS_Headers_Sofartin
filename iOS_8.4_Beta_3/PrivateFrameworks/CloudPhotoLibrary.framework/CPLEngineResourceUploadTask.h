/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {
    bool _backgroundTask;
    id _cancelHandler;
    CPLResource *_cloudResource;
    id _completionHandler;
    id _didStartHandler;
    id _launchHandler;
    id _progressHandler;
    <CPLEngineTransportTask> *_transportTask;
}

@property (getter=isBackgroundTask, nonatomic) bool backgroundTask;
@property (nonatomic, readonly) id cancelHandler;
@property (nonatomic, retain) CPLResource *cloudResource;
@property (nonatomic, readonly) id completionHandler;
@property (nonatomic, readonly) id didStartHandler;
@property (nonatomic, readonly) id launchHandler;
@property (nonatomic, readonly) id progressHandler;
@property (nonatomic, retain) <CPLEngineTransportTask> *transportTask;

- (void).cxx_destruct;
- (id)cancelHandler;
- (void)cancelTask;
- (id)cloudResource;
- (id)completionHandler;
- (id)didStartHandler;
- (id)initWithLaunchHandler:(id)arg1 cancelHandler:(id)arg2 didStartHandler:(id)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (bool)isBackgroundTask;
- (void)launch;
- (id)launchHandler;
- (id)progressHandler;
- (void)setBackgroundTask:(bool)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTransportTask:(id)arg1;
- (id)transportTask;

@end
