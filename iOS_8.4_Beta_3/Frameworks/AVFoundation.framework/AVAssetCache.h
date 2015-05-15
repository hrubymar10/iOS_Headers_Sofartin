/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetCache : NSObject {
    AVAssetCacheInternal *_priv;
}

@property(assign,copy) NSURL * URL;
@property(assign,readonly) long long currentSize;
@property(assign,readwrite) long long maxEntrySize;
@property(assign,readwrite) long long maxSize;

+ (id)assetCacheWithURL:(id)arg1;

- (id)URL;
- (id)allKeys;
- (long long)currentSize;
- (void)dealloc;
- (void)finalize;
- (id)initWithURL:(id)arg1;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (long long)maxEntrySize;
- (long long)maxSize;
- (void)removeEntryForKey:(id)arg1;
- (void)setMaxEntrySize:(long long)arg1;
- (void)setMaxSize:(long long)arg1;
- (long long)sizeOfEntryForKey:(id)arg1;

@end
