/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

@property(assign,readonly) <AVVideoCompositing> * customVideoCompositor;
@property(assign,copy) AVVideoComposition * videoComposition;
@property(assign,readonly) NSDictionary * videoSettings;
@property(assign,readonly) NSArray * videoTracks;

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;

- (id)_asset;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (bool)_prepareForReadingReturningError:(id*)arg1;
- (void)_setVideoComposition:(id)arg1;
- (void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2;
- (bool)alwaysCopiesSampleData;
- (id)customVideoCompositor;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)mediaType;
- (void)setVideoComposition:(id)arg1;
- (id)videoComposition;
- (id)videoSettings;
- (id)videoTracks;

@end
