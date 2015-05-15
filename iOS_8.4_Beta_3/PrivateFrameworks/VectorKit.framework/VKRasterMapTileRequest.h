/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileRequest : NSObject <NSCopying> {
    NSLocale *_locale;
    long long _mapType;
    unsigned int _scale;
    unsigned int _tileGroupID;
    struct VKRasterTileKey { 
        unsigned int x; 
        unsigned int y; 
        unsigned int z; 
        unsigned int pointSize; 
    } _tileKey;
}

@property(assign,readonly) struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } cacheKey;
@property(assign,readonly) bool isInvalid;
@property(assign,retain) NSLocale * locale;
@property(assign,readwrite) long long mapType;
@property(assign,readwrite) unsigned int scale;
@property(assign,readwrite) unsigned int tileGroupID;
@property(assign,readwrite) struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } tileKey;
@property(assign,readonly) const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* tileKeyPtr;
@property(assign,readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } tk;

- (struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isInvalid;
- (void)isReallyInvalid:(id)arg1;
- (id)locale;
- (long long)mapType;
- (unsigned int)scale;
- (void)setLocale:(id)arg1;
- (void)setMapType:(long long)arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setTileGroupID:(unsigned int)arg1;
- (void)setTileKey:(struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (unsigned int)tileGroupID;
- (struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })tileKey;
- (const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)tileKeyPtr;
- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })tk;

@end