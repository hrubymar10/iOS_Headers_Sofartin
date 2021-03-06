/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {
    NSDictionary *_alternateTracks;
    MPAlternateTextTrack *_currentTextTrack;
    bool _disableAlternateTextTrackRendering;
    MPAVItem *_item;
    AVPlayerItemLegibleOutput *_legibleOutput;
    NSArray *_outOfBandTextTracks;
    NSMutableDictionary *_trackChangeDictionary;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disableAlternateTextTrackRendering;
@property(assign,readonly) unsigned long long hash;
@property(getter=isLoaded,assign,readonly) bool loaded;
@property(assign,retain) NSArray * outOfBandTextTracks;
@property(assign,retain) MPAlternateTextTrack * selectedAlternateTextTrack;
@property(assign,readonly) Class superclass;

+ (id)subtitleLanguages;

- (void).cxx_destruct;
- (id)_currentTextTrackAccordingToAVF;
- (id)_keyForTrackType:(unsigned long long)arg1;
- (void)_suppressAVFSubtitleRendering;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(unsigned long long)arg1;
- (bool)disableAlternateTextTrackRendering;
- (void)enableLegibleOutputIfNecessary;
- (bool)hasTracksForTypes:(unsigned long long)arg1;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;
- (id)initWithItem:(id)arg1;
- (bool)isLoaded;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)outOfBandTextTracks;
- (void)reloadData;
- (void)reloadDataWithChangedCaptionDisplayType:(bool)arg1;
- (id)selectedAlternateTextTrack;
- (void)setDisableAlternateTextTrackRendering:(bool)arg1;
- (void)setOutOfBandTextTracks:(id)arg1;
- (void)setSelectedAlternateTextTrack:(id)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;
- (id)tracksForType:(unsigned long long)arg1;

@end
