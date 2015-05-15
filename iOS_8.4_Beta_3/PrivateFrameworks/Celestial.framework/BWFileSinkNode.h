/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFileSinkNode : BWSinkNode {
    <BWNodeFileWriterStatusDelegate> *_recordingStatusDelegate;
}

@property(assign,readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastFileDuration;
@property(assign,readonly) unsigned long long lastFileSize;
@property(assign,readwrite) <BWNodeFileWriterStatusDelegate> * recordingStatusDelegate;

- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFileDuration;
- (unsigned long long)lastFileSize;
- (id)recordingStatusDelegate;
- (void)setRecordingStatusDelegate:(id)arg1;

@end
