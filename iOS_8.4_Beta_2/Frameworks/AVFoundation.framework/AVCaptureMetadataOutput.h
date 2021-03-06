/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutput : AVCaptureOutput {
    AVCaptureMetadataOutputInternal *_internal;
}

@property(assign,readonly) NSArray * availableMetadataObjectTypes;
@property(assign,copy) NSArray * metadataObjectTypes;
@property(assign,readonly) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue;
@property(assign,readonly) <AVCaptureMetadataOutputObjectsDelegate> * metadataObjectsDelegate;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rectOfInterest;

+ (id)_metadataConstantValueToName:(id)arg1;
+ (id)alloc;
+ (void)initialize;

- (bool)_faceMetadataIsActive;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleRemoteQueueOperation:(struct FigRemoteOperation { int x1; int x2; unsigned long long x3; struct __CFString {} *x4; union { struct { struct __CFDictionary {} *x_1_2_1; struct __CFDictionary {} *x_1_2_2; } x_5_1_1; struct { void *x_2_2_1; struct __IOSurface {} *x_2_2_2; struct __IOSurface {} *x_2_2_3; } x_5_1_2; struct { struct opaqueCMSampleBuffer {} *x_3_2_1; unsigned long long x_3_2_2; } x_5_1_3; struct { struct opaqueCMFormatDescription {} *x_4_2_1; } x_5_1_4; struct { long long x_5_2_1; struct opaqueCMFormatDescription {} *x_5_2_2; } x_5_1_5; } x5; }*)arg1;
- (id)_metadataIdentifiers;
- (void)_updateRemoteQueue:(struct remoteQueueReceiverOpaque { }*)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableMetadataObjectTypes;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)init;
- (id)metadataObjectTypes;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
