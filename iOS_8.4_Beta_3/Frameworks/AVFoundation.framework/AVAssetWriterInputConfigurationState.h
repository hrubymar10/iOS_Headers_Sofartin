/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputConfigurationState : NSObject {
    short _alternateGroupID;
    bool _attachedToPixelBufferAdaptor;
    long long _chunkAlignment;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _chunkDuration;
    long long _chunkSize;
    bool _expectsMediaDataInRealTime;
    NSString *_extendedLanguageTag;
    NSString *_languageCode;
    long long _layer;
    bool _marksOutputTrackAsEnabled;
    int _mediaTimeScale;
    NSString *_mediaType;
    NSArray *_metadataItems;
    struct CGSize { 
        double width; 
        double height; 
    } _naturalSize;
    AVOutputSettings *_outputSettings;
    bool _performsMultiPassEncodingIfSupported;
    float _preferredVolume;
    NSURL *_sampleReferenceBaseURL;
    struct opaqueCMFormatDescription { } *_sourceFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    NSDictionary *_trackReferences;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _transform;
}

@property(assign,readwrite) short alternateGroupID;
@property(assign,readwrite) bool attachedToPixelBufferAdaptor;
@property(assign,readwrite) bool expectsMediaDataInRealTime;
@property(assign,copy) NSString * extendedLanguageTag;
@property(assign,copy) NSString * languageCode;
@property(assign,readwrite) long long layer;
@property(assign,readwrite) bool marksOutputTrackAsEnabled;
@property(assign,readwrite) int mediaTimeScale;
@property(assign,copy) NSString * mediaType;
@property(assign,copy) NSArray * metadataItems;
@property(assign,readwrite) struct CGSize { double x1; double x2; } naturalSize;
@property(assign,copy) AVOutputSettings * outputSettings;
@property(assign,readwrite) bool performsMultiPassEncodingIfSupported;
@property(assign,readwrite) long long preferredMediaChunkAlignment;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property(assign,readwrite) long long preferredMediaChunkSize;
@property(assign,readwrite) float preferredVolume;
@property(assign,copy) NSURL * sampleReferenceBaseURL;
@property(assign,retain) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(assign,copy) NSDictionary * sourcePixelBufferAttributes;
@property(assign,copy) NSDictionary * trackReferences;
@property(assign,readwrite) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (short)alternateGroupID;
- (bool)attachedToPixelBufferAdaptor;
- (void)dealloc;
- (bool)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)languageCode;
- (long long)layer;
- (bool)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadataItems;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)outputSettings;
- (bool)performsMultiPassEncodingIfSupported;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (float)preferredVolume;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setAttachedToPixelBufferAdaptor:(bool)arg1;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTrackReferences:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (id)trackReferences;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
