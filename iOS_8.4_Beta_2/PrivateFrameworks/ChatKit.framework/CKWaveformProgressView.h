/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKWaveformProgressView : CKBalloonImageView {
    BOOL _color;
    double _currentTime;
    IMManualUpdater *_displayUpdater;
    double _duration;
    bool _played;
    bool _playing;
    UIImage *_waveform;
}

@property(assign,readwrite) BOOL color;
@property(assign,readwrite) double currentTime;
@property(assign,retain) IMManualUpdater * displayUpdater;
@property(assign,readwrite) double duration;
@property(getter=isPlayed,assign,readwrite) bool played;
@property(getter=isPlaying,assign,readwrite) bool playing;
@property(assign,retain) UIImage * waveform;

- (BOOL)color;
- (double)currentTime;
- (void)dealloc;
- (id)displayUpdater;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlayed;
- (bool)isPlaying;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)setColor:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDisplayUpdater:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setNeedsPrepareForDisplay;
- (void)setPlayed:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setWaveform:(id)arg1;
- (id)waveform;

@end