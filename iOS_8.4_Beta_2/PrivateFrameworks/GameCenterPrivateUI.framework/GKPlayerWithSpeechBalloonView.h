/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKPlayerWithSpeechBalloonView : UIView {
    GKSpeechBalloonBackgroundView *_balloonView;
    UIView<GKPlayerPhotoContainer> *_photoView;
    NSArray *_replaceableConstraints;
    UITextView *_speechTextView;
}

@property(assign,retain) GKSpeechBalloonBackgroundView * balloonView;
@property(assign,readwrite) unsigned char drawStyle;
@property(assign,retain) UIView<GKPlayerPhotoContainer> * photoView;
@property(assign,retain) GKPlayer * player;
@property(assign,retain) NSArray * replaceableConstraints;
@property(assign,retain) NSString * speechText;
@property(assign,retain) UITextView * speechTextView;
@property(assign,readwrite) unsigned char tipDirection;

+ (id)instantiatePhotoContainer;
+ (bool)requiresConstraintBasedLayout;

- (void)_updateSpeechText:(id)arg1;
- (id)balloonView;
- (void)dealloc;
- (unsigned char)drawStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)metrics;
- (id)photoView;
- (id)player;
- (id)replaceableConstraints;
- (void)setBalloonView:(id)arg1;
- (void)setDrawStyle:(unsigned char)arg1;
- (void)setPhotoView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setReplaceableConstraints:(id)arg1;
- (void)setSpeechText:(id)arg1;
- (void)setSpeechTextView:(id)arg1;
- (void)setTipDirection:(unsigned char)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)speechText;
- (id)speechTextView;
- (unsigned char)tipDirection;
- (void)updateConstraints;

@end
