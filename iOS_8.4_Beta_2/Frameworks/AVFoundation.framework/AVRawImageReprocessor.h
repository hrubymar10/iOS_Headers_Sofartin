/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRawImageReprocessor : NSObject {
    AVRawImageReprocessorInternal *_internal;
}

+ (void)initialize;

- (void)dealloc;
- (void)handlePhotoReady:(id)arg1;
- (id)init;
- (void)reprocessRawImageSurface:(struct __IOSurface { }*)arg1 andMetadata:(id)arg2 withOutputSettings:(id)arg3 completionHandler:(id)arg4;

@end