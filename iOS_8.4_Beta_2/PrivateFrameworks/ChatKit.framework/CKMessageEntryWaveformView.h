/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryWaveformView : UIView {
    UIImageView *_balloonImageView;
    double _duration;
    unsigned long long _maxPowerLevelsCount;
    NSMutableArray *_powerLevels;
    UILabel *_timeLabel;
    UIImageView *_waveformImageView;
}

@property(assign,retain) UIImageView * balloonImageView;
@property(assign,readwrite) double duration;
@property(assign,readwrite) unsigned long long maxPowerLevelsCount;
@property(assign,retain) NSMutableArray * powerLevels;
@property(assign,retain) UILabel * timeLabel;
@property(assign,retain) UIImageView * waveformImageView;

+ (id)waveformCurveTransform;

- (void)appendPowerLevel:(double)arg1;
- (id)balloonImageView;
- (void)clearPowerLevels;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)maxPowerLevelsCount;
- (id)powerLevels;
- (void)setBalloonImageView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setMaxPowerLevelsCount:(unsigned long long)arg1;
- (void)setPowerLevels:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeLabel;
- (void)updateWaveform;
- (id)waveformImageView;

@end