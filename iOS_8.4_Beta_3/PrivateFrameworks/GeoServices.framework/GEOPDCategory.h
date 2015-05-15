/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCategory : PBCodable <NSCopying> {
    NSString *_categoryId;
    struct { 
        unsigned int level : 1; 
    } _has;
    int _level;
    NSMutableArray *_localizedNames;
}

@property (nonatomic, retain) NSString *categoryId;
@property (nonatomic, readonly) bool hasCategoryId;
@property (nonatomic) bool hasLevel;
@property (nonatomic) int level;
@property (nonatomic, retain) NSMutableArray *localizedNames;

+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (bool)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;

- (void)addLocalizedName:(id)arg1;
- (id)categoryId;
- (void)clearLocalizedNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategoryId;
- (bool)hasLevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)level;
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (id)localizedNames;
- (unsigned long long)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategoryId:(id)arg1;
- (void)setHasLevel:(bool)arg1;
- (void)setLevel:(int)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end
