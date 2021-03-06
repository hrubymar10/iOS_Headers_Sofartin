/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchExposureLayer : BLRetouchEffectLayer {
    float *_cubeData;
    float _currentExposure;
    float _exposure;
}

@property(assign,readwrite) float exposure;

+ (id)layerWithExposure:(float)arg1;

- (id)cubeData;
- (void)dealloc;
- (float)exposure;
- (struct CGImage { }*)newImageFromContextWithEffect:(struct CGContext { }*)arg1;
- (void)setExposure:(float)arg1;

@end
