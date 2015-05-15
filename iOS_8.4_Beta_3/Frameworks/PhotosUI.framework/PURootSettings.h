/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURootSettings : PUSettings {
    PUFeedSettings *_feedSettings;
    long long _imagePickerTestSourceType;
    PUMomentsSettings *_momentsSettings;
    PUPhotoEditProtoSettings *_photoEditingSettings;
    PUPhotosGridSettings *_photosGridSettings;
    unsigned long long _settingsVersion;
    PUSizeSettings *_sizeSettings;
}

@property (nonatomic, retain) PUFeedSettings *feedSettings;
@property (nonatomic) long long imagePickerTestSourceType;
@property (nonatomic, retain) PUMomentsSettings *momentsSettings;
@property (nonatomic, retain) PUPhotoEditProtoSettings *photoEditingSettings;
@property (nonatomic, retain) PUPhotosGridSettings *photosGridSettings;
@property (nonatomic) unsigned long long settingsVersion;
@property (nonatomic, retain) PUSizeSettings *sizeSettings;

+ (void)_addRandomPhoto;
+ (id)_currentViewControllerStack;
+ (id)_debugRowsForViewControllerStack:(id)arg1;
+ (void)_deleteAllDiagnosticFiles;
+ (void)_setDebugRows:(id)arg1;
+ (void)presentSettingsController;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_save;
- (id)feedSettings;
- (long long)imagePickerTestSourceType;
- (id)momentsSettings;
- (id)photoEditingSettings;
- (id)photosGridSettings;
- (void)setDefaultValues;
- (void)setFeedSettings:(id)arg1;
- (void)setImagePickerTestSourceType:(long long)arg1;
- (void)setMomentsSettings:(id)arg1;
- (void)setPhotoEditingSettings:(id)arg1;
- (void)setPhotosGridSettings:(id)arg1;
- (void)setSettingsVersion:(unsigned long long)arg1;
- (void)setSizeSettings:(id)arg1;
- (unsigned long long)settingsVersion;
- (id)sizeSettings;

@end
