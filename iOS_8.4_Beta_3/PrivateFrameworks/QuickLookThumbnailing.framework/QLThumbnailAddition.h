/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailAddition : NSObject {
    GSAddition *_addition;
    NSURL *_additionURL;
    long long _additionURLSandboxToken;
    NSDictionary *_metadata;
    NSDictionary *_thumbnailDataDictionary;
}

@property (retain) NSURL *additionURL;
@property (retain) NSDictionary *metadata;
@property (retain) NSDictionary *thumbnailDataDictionary;

+ (id)_additionCreationInfo;
+ (bool)_hitAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (bool)_hitAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (bool)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2;
+ (bool)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (bool)_removedAdditionsOnURL:(id)arg1;
+ (bool)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (bool)associateImage:(struct CGImage { }*)arg1 metadata:(id)arg2 withURL:(id)arg3 error:(id*)arg4;
+ (bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4;
+ (bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(bool)arg3 atURL:(id)arg4 error:(id*)arg5;
+ (bool)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id*)arg3;
+ (bool)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(bool)arg2 atURL:(id)arg3 error:(id*)arg4;
+ (bool)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (Class)imageClassWithError:(id*)arg1;
+ (bool)imageContainsAlpha:(struct CGImage { }*)arg1;
+ (bool)imageContainsAlphaForOtherImages:(struct CGImage { }*)arg1;
+ (id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource { }*)arg1;
+ (bool)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4;
+ (bool)removeAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (bool)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3;
+ (bool)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2;

- (bool)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2;
- (bool)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
- (bool)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2;
- (id)additionURL;
- (void*)cacheVersion;
- (void)dealloc;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2;
- (id)metadata;
- (void)setAdditionURL:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setThumbnailDataDictionary:(id)arg1;
- (id)thumbnailDataDictionary;
- (id)thumbnailDataForKey:(id)arg1;
- (id)thumbnailURLForKey:(id)arg1;
- (struct CGImage { }*)thumbnailWithMaximumDimension:(double)arg1 properties:(id*)arg2 flavor:(int*)arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)thumbnailsDictionaryWithError:(id*)arg1;

@end
