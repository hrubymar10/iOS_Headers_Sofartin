/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionFerryStep : PBCodable <NSCopying> {
    struct { 
        unsigned int maneuverType : 1; 
    } _has;
    int _maneuverType;
}

@property(assign,readwrite) bool hasManeuverType;
@property(assign,readwrite) int maneuverType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasManeuverType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)maneuverType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasManeuverType:(bool)arg1;
- (void)setManeuverType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
