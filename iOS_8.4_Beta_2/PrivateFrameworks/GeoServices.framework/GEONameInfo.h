/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONameInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int phoneticType : 1; 
        unsigned int shieldType : 1; 
        unsigned int signType : 1; 
    } _has;
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    int _phoneticType;
    NSString *_shield;
    int _shieldType;
    int _signType;
}

@property(assign,readonly) bool hasLocale;
@property(assign,readonly) bool hasName;
@property(assign,readonly) bool hasPhoneticName;
@property(assign,readwrite) bool hasPhoneticType;
@property(assign,readonly) bool hasShield;
@property(assign,readwrite) bool hasShieldType;
@property(assign,readwrite) bool hasSignType;
@property(assign,retain) NSString * locale;
@property(assign,retain) NSString * name;
@property(assign,retain) NSString * phoneticName;
@property(assign,readwrite) int phoneticType;
@property(assign,retain) NSString * shield;
@property(assign,readwrite) int shieldType;
@property(assign,readwrite) int signType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasName;
- (bool)hasPhoneticName;
- (bool)hasPhoneticType;
- (bool)hasShield;
- (bool)hasShieldType;
- (bool)hasSignType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)phoneticName;
- (int)phoneticType;
- (bool)readFrom:(id)arg1;
- (void)setHasPhoneticType:(bool)arg1;
- (void)setHasShieldType:(bool)arg1;
- (void)setHasSignType:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setPhoneticType:(int)arg1;
- (void)setShield:(id)arg1;
- (void)setShieldType:(int)arg1;
- (void)setSignType:(int)arg1;
- (id)shield;
- (int)shieldType;
- (int)signType;
- (void)writeTo:(id)arg1;

@end
