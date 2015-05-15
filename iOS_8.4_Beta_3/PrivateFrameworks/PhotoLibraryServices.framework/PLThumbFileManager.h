/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {
    int _entryLength;
    NSString *_filename;
    int _format;
    int _imageLength;
    int _imageRowBytes;
    NSString *_path;
    bool _readOnly;
    struct CGSize { 
        double width; 
        double height; 
    } _thumbnailSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int imageFormat;
@property (nonatomic, readonly) int imageHeight;
@property (nonatomic, readonly) int imageLength;
@property (nonatomic, readonly) int imageRowBytes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) int imageWidth;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

+ (bool)_deviceShouldUseLowPerformancePixelFormat;
+ (id)baseSessionOptions;
+ (struct __CFDictionary { }*)decodeSessionOptions;
+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;

- (id)_debugDescription;
- (void)_writeData:(id)arg1 forThumbIdentifier:(id)arg2;
- (void)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (bool)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (int)imageFormat;
- (int)imageHeight;
- (int)imageLength;
- (int)imageRowBytes;
- (struct CGSize { double x1; double x2; })imageSize;
- (int)imageWidth;
- (id)imageWithIdentifier:(id)arg1;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(bool)arg3;
- (bool)isReadOnly;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg2 options:(unsigned int)arg3;
- (id)path;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg3 options:(unsigned int)arg4;
- (void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (id)thumbnailForImage:(id)arg1 videoDuration:(id)arg2;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (bool)usesThumbIdentifiers;

@end
