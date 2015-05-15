/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditValuesCalculator : NSObject {
    CIImage *_baseImage;
    NSObject<OS_dispatch_queue> *_computationQueue;
    NSObject<OS_dispatch_group> *_computingValuesGroup;
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_initialImageValues;
    PLPhotoEditModel *_photoEditModel;
    PLPhotoEditModel *_photoEditModelForCurrentValues;
}

@property (nonatomic, retain) CIImage *baseImage;
@property (nonatomic, retain) PLPhotoEditModel *photoEditModel;

- (void).cxx_destruct;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (bool)_imageCurrentValuesCacheIsValid;
- (id)baseImage;
- (void)computeAutoEnhanceWithCompletionHandler:(id)arg1;
- (id)init;
- (id)photoEditModel;
- (void)precomputeImageValues;
- (void)setBaseImage:(id)arg1;
- (void)setPhotoEditModel:(id)arg1;
- (id)smartBlackAndWhiteStatisticsWithAccuracy:(long long)arg1;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;

@end
