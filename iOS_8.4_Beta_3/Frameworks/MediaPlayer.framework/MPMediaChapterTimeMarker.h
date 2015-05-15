/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaChapterTimeMarker : MPTimeMarker {
    unsigned long long _chapterIndex;
    NSArray *_chapters;
    bool _hasArtworkAtPlaybackTime;
}

@property (nonatomic) unsigned long long chapterIndex;
@property (nonatomic, retain) NSArray *chapters;
@property (nonatomic) bool hasArtworkAtPlaybackTime;

- (void).cxx_destruct;
- (unsigned long long)chapterIndex;
- (id)chapters;
- (bool)hasArtworkAtPlaybackTime;
- (void)setChapterIndex:(unsigned long long)arg1;
- (void)setChapters:(id)arg1;
- (void)setHasArtworkAtPlaybackTime:(bool)arg1;

@end
