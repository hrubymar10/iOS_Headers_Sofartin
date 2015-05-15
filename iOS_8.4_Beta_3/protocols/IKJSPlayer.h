/* Generated by RuntimeBrowser.
 */

@protocol IKJSPlayer <JSExport>

@required

- (IKJSMediaItem *)currentMediaItem;
- (bool)ended;
- (id)init;
- (void)pause;
- (bool)paused;
- (void)play;
- (bool)playing;
- (IKJSPlaylist *)playlist;
- (bool)seeking;
- (void)setCurrentTime:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaylist:(IKJSPlaylist *)arg1;
- (void)stop;

@end
