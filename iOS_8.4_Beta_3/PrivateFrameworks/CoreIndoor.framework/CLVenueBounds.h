/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLVenueBounds : PBCodable <NSCopying> {
    CLLatLonPolygon *_exterior;
    NSMutableArray *_exteriors;
    NSMutableArray *_ids;
}

@property (nonatomic, retain) CLLatLonPolygon *exterior;
@property (nonatomic, retain) NSMutableArray *exteriors;
@property (nonatomic, readonly) bool hasExterior;
@property (nonatomic, retain) NSMutableArray *ids;

- (void).cxx_destruct;
- (void)addExteriors:(id)arg1;
- (void)addIds:(id)arg1;
- (void)clearExteriors;
- (void)clearIds;
- (bool)containsIdentifier:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exterior;
- (id)exteriors;
- (id)exteriorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)exteriorsCount;
- (bool)hasExterior;
- (unsigned long long)hash;
- (id)ids;
- (id)idsAtIndex:(unsigned long long)arg1;
- (unsigned long long)idsCount;
- (bool)isEqual:(id)arg1;
- (id)locationIdentifiers;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExterior:(id)arg1;
- (void)setExteriors:(id)arg1;
- (void)setIds:(id)arg1;
- (id)venueIdentifier;
- (void)writeTo:(id)arg1;

@end
