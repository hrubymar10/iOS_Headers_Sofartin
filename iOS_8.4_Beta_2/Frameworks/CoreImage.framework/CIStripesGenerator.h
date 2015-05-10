/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIStripesGenerator : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputSharpness;
    NSNumber *inputWidth;
}

@property(assign,retain) CIVector * inputCenter;
@property(assign,retain) CIColor * inputColor0;
@property(assign,retain) CIColor * inputColor1;
@property(assign,retain) NSNumber * inputSharpness;
@property(assign,retain) NSNumber * inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputSharpness;
- (id)inputWidth;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
