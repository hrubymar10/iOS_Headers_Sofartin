/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {
    NSString *_authenticationToken;
    PKContent *_content;
    PKDataAccessor *_dataAccessor;
    PKDisplayProfile *_displayProfile;
    PKImageSet *_imageSets;
    NSData *_manifestHash;
    double _preferredImageScale;
    NSString *_preferredImageSuffix;
    long long _settings;
    long long _shareCount;
    NSString *_uniqueID;
    NSURL *_webServiceURL;
}

@property(assign,retain) NSData * archiveData;
@property(assign,copy) NSString * authenticationToken;
@property(assign,retain) PKContent * content;
@property(assign,retain) PKDataAccessor * dataAccessor;
@property(assign,retain) PKDisplayProfile * displayProfile;
@property(assign,copy) NSData * manifestHash;
@property(assign,retain) NSDate * modificationDate;
@property(assign,readwrite) double preferredImageScale;
@property(assign,retain) NSString * preferredImageSuffix;
@property(assign,readonly) bool remoteAssetsDownloaded;
@property(assign,retain) NSData * serializedFileWrapper;
@property(assign,readwrite) long long settings;
@property(assign,readwrite) long long shareCount;
@property(assign,copy) NSString * uniqueID;
@property(assign,copy) NSURL * webServiceURL;

+ (bool)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id)allImageSetsLoadedIfNecessary;
- (id)archiveData;
- (id)authenticationToken;
- (id)content;
- (id)contentLoadedIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAccessor;
- (void)dealloc;
- (id)displayProfile;
- (void)downloadRemoteAssetsWithCompletion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (void)flushLoadedContent;
- (void)flushLoadedImageSets;
- (id)imageSetLoadedIfNeeded:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (id)initWithDataAccessor:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (bool)isContentLoaded;
- (bool)isImageSetLoaded:(long long)arg1;
- (bool)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (void)loadContentAsyncWithCompletion:(id)arg1;
- (void)loadContentSync;
- (void)loadImageSetAsync:(long long)arg1 preheat:(bool)arg2 withCompletion:(id)arg3;
- (void)loadImageSetSync:(long long)arg1 preheat:(bool)arg2;
- (id)localizedString:(id)arg1;
- (id)manifestHash;
- (id)modificationDate;
- (void)noteShared;
- (double)preferredImageScale;
- (id)preferredImageSuffix;
- (void)reloadDisplayProfileOfType:(long long)arg1;
- (bool)remoteAssetsDownloaded;
- (void)requestUpdateWithCompletion:(id)arg1;
- (void)revocationStatusWithCompletion:(id)arg1;
- (id)serializedFileWrapper;
- (void)setAuthenticationToken:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDataAccessor:(id)arg1;
- (void)setDisplayProfile:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (void)setPreferredImageScale:(double)arg1;
- (void)setPreferredImageSuffix:(id)arg1;
- (void)setSettings:(long long)arg1;
- (void)setShareCount:(long long)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setWebServiceURL:(id)arg1;
- (long long)settings;
- (long long)shareCount;
- (id)uniqueID;
- (id)webServiceURL;

@end