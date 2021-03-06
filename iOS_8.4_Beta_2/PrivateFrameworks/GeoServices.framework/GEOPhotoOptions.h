/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int photoType : 1; 
    } _has;
    int _maxPhotos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _photoSizes;
    int _photoType;
}

@property(assign,readwrite) bool hasPhotoType;
@property(assign,readwrite) int maxPhotos;
@property(assign,readonly) int* photoSizes;
@property(assign,readonly) unsigned long long photoSizesCount;
@property(assign,readwrite) int photoType;

- (void)addPhotoSize:(int)arg1;
- (void)clearPhotoSizes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maxPhotos;
- (void)mergeFrom:(id)arg1;
- (int)photoSizeAtIndex:(unsigned long long)arg1;
- (int*)photoSizes;
- (unsigned long long)photoSizesCount;
- (int)photoType;
- (bool)readFrom:(id)arg1;
- (void)setHasPhotoType:(bool)arg1;
- (void)setMaxPhotos:(int)arg1;
- (void)setPhotoSizes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPhotoType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
