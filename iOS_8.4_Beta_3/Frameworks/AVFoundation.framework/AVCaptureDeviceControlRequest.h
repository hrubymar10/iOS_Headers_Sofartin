/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceControlRequest : NSObject {
    id _completionBlock;
    int _errorCode;
    int _requestID;
}

@property (nonatomic, readonly, copy) id completionBlock;
@property (nonatomic) int errorCode;
@property (nonatomic, readonly) int requestID;

+ (id)deviceControlRequestWithCompletionBlock:(id)arg1;

- (id)_initWithCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)dealloc;
- (int)errorCode;
- (int)requestID;
- (void)setErrorCode:(int)arg1;

@end
