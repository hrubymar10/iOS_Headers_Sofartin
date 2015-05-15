/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal *_internal;
}

@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;

+ (id)alloc;
+ (bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (long long)nextMovieFileSettingsID;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;
+ (bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2;
- (void)_removeRecordingDelegateWrapper:(id)arg1;
- (void)_startRecording:(id)arg1;
- (int)_stopRecording;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(bool)arg3 addMetadata:(bool)arg4;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (bool)isRecording;
- (bool)isRecordingPaused;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)outputFileURL;
- (id)outputSettingsForConnection:(id)arg1;
- (void)pauseRecording;
- (void)resumeRecording;
- (bool)sendsLastVideoPreviewFrame;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSendsLastVideoPreviewFrame:(bool)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;

@end
