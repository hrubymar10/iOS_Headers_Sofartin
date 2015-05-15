/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDStyleAttributes : PBCodable <NSCopying> {
    NSMutableArray *_attributes;
    unsigned long long _customIconId;
    struct { 
        unsigned int customIconId : 1; 
    } _has;
}

@property(assign,retain) NSMutableArray * attributes;
@property(assign,readwrite) unsigned long long customIconId;
@property(assign,readwrite) bool hasCustomIconId;

- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)attributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)customIconId;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomIconId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCustomIconId:(unsigned long long)arg1;
- (void)setHasCustomIconId:(bool)arg1;
- (void)writeTo:(id)arg1;

@end