/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddress : PBCodable <NSCopying> {
    struct { 
        unsigned int knownAccuracy : 1; 
    } _has;
    int _knownAccuracy;
    NSMutableArray *_localizedAddress;
    NSMutableArray *_spokenNavigationAddress;
    NSMutableArray *_spokenStructuredAddress;
}

@property(assign,readwrite) bool hasKnownAccuracy;
@property(assign,readwrite) int knownAccuracy;
@property(assign,retain) NSMutableArray * localizedAddress;
@property(assign,retain) NSMutableArray * spokenNavigationAddress;
@property(assign,retain) NSMutableArray * spokenStructuredAddress;

+ (id)addressForPlaceData:(id)arg1;

- (void)addLocalizedAddress:(id)arg1;
- (void)addSpokenNavigationAddress:(id)arg1;
- (void)addSpokenStructuredAddress:(id)arg1;
- (id)bestLocalizedAddress;
- (void)clearLocalizedAddress;
- (void)clearSpokenNavigationAddress;
- (void)clearSpokenStructuredAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKnownAccuracy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)localizedAddress;
- (id)localizedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAddressCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKnownAccuracy:(bool)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setLocalizedAddress:(id)arg1;
- (void)setSpokenNavigationAddress:(id)arg1;
- (void)setSpokenStructuredAddress:(id)arg1;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenNavigationAddress;
- (id)spokenNavigationAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNavigationAddressCount;
- (id)spokenStructuredAddress;
- (id)spokenStructuredAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenStructuredAddressCount;
- (void)writeTo:(id)arg1;

@end
