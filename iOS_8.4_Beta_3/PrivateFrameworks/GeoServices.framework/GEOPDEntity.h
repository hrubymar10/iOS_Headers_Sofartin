/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntity : PBCodable <NSCopying> {
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    NSString *_fax;
    struct { 
        unsigned int type : 1; 
        unsigned int isDisputed : 1; 
        unsigned int isPermanentlyClosed : 1; 
    } _has;
    bool _isDisputed;
    bool _isPermanentlyClosed;
    NSMutableArray *_localizedCategorys;
    NSMutableArray *_names;
    NSMutableArray *_spokenNames;
    NSString *_telephone;
    int _type;
    NSString *_url;
}

@property(assign,retain) NSMutableArray * altFaxs;
@property(assign,retain) NSMutableArray * altTelephones;
@property(assign,retain) NSMutableArray * altUrls;
@property(assign,retain) NSString * fax;
@property(assign,readonly) bool hasFax;
@property(assign,readwrite) bool hasIsDisputed;
@property(assign,readwrite) bool hasIsPermanentlyClosed;
@property(assign,readonly) bool hasTelephone;
@property(assign,readwrite) bool hasType;
@property(assign,readonly) bool hasUrl;
@property(assign,readwrite) bool isDisputed;
@property(assign,readwrite) bool isPermanentlyClosed;
@property(assign,retain) NSMutableArray * localizedCategorys;
@property(assign,retain) NSMutableArray * names;
@property(assign,retain) NSMutableArray * spokenNames;
@property(assign,retain) NSString * telephone;
@property(assign,readwrite) int type;
@property(assign,retain) NSString * url;

+ (id)entityForPlaceData:(id)arg1;

- (void)addAltFax:(id)arg1;
- (void)addAltTelephone:(id)arg1;
- (void)addAltUrl:(id)arg1;
- (void)addLocalizedCategory:(id)arg1;
- (void)addName:(id)arg1;
- (void)addSpokenName:(id)arg1;
- (id)altFaxAtIndex:(unsigned long long)arg1;
- (id)altFaxs;
- (unsigned long long)altFaxsCount;
- (id)altTelephoneAtIndex:(unsigned long long)arg1;
- (id)altTelephones;
- (unsigned long long)altTelephonesCount;
- (id)altUrlAtIndex:(unsigned long long)arg1;
- (id)altUrls;
- (unsigned long long)altUrlsCount;
- (id)bestLocalizedName;
- (void)clearAltFaxs;
- (void)clearAltTelephones;
- (void)clearAltUrls;
- (void)clearLocalizedCategorys;
- (void)clearNames;
- (void)clearSpokenNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fax;
- (bool)hasFax;
- (bool)hasIsDisputed;
- (bool)hasIsPermanentlyClosed;
- (bool)hasTelephone;
- (bool)hasType;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isDisputed;
- (bool)isEqual:(id)arg1;
- (bool)isPermanentlyClosed;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (id)localizedCategorys;
- (unsigned long long)localizedCategorysCount;
- (void)mergeFrom:(id)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)names;
- (unsigned long long)namesCount;
- (bool)readFrom:(id)arg1;
- (void)setAltFaxs:(id)arg1;
- (void)setAltTelephones:(id)arg1;
- (void)setAltUrls:(id)arg1;
- (void)setFax:(id)arg1;
- (void)setHasIsDisputed:(bool)arg1;
- (void)setHasIsPermanentlyClosed:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsDisputed:(bool)arg1;
- (void)setIsPermanentlyClosed:(bool)arg1;
- (void)setLocalizedCategorys:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setSpokenNames:(id)arg1;
- (void)setTelephone:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (id)spokenNameAtIndex:(unsigned long long)arg1;
- (id)spokenNames;
- (unsigned long long)spokenNamesCount;
- (id)telephone;
- (int)type;
- (id)url;
- (void)writeTo:(id)arg1;

@end
