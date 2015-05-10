/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMovieBalloonView : CKImageBalloonView {
    AVPlayer *_avPlayer;
    AVPlayerItem *_avPlayerItem;
    AVPlayerLayer *_avPlayerLayer;
    CKMovieMediaObject *_mediaObject;
}

@property(setter=setAVPlayer:,assign,retain) AVPlayer * avPlayer;
@property(setter=setAVPlayerItem:,assign,retain) AVPlayerItem * avPlayerItem;
@property(setter=setAVPlayerLayer:,assign,retain) AVPlayerLayer * avPlayerLayer;
@property(assign,readwrite) <CKMovieBalloonViewDelegate> * delegate;
@property(assign,retain) CKMovieMediaObject * mediaObject;

- (id)avPlayer;
- (id)avPlayerItem;
- (id)avPlayerLayer;
- (void)cleanupPlayerIfNeeded;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)dealloc;
- (id)description;
- (void)layoutSubviews;
- (id)mediaObject;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAVPlayer:(id)arg1;
- (void)setAVPlayerItem:(id)arg1;
- (void)setAVPlayerLayer:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)videoDidReachEnd:(id)arg1;

@end
