/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeatureHandle : PBCodable <NSCopying> {
    unsigned int _featureIndex;
    unsigned int _featureTileX;
    unsigned int _featureTileY;
    unsigned int _featureTileZ;
    struct { 
        unsigned int featureIndex : 1; 
        unsigned int featureTileX : 1; 
        unsigned int featureTileY : 1; 
        unsigned int featureTileZ : 1; 
        unsigned int identifier : 1; 
        unsigned int style : 1; 
        unsigned int type : 1; 
    } _has;
    unsigned int _identifier;
    int _style;
    struct { int x1; int x2; } *_styleAttributes;
    unsigned long long _styleAttributesCount;
    unsigned long long _styleAttributesSpace;
    int _type;
}

@property(assign,readwrite) unsigned int featureIndex;
@property(assign,readwrite) unsigned int featureTileX;
@property(assign,readwrite) unsigned int featureTileY;
@property(assign,readwrite) unsigned int featureTileZ;
@property(assign,readwrite) bool hasFeatureIndex;
@property(assign,readwrite) bool hasFeatureTileX;
@property(assign,readwrite) bool hasFeatureTileY;
@property(assign,readwrite) bool hasFeatureTileZ;
@property(assign,readwrite) bool hasIdentifier;
@property(assign,readwrite) bool hasStyle;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) unsigned int identifier;
@property(assign,readwrite) int style;
@property(assign,readonly) struct { int x1; int x2; }* styleAttributes;
@property(assign,readonly) unsigned long long styleAttributesCount;
@property(assign,readwrite) int type;

- (void)addStyleAttribute:(struct { int x1; int x2; })arg1;
- (void)clearStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)featureIndex;
- (unsigned int)featureTileX;
- (unsigned int)featureTileY;
- (unsigned int)featureTileZ;
- (bool)hasFeatureIndex;
- (bool)hasFeatureTileX;
- (bool)hasFeatureTileY;
- (bool)hasFeatureTileZ;
- (bool)hasIdentifier;
- (bool)hasStyle;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureIndex:(unsigned int)arg1;
- (void)setFeatureTileX:(unsigned int)arg1;
- (void)setFeatureTileY:(unsigned int)arg1;
- (void)setFeatureTileZ:(unsigned int)arg1;
- (void)setHasFeatureIndex:(bool)arg1;
- (void)setHasFeatureTileX:(bool)arg1;
- (void)setHasFeatureTileY:(bool)arg1;
- (void)setHasFeatureTileZ:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyleAttributes:(struct { int x1; int x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setType:(int)arg1;
- (int)style;
- (struct { int x1; int x2; })styleAttributeAtIndex:(unsigned long long)arg1;
- (struct { int x1; int x2; }*)styleAttributes;
- (unsigned long long)styleAttributesCount;
- (int)type;
- (void)writeTo:(id)arg1;

@end