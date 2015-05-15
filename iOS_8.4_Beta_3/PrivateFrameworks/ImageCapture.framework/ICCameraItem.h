/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItem : NSObject {
    void *_itemProperties;
}

@property (readonly) NSString *UTI;
@property (readonly) NSDate *creationDate;
@property (readonly) ICCameraDevice *device;
@property (readonly) NSString *fileSystemPath;
@property (readonly) bool hasMetadata;
@property (readonly) bool hasThumbnail;
@property (getter=isLocked) bool locked;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSDate *modificationDate;
@property (readonly) NSString *name;
@property (readonly) ICCameraFolder *parentFolder;
@property (readonly) struct CGImage { }*thumbnail;
@property (readonly) NSMutableDictionary *userData;

- (id)UTI;
- (void)appendToPath:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)fileSystemPath;
- (void)finalize;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (bool)hasMetadata;
- (bool)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (bool)isCameraFile;
- (bool)isLocked;
- (id)metadata;
- (id)modificationDate;
- (id)name;
- (id)parentFolder;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setCreationDate:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setUTI:(id)arg1;
- (struct CGImage { }*)thumbnail;
- (id)userData;
- (id)valueForUndefinedKey:(id)arg1;

@end
