/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBracketSettings : NSObject {
    NSDictionary *_bracketedCaptureOverrides;
    NSArray *_exposureValues;
    NSArray *_manualExposureBracketedCaptureParams;
    NSDictionary *_oisBracketedCaptureParams;
    bool _providePreBracketedEV0;
}

@property (nonatomic, copy) NSDictionary *bracketedCaptureOverrides;
@property (nonatomic, copy) NSArray *exposureValues;
@property (nonatomic, copy) NSArray *manualExposureBracketedCaptureParams;
@property (nonatomic, copy) NSDictionary *oisBracketedCaptureParams;
@property (nonatomic) bool providePreBracketedEV0;

+ (id)bracketSettings;

- (id)bracketedCaptureOverrides;
- (void)dealloc;
- (id)exposureValues;
- (id)manualExposureBracketedCaptureParams;
- (id)oisBracketedCaptureParams;
- (bool)providePreBracketedEV0;
- (void)setBracketedCaptureOverrides:(id)arg1;
- (void)setExposureValues:(id)arg1;
- (void)setManualExposureBracketedCaptureParams:(id)arg1;
- (void)setOisBracketedCaptureParams:(id)arg1;
- (void)setProvidePreBracketedEV0:(bool)arg1;

@end
