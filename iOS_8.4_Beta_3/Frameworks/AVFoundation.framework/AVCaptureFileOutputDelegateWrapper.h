/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
    NSArray *_connections;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSArray *_metadata;
    NSURL *_outputFileURL;
    bool _paused;
    bool _recording;
    long long _settingsID;
}

@property (readonly) NSArray *connections;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (retain) NSArray *metadata;
@property (readonly) NSURL *outputFileURL;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isRecording, nonatomic) bool recording;
@property (readonly) long long settingsID;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;

- (id)connections;
- (void)dealloc;
- (id)delegateStorage;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;
- (bool)isPaused;
- (bool)isRecording;
- (id)metadata;
- (id)outputFileURL;
- (void)setMetadata:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRecording:(bool)arg1;
- (long long)settingsID;

@end
