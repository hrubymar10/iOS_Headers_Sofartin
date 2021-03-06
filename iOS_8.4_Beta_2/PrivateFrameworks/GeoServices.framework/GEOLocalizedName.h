/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedName : PBCodable <NSCopying> {
    struct { 
        unsigned int nameRank : 1; 
        unsigned int isDefault : 1; 
    } _has;
    bool _isDefault;
    NSString *_languageCode;
    NSString *_name;
    unsigned int _nameRank;
    NSString *_nameType;
    NSString *_phoneticName;
}

@property(assign,readwrite) bool hasIsDefault;
@property(assign,readonly) bool hasLanguageCode;
@property(assign,readonly) bool hasName;
@property(assign,readwrite) bool hasNameRank;
@property(assign,readonly) bool hasNameType;
@property(assign,readonly) bool hasPhoneticName;
@property(assign,readwrite) bool isDefault;
@property(assign,retain) NSString * languageCode;
@property(assign,retain) NSString * name;
@property(assign,readwrite) unsigned int nameRank;
@property(assign,retain) NSString * nameType;
@property(assign,retain) NSString * phoneticName;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsDefault;
- (bool)hasLanguageCode;
- (bool)hasName;
- (bool)hasNameRank;
- (bool)hasNameType;
- (bool)hasPhoneticName;
- (unsigned long long)hash;
- (id)initWithPlaceDataLocalizedString:(id)arg1;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)nameRank;
- (id)nameType;
- (id)phoneticName;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDefault:(bool)arg1;
- (void)setHasNameRank:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameRank:(unsigned int)arg1;
- (void)setNameType:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
