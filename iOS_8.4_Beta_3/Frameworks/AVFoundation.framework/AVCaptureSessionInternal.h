/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSessionInternal : NSObject {
    AVCaptureDevice *adjustingDeviceActiveFormat;
    bool adjustingVideoDeviceHDREnabled;
    bool automaticallyConfiguresApplicationAudioSession;
    int beginConfigRefCount;
    NSMutableArray *committedAVCaptureSessionConfigurations;
    NSMutableArray *connections;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    bool figCaptureSessionRunning;
    NSMutableArray *inputs;
    bool interrupted;
    AVCaptureSessionConfiguration *liveAVCaptureSessionConfiguration;
    struct OpaqueCMClock { } *masterClock;
    bool notifiesOnMainThread;
    NSMutableArray *outputs;
    AVRunLoopCondition *runLoopCondition;
    bool running;
    FigCaptureSessionConfiguration *sessionConfig;
    NSString *sessionPreset;
    bool sessionPresetChanging;
    NSError *stopError;
    bool usesApplicationAudioSession;
    NSHashTable *videoPreviewLayers;
    bool waitingForFigCaptureSessionConfigurationToBecomeLive;
    bool waitingForFigCaptureSessionToStart;
    bool waitingForFigCaptureSessionToStop;
    bool waitingForFigCaptureSessionToStopDueToEmptyConfig;
    AVWeakReference *weakReference;
}

@end
