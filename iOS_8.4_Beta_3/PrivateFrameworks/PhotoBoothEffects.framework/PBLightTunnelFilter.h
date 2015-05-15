/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBLightTunnelFilter : PBFilter {
    float _inputAmount;
    bool firstTime;
    struct CGPoint { 
        double x; 
        double y; 
    } inputPoint;
    float inputRotation;
    float lastInputRadius;
    float lastInputRotation;
    float lastInputX;
    float lastInputY;
}

@property(assign,readwrite) float inputAmount;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } inputPoint;
@property(assign,readwrite) float inputRotation;

- (void)applyParametersToCIFilter:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)ciFilterName;
- (float)inputAmount;
- (struct CGPoint { double x1; double x2; })inputPoint;
- (float)inputRotation;
- (bool)needsWrapMirror;
- (void)setDefaults;
- (void)setInputAmount:(float)arg1;
- (void)setInputPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputRotation:(float)arg1;

@end
