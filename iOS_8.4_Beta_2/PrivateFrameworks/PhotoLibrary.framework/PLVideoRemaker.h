/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLVideoRemaker : NSObject {
    PFVideoAVObjectBuilder *__videoAVObjectBuilder;
    id _delegate;
    double _duration;
    AVAssetExportSession *_exportSession;
    int _mode;
    float _percentComplete;
    id _progressHandler;
    NSTimer *_progressTimer;
    PLProgressView *_progressView;
    double _trimEndTime;
    double _trimStartTime;
    NSString *_trimmedPath;
}

@property(assign,retain) PFVideoAVObjectBuilder * _videoAVObjectBuilder;
@property(assign,copy) id progressHandler;

+ (long long)approximateByteSizeForMode:(int)arg1 duration:(double)arg2;
+ (long long)fileLengthLimitForRemakerMode:(int)arg1;
+ (int)getHDRemakerModeForMode:(int)arg1;
+ (int)getSDRemakerModeForMode:(int)arg1;
+ (double)maximumDurationForTrimMode:(int)arg1;

- (void)_didEndRemakingWithTemporaryPath:(id)arg1;
- (void)_exportCompletedWithSuccess:(bool)arg1;
- (id)_fileFormatForURL:(id)arg1;
- (void)_removeProgressTimer;
- (void)_resetProgressTimer;
- (void)_updateProgress;
- (id)_videoAVObjectBuilder;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithManagedAsset:(id)arg1 applyVideoAdjustments:(bool)arg2;
- (id)messageForRemakingProgress;
- (int)mode;
- (id)progressHandler;
- (id)progressView;
- (void)remake;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setProgressHandler:(id)arg1;
- (void)setTrimEndTime:(double)arg1;
- (void)setTrimStartTime:(double)arg1;
- (double)trimEndTime;
- (double)trimStartTime;

@end
