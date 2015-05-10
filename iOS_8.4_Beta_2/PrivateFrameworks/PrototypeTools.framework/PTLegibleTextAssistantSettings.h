/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTLegibleTextAssistantSettings : _UISettings {
    bool _drawingShadowDrawsText;
    UIColor *_foregroundColor;
    struct { 
        double meanRed; 
        double meanGreen; 
        double meanBlue; 
        double meanHue; 
        double meanSaturation; 
        double meanBrightness; 
        double meanAlpha; 
        double standardDeviationBrightness; 
        double standardDeviationSaturation; 
    } _imageStatistics;
    NSArray *_shadowAlphas;
    NSString *_shadowCompositingFilterName;
    NSArray *_shadowRadii;
}

@property(assign,readwrite) bool drawingShadowDrawsText;
@property(assign,retain) UIColor * foregroundColor;
@property(assign,readwrite) struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } imageStatistics;
@property(assign,copy) NSArray * shadowAlphas;
@property(assign,copy) NSString * shadowCompositingFilterName;
@property(assign,copy) NSArray * shadowRadii;

+ (id)settingsWithImageStatistics:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;

- (void).cxx_destruct;
- (id)calculateForegroundColorWithImageStatistics:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (bool)drawingShadowDrawsText;
- (id)foregroundColor;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })imageStatistics;
- (void)setDefaultValues;
- (void)setDrawingShadowDrawsText:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setImageStatistics:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1;
- (void)setShadowAlphas:(id)arg1;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setShadowRadii:(id)arg1;
- (id)shadowAlphas;
- (id)shadowCompositingFilterName;
- (id)shadowRadii;

@end
