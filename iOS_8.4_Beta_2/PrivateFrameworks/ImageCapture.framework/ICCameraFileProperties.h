/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFileProperties : NSObject {
    bool _burstFavorite;
    bool _burstPicked;
    NSString *_burstUUID;
    double _duration;
    bool _fetchingMetadata;
    int _fetchingMetadataLock;
    bool _fetchingThumbnail;
    int _fetchingThumbnailLock;
    long long _fileSize;
    bool _hasMetadata;
    bool _hasOverriddenOrientation;
    bool _hasThumbnail;
    bool _highFramerate;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    unsigned long long _orientation;
    struct CGImage { } *_originalThumbnail;
    bool _raw;
    NSMutableArray *_sidecarFiles;
    struct CGImage { } *_thumbnail;
    bool _timeLapse;
}

@property(assign,readwrite) bool burstFavorite;
@property(assign,readwrite) bool burstPicked;
@property(assign,retain) NSString * burstUUID;
@property(assign,readwrite) double duration;
@property(assign,readwrite) bool fetchingMetadata;
@property(assign,readwrite) bool fetchingThumbnail;
@property(assign,readwrite) long long fileSize;
@property(assign,readwrite) bool hasMetadata;
@property(assign,readwrite) bool hasOverriddenOrientation;
@property(assign,readwrite) bool hasThumbnail;
@property(assign,readwrite) bool highFramerate;
@property(assign,retain) NSMutableDictionary * metadata;
@property(assign,retain) NSMutableDictionary * metadata_hidden;
@property(assign,readwrite) unsigned long long orientation;
@property(assign,readwrite) struct CGImage { }* originalThumbnail;
@property(getter=isRaw,assign,readwrite) bool raw;
@property(assign,retain) NSMutableArray * sidecarFiles;
@property(assign,readwrite) struct CGImage { }* thumbnail;
@property(assign,readwrite) bool timeLapse;

- (bool)burstFavorite;
- (bool)burstPicked;
- (id)burstUUID;
- (void)dealloc;
- (double)duration;
- (bool)fetchingMetadata;
- (bool)fetchingThumbnail;
- (long long)fileSize;
- (void)finalize;
- (bool)hasMetadata;
- (bool)hasOverriddenOrientation;
- (bool)hasThumbnail;
- (bool)highFramerate;
- (bool)isRaw;
- (id)metadata;
- (id)metadata_hidden;
- (unsigned long long)orientation;
- (struct CGImage { }*)originalThumbnail;
- (void)setBurstFavorite:(bool)arg1;
- (void)setBurstPicked:(bool)arg1;
- (void)setBurstUUID:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFetchingMetadata:(bool)arg1;
- (void)setFetchingThumbnail:(bool)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasOverriddenOrientation:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setHighFramerate:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadata_hidden:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setOriginalThumbnail:(struct CGImage { }*)arg1;
- (void)setRaw:(bool)arg1;
- (void)setSidecarFiles:(id)arg1;
- (void)setThumbnail:(struct CGImage { }*)arg1;
- (void)setTimeLapse:(bool)arg1;
- (id)sidecarFiles;
- (struct CGImage { }*)thumbnail;
- (bool)timeLapse;

@end
