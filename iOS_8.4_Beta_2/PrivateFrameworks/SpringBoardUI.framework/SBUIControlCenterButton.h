/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIControlCenterButton : SBFButton <SBUIControlCenterControl, _UISettingsKeyObserver> {
    UIVisualEffectView *_backgroundEffectView;
    UIImageView *_backgroundImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _bgCapInsets;
    <SBUIControlCenterButtonDelegate> *_delegate;
    UIVisualEffect *_disabledStateEffect;
    UIImageView *_glyphImageView;
    UIVisualEffect *_highlightedStateEffect;
    bool _isCircleButton;
    bool _isRectButton;
    double _naturalHeight;
    UIImage *_normalBGImage;
    UIVisualEffect *_normalStateEffect;
    UIImage *_sourceGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    bool _useSmallButton;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SBUIControlCenterButtonDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isCircleButton;
@property(assign,readwrite) bool isRectButton;
@property(assign,readwrite) double naturalHeight;
@property(assign,retain) UIImage * normalBGImage;
@property(assign,retain) UIImage * sourceGlyphImage;
@property(assign,retain) UIImage * sourceSelectedGlyphImage;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool useSmallButton;

+ (id)_buttonWithBGImage:(id)arg1 glyphImage:(id)arg2 naturalHeight:(double)arg3;
+ (id)_circleBackgroundImage;
+ (id)_circleBackgroundImageForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)_roundRectBackgroundImage;
+ (id)_smallCircleBackgroundImage;
+ (id)circularButton;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (id)roundRectButton;

- (id)_backgroundImageWithGlyphImage:(id)arg1 state:(long long)arg2;
- (long long)_currentState;
- (bool)_drawingAsSelected;
- (id)_glyphImageForState:(long long)arg1;
- (void)_pressAction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForGlyph:(id)arg1 centeredInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setBackgroundImage:(id)arg1 naturalHeight:(double)arg2;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBackgroundForStateChange;
- (void)_updateEffects;
- (void)_updateForStateChange;
- (void)_updateGlyphForStateChange;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4;
- (bool)isCircleButton;
- (bool)isRectButton;
- (double)naturalHeight;
- (id)normalBGImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setIsCircleButton:(bool)arg1;
- (void)setIsRectButton:(bool)arg1;
- (void)setNaturalHeight:(double)arg1;
- (void)setNormalBGImage:(id)arg1;
- (void)setSourceGlyphImage:(id)arg1;
- (void)setSourceSelectedGlyphImage:(id)arg1;
- (void)setUseSmallButton:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceGlyphImage;
- (id)sourceSelectedGlyphImage;
- (bool)useSmallButton;

@end
