/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMipmapBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputLevel;
}

@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputLevel;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputImage;
- (id)inputLevel;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputLevel:(id)arg1;

@end
