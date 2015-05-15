/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMaskedVariableBlur : CIFilter {
    CIImage *inputImage;
    CIImage *inputMask;
    NSNumber *inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputMask;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputImage;
- (id)inputMask;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputMask:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
