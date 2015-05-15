/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    } _has;
    NSMutableArray *_routes;
    int _status;
}

@property(assign,readwrite) bool hasStatus;
@property(assign,retain) NSMutableArray * routes;
@property(assign,readwrite) int status;

- (void)addRoute:(id)arg1;
- (void)clearRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routes;
- (unsigned long long)routesCount;
- (void)setHasStatus:(bool)arg1;
- (void)setRoutes:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end