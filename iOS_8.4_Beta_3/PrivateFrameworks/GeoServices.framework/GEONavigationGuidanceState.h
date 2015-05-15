/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    struct { 
        unsigned int navigationState : 1; 
        unsigned int trackedTransportType : 1; 
    } _has;
    int _navigationState;
    int _trackedTransportType;
}

@property(assign,readwrite) bool hasNavigationState;
@property(assign,readwrite) bool hasTrackedTransportType;
@property(assign,readwrite) int navigationState;
@property(assign,readwrite) int trackedTransportType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNavigationState;
- (bool)hasTrackedTransportType;
- (unsigned long long)hash;
- (id)initWithTransportType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)navigationState;
- (bool)readFrom:(id)arg1;
- (void)setHasNavigationState:(bool)arg1;
- (void)setHasTrackedTransportType:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setTrackedTransportType:(int)arg1;
- (int)trackedTransportType;
- (void)writeTo:(id)arg1;

@end
