/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks> {
    FigNSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionManagementQueue;
    <FigCameraViewfinderRemoteObject> *_remoteViewfinder;
    FigStateMachine *_stateMachine;
    NSMapTable *_weakSessionTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cameraViewfinder;
+ (void)initialize;
+ (id)remoteObjectCallbacksInterface;

- (void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(id)arg1;
- (void)_handleServerDeathWithOptions:(id)arg1 reconnect:(bool)arg2;
- (void)_setupStateMachine;
- (void)_teardownXPCConnectionAndRemoteViewfinder;
- (void)dealloc;
- (id)init;
- (void)startWithOptions:(id)arg1;
- (void)stop;
- (void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
- (void)viewfinderSessionDidEnd;
- (void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;

@end
