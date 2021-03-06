/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSMetadataUtilities : NSObject

+ (id)_allAlbumsInPhotoLibrary:(id)arg1;
+ (id)_detailsForAlbum:(id)arg1;
+ (id)_detailsForAsset:(id)arg1 includingLocal:(bool)arg2 includingFingerprints:(bool)arg3;
+ (id)_nameForAdjustmentType:(int)arg1;
+ (void)_writeData:(id)arg1 toFile:(id)arg2;
+ (bool)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4;
+ (void)_writeJSONForAssets:(id)arg1 toFile:(id)arg2;
+ (id)allAlbumsDetailsWriteToPath:(id)arg1;
+ (id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(bool)arg2 includingFingerprints:(bool)arg3 forAlbumTitled:(id)arg4;

@end
