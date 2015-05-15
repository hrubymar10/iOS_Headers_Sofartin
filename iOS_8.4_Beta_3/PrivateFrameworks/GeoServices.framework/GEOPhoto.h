/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoto : PBCodable <NSCopying> {
    struct { 
        unsigned int photoType : 1; 
    } _has;
    NSMutableArray *_photoInfos;
    int _photoType;
    NSString *_uid;
}

@property(assign,readwrite) bool hasPhotoType;
@property(assign,readonly) bool hasUid;
@property(assign,retain) NSMutableArray * photoInfos;
@property(assign,readwrite) int photoType;
@property(assign,retain) NSString * uid;

- (id)_bestURLForSize:(int)arg1;
- (id)_photoInfoForSize:(int)arg1 includeSmallerSizes:(bool)arg2;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoType;
- (bool)hasUid;
- (unsigned long long)hash;
- (id)initWithPlaceDataPhoto:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (id)photoInfos;
- (unsigned long long)photoInfosCount;
- (int)photoType;
- (bool)readFrom:(id)arg1;
- (void)setHasPhotoType:(bool)arg1;
- (void)setPhotoInfos:(id)arg1;
- (void)setPhotoType:(int)arg1;
- (void)setUid:(id)arg1;
- (id)uid;
- (void)writeTo:(id)arg1;

@end
