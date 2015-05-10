/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPhotoFiltersFilter : CIFilter {
    CIFilter *_ciMatrix;
    CIFilter *_ciPhotoEffectFilter;
    NSNumber *_inputAmount;
    CIImage *_inputImage;
    NSNumber *_inputStrength;
    int _lastAmount;
    float _lastStrength;
    CIFilter *_maskFilter;
    bool _needsReprocess;
}

@property(assign,retain) CIFilter * ciMatrix;
@property(assign,retain) CIFilter * ciPhotoEffectFilter;
@property(assign,copy) NSNumber * inputAmount;
@property(assign,retain) CIImage * inputImage;
@property(assign,copy) NSNumber * inputStrength;
@property(assign,retain) CIFilter * maskFilter;

- (void).cxx_destruct;
- (id)ciMatrix;
- (id)ciPhotoEffectFilter;
- (id)init;
- (id)inputAmount;
- (id)inputImage;
- (id)inputStrength;
- (id)maskFilter;
- (id)outputImage;
- (void)setCiMatrix:(id)arg1;
- (void)setCiPhotoEffectFilter:(id)arg1;
- (void)setDefaults;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setMaskFilter:(id)arg1;

@end