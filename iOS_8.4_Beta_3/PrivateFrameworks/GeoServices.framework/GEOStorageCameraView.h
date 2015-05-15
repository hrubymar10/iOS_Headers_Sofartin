/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageCameraView : PBCodable <NSCopying> {
    GEOURLCamera *_camera;
    struct { 
        unsigned int mapType : 1; 
    } _has;
    int _mapType;
    PBUnknownFields *_unknownFields;
}

@property(assign,retain) GEOURLCamera * camera;
@property(assign,readonly) bool hasCamera;
@property(assign,readwrite) bool hasMapType;
@property(assign,readwrite) int mapType;
@property(assign,readonly) PBUnknownFields * unknownFields;

- (id)camera;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCamera;
- (bool)hasMapType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mapType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setMapType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
