/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataMachineReadableCodeObject_FigRecorder : AVMetadataObject_FigRecorder {
    AVMetadataMachineReadableCodeObjectInternal_FigRecorder *_internal;
}

@property (readonly) NSArray *corners;
@property (readonly) NSString *stringValue;

+ (id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;

- (id)corners;
- (void)dealloc;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isVideoMirrored:(bool)arg3 rollAdjustment:(double)arg4;
- (id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2;
- (bool)isKindOfClass:(Class)arg1;
- (id)stringValue;

@end
