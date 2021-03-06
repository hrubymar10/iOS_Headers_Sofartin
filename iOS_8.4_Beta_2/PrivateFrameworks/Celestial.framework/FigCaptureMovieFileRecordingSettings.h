/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding> {
    NSDictionary *_audioSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieFragmentInterval;
    NSDictionary *_movieLevelMetadata;
    bool _sendThumbnailIOSurface;
    bool _videoMirrored;
    int _videoOrientation;
    NSDictionary *_videoSettings;
}

@property(assign,copy) NSDictionary * audioSettings;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property(assign,copy) NSDictionary * movieLevelMetadata;
@property(assign,readwrite) bool sendThumbnailIOSurface;
@property(assign,readwrite) bool videoMirrored;
@property(assign,readwrite) int videoOrientation;
@property(assign,copy) NSDictionary * videoSettings;

- (id)audioSettings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)movieLevelMetadata;
- (bool)sendThumbnailIOSurface;
- (void)setAudioSettings:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadata:(id)arg1;
- (void)setSendThumbnailIOSurface:(bool)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoSettings:(id)arg1;
- (bool)videoMirrored;
- (int)videoOrientation;
- (id)videoSettings;

@end
