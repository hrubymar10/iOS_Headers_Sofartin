/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKImageSet : NSObject <NSSecureCoding> {
    NSURL *_originCacheURL;
    long long _version;
}

@property(assign,copy) NSURL * originCacheURL;
@property(assign,readwrite) long long version;

+ (id)_archiveURL:(id)arg1;
+ (id)_archivedImageSet:(id)arg1 forDisplayProfile:(id)arg2;
+ (Class)_classForDisplayProfileType:(long long)arg1;
+ (id)archiveName;
+ (bool)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2;
+ (Class)classForImageSetType:(long long)arg1;
+ (long long)currentVersion;
+ (id)imageSetForType:(long long)arg1 displayProfile:(id)arg2 fileURL:(id)arg3 cacheURL:(id)arg4;
+ (id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 fileURL:(id)arg5 cacheURL:(id)arg6;
+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)supportsSecureCoding;

- (bool)_isSetImage:(id)arg1 equalToImage:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (id)originCacheURL;
- (void)preheatImages;
- (void)saveCache:(id)arg1;
- (void)setOriginCacheURL:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
