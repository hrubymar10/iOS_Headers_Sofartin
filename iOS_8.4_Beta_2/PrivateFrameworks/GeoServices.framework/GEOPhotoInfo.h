/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int size : 1; 
    } _has;
    int _size;
    NSString *_url;
}

@property(assign,readwrite) bool hasSize;
@property(assign,readonly) bool hasUrl;
@property(assign,readwrite) int size;
@property(assign,retain) NSString * url;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSize;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setSize:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)size;
- (id)url;
- (void)writeTo:(id)arg1;

@end
