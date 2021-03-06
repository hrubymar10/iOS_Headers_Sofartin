/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    long long _captureDevice;
    <CAMStillImageCaptureRequestDelegate> *_delegate;
    long long _deviceOrientation;
    long long _flashMode;
    int _hdrMode;
    bool _transient;
    bool _usesStillImageStabilization;
    bool _wantsAudioForCapture;
}

@property(assign,readonly) long long captureDevice;
@property(assign,readonly) <CAMStillImageCaptureRequestDelegate> * delegate;
@property(assign,readonly) long long deviceOrientation;
@property(assign,readonly) long long flashMode;
@property(assign,readonly) int hdrMode;
@property(getter=isTransient,assign,readonly) bool transient;
@property(assign,readonly) bool usesStillImageStabilization;
@property(assign,readonly) bool wantsAudioForCapture;

- (void).cxx_destruct;
- (long long)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (long long)deviceOrientation;
- (long long)flashMode;
- (int)hdrMode;
- (id)init;
- (bool)isTransient;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)usesStillImageStabilization;
- (bool)wantsAudioForCapture;

@end
