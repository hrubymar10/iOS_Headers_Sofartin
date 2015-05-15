/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent {
    int _blendMode;
    CUIColor *_color;
    double _opacity;
}

@property int blendMode;
@property (retain) CUIColor *color;
@property double opacity;

- (int)blendMode;
- (id)color;
- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (double)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setColor:(id)arg1;
- (void)setOpacity:(double)arg1;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
