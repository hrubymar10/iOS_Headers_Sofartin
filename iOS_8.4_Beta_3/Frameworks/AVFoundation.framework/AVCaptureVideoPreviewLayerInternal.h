/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    bool automaticallyAdjustsMirroring;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } captureDeviceTransform;
    int changeSeed;
    bool chromaNoiseReductionEnabled;
    AVCaptureConnection *connection;
    bool disableActions;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    NSString *gravity;
    bool isPaused;
    bool isPresentationLayer;
    bool mirrored;
    long long orientation;
    double previewRotationDegrees;
    struct CGSize { 
        double width; 
        double height; 
    } previewSize;
    double rollAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    AVCaptureSession *session;
    NSString *sinkID;
    CALayer *sublayer;
    bool visible;
    AVWeakReference *weakReference;
}

@end
