/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureOutputInternal_FigRecorder : NSObject {
    int changeSeed;
    NSMutableArray *connections;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } metadataTransform;
    bool physicallyMirrorsVideo;
    double rollAdjustment;
    AVCaptureSession_FigRecorder *session;
}

- (void)dealloc;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;

@end
