/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILinearBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}

@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (bool)_isIdentity;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end