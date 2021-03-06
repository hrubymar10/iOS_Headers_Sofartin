/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISmartToneFilter : CIFilter {
    CIContext *_cubeContext;
    CIImage *_cubeImage;
    NSNumber *inputBlack;
    NSNumber *inputBrightness;
    NSNumber *inputContrast;
    NSNumber *inputExposure;
    NSNumber *inputHighlights;
    CIImage *inputImage;
    NSNumber *inputShadows;
    NSNumber *inputUseCube;
}

@property(assign,retain) NSNumber * inputBlack;
@property(assign,retain) NSNumber * inputBrightness;
@property(assign,retain) NSNumber * inputContrast;
@property(assign,retain) NSNumber * inputExposure;
@property(assign,retain) NSNumber * inputHighlights;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputShadows;
@property(assign,retain) NSNumber * inputUseCube;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelC;
- (id)_kernelH;
- (void)dealloc;
- (id)inputBlack;
- (id)inputBrightness;
- (id)inputContrast;
- (id)inputExposure;
- (id)inputHighlights;
- (id)inputImage;
- (id)inputShadows;
- (id)inputUseCube;
- (id)outputImage;
- (void)setInputBlack:(id)arg1;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputExposure:(id)arg1;
- (void)setInputHighlights:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputShadows:(id)arg1;
- (void)setInputUseCube:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
