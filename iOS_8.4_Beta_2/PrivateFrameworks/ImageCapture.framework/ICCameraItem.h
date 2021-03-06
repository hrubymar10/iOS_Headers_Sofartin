/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItem : NSObject {
    void *_itemProperties;
}

@property(assign,readonly) NSString * UTI;
@property(assign,readonly) NSDate * creationDate;
@property(assign,readonly) ICCameraDevice * device;
@property(assign,readonly) NSString * fileSystemPath;
@property(assign,readonly) bool hasMetadata;
@property(assign,readonly) bool hasThumbnail;
@property(getter=isLocked,assign,readwrite) bool locked;
@property(assign,readonly) NSDictionary * metadata;
@property(assign,readonly) NSDate * modificationDate;
@property(assign,readonly) NSString * name;
@property(assign,readonly) ICCameraFolder * parentFolder;
@property(assign,readonly) struct CGImage { }* thumbnail;
@property(assign,readonly) NSMutableDictionary * userData;

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
