/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying> {
    NSString *_languageCode;
    GEONameInfo *_name;
    NSString *_requestedLanguageCode;
}

@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasRequestedLanguageCode;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) GEONameInfo *name;
@property (nonatomic, retain) NSString *requestedLanguageCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageCode;
- (bool)hasName;
- (bool)hasRequestedLanguageCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)requestedLanguageCode;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRequestedLanguageCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
