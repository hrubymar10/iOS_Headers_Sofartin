/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    unsigned long long _animationID;
    unsigned long long _businessID;
    struct { 
        unsigned int animationID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
    } _has;
    int _localSearchProviderID;
    long long _placeID;
    int _resultIndex;
    double _searchResponseRelativeTimestamp;
}

@property(assign,readwrite) unsigned long long animationID;
@property(assign,readwrite) unsigned long long businessID;
@property(assign,readwrite) bool hasAnimationID;
@property(assign,readwrite) bool hasBusinessID;
@property(assign,readwrite) bool hasLocalSearchProviderID;
@property(assign,readwrite) bool hasPlaceID;
@property(assign,readwrite) bool hasResultIndex;
@property(assign,readwrite) bool hasSearchResponseRelativeTimestamp;
@property(assign,readwrite) int localSearchProviderID;
@property(assign,readwrite) long long placeID;
@property(assign,readwrite) int resultIndex;
@property(assign,readwrite) double searchResponseRelativeTimestamp;

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;

- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnimationID;
- (bool)hasBusinessID;
- (bool)hasLocalSearchProviderID;
- (bool)hasPlaceID;
- (bool)hasResultIndex;
- (bool)hasSearchResponseRelativeTimestamp;
- (unsigned long long)hash;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (long long)placeID;
- (bool)readFrom:(id)arg1;
- (int)resultIndex;
- (double)searchResponseRelativeTimestamp;
- (void)setAnimationID:(unsigned long long)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setHasAnimationID:(bool)arg1;
- (void)setHasBusinessID:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasPlaceID:(bool)arg1;
- (void)setHasResultIndex:(bool)arg1;
- (void)setHasSearchResponseRelativeTimestamp:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (void)writeTo:(id)arg1;

@end
