/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBusinessOptions : PBCodable <NSCopying> {
    NSMutableArray *_attributeKeys;
    struct { 
        unsigned int maxBusinessResults : 1; 
        unsigned int includeBusinessHours : 1; 
        unsigned int includeCenter : 1; 
    } _has;
    bool _includeBusinessHours;
    bool _includeCenter;
    int _maxBusinessResults;
    NSMutableArray *_photoOptions;
}

@property (nonatomic, retain) NSMutableArray *attributeKeys;
@property (nonatomic) bool hasIncludeBusinessHours;
@property (nonatomic) bool hasIncludeCenter;
@property (nonatomic) bool hasMaxBusinessResults;
@property (nonatomic) bool includeBusinessHours;
@property (nonatomic) bool includeCenter;
@property (nonatomic) int maxBusinessResults;
@property (nonatomic, retain) NSMutableArray *photoOptions;

- (void)addAttributeKey:(id)arg1;
- (void)addPhotoOptions:(id)arg1;
- (id)attributeKeyAtIndex:(unsigned long long)arg1;
- (id)attributeKeys;
- (unsigned long long)attributeKeysCount;
- (void)clearAttributeKeys;
- (void)clearPhotoOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeBusinessHours;
- (bool)hasIncludeCenter;
- (bool)hasMaxBusinessResults;
- (unsigned long long)hash;
- (bool)includeBusinessHours;
- (bool)includeCenter;
- (bool)isEqual:(id)arg1;
- (int)maxBusinessResults;
- (void)mergeFrom:(id)arg1;
- (id)photoOptions;
- (id)photoOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoOptionsCount;
- (bool)readFrom:(id)arg1;
- (void)setAttributeKeys:(id)arg1;
- (void)setHasIncludeBusinessHours:(bool)arg1;
- (void)setHasIncludeCenter:(bool)arg1;
- (void)setHasMaxBusinessResults:(bool)arg1;
- (void)setIncludeBusinessHours:(bool)arg1;
- (void)setIncludeCenter:(bool)arg1;
- (void)setMaxBusinessResults:(int)arg1;
- (void)setPhotoOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end
