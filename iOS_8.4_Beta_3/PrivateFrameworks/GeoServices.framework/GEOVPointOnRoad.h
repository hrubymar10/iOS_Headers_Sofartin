/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVPointOnRoad : PBCodable <NSCopying> {
    int _featureIndex;
    struct { 
        unsigned int vertexIndex : 1; 
    } _has;
    int _vertexIndex;
}

@property(assign,readwrite) int featureIndex;
@property(assign,readwrite) bool hasVertexIndex;
@property(assign,readwrite) int vertexIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureIndex;
- (bool)hasVertexIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureIndex:(int)arg1;
- (void)setHasVertexIndex:(bool)arg1;
- (void)setVertexIndex:(int)arg1;
- (int)vertexIndex;
- (void)writeTo:(id)arg1;

@end
