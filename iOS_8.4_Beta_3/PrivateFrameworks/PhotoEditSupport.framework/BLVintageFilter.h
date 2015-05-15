/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLVintageFilter : CIFilter {
    CIFilter *_colorCubeFilter;
    NSNumber *_inputAmount;
    CIImage *_inputImage;
    NSNumber *_inputStrength;
    int _lastAmount;
    float _lastStrength;
    CIFilter *_maskFilter;
    bool _needsReprocess;
}

@property(assign,retain) CIFilter * colorCubeFilter;
@property(assign,copy) NSNumber * inputAmount;
@property(assign,retain) CIImage * inputImage;
@property(assign,copy) NSNumber * inputStrength;
@property(assign,retain) CIFilter * maskFilter;

- (void).cxx_destruct;
- (id)colorCubeFilter;
- (id)init;
- (id)inputAmount;
- (id)inputImage;
- (id)inputStrength;
- (id)maskFilter;
- (id)outputImage;
- (void)setColorCubeFilter:(id)arg1;
- (void)setDefaults;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setMaskFilter:(id)arg1;

@end
