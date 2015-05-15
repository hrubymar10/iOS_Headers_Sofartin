/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCapturePrepareBracketRequest : NSObject {
    id _completionBlock;
    FigCaptureStillImageSettings *_settings;
}

@property(assign,readonly) id completionBlock;
@property(assign,readonly) FigCaptureStillImageSettings * settings;

+ (id)prepareBracketRequestWithCompletionBlock:(id)arg1 settings:(id)arg2;

- (id)_initWithCompletionBlock:(id)arg1 settings:(id)arg2;
- (id)completionBlock;
- (void)dealloc;
- (id)settings;

@end