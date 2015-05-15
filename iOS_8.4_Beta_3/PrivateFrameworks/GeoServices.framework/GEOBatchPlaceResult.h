/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchPlaceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    GEOPlaceResult *_placeResult;
    int _statusCode;
}

@property(assign,readonly) bool hasPlaceResult;
@property(assign,readwrite) bool hasStatusCode;
@property(assign,retain) GEOPlaceResult * placeResult;
@property(assign,readwrite) int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceResult;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResult;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setPlaceResult:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end