/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOOriginalRoute : PBCodable <NSCopying> {
    struct { 
        unsigned int originalRoutePurpose : 1; 
    } _has;
    NSData *_originalDirectionsResponseID;
    int _originalRoutePurpose;
    NSData *_routeHandle;
}

@property (nonatomic, readonly) bool hasOriginalDirectionsResponseID;
@property (nonatomic) bool hasOriginalRoutePurpose;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic, retain) NSData *originalDirectionsResponseID;
@property (nonatomic) int originalRoutePurpose;
@property (nonatomic, retain) NSData *routeHandle;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginalDirectionsResponseID;
- (bool)hasOriginalRoutePurpose;
- (bool)hasRouteHandle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalDirectionsResponseID;
- (int)originalRoutePurpose;
- (bool)readFrom:(id)arg1;
- (id)routeHandle;
- (void)setHasOriginalRoutePurpose:(bool)arg1;
- (void)setOriginalDirectionsResponseID:(id)arg1;
- (void)setOriginalRoutePurpose:(int)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
