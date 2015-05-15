/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
}

@property(assign,retain) GEOMapItemAddressBookAttributes * addressBookAttributes;
@property(assign,readonly) bool hasAddressBookAttributes;
@property(assign,readonly) bool hasRoutineAttributes;
@property(assign,retain) GEOMapItemRoutineAttributes * routineAttributes;

+ (id)clientAttributesCopyForSharing:(id)arg1;

- (id)addressBookAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressBookAttributes;
- (bool)hasRoutineAttributes;
- (unsigned long long)hash;
- (id)initWithLOIType:(long long)arg1 event:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routineAttributes;
- (void)setAddressBookAttributes:(id)arg1;
- (void)setRoutineAttributes:(id)arg1;
- (void)writeTo:(id)arg1;

@end