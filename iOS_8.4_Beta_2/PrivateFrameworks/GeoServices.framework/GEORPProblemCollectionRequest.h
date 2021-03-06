/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
}

@property(assign,retain) NSString * countryCode;
@property(assign,retain) NSData * devicePushToken;
@property(assign,readonly) bool hasCountryCode;
@property(assign,readonly) bool hasDevicePushToken;
@property(assign,readonly) bool hasHwMachine;
@property(assign,readonly) bool hasInputLanguage;
@property(assign,readonly) bool hasOsRelease;
@property(assign,readonly) bool hasUserCredentials;
@property(assign,readonly) bool hasUserEmail;
@property(assign,readonly) bool hasUserLocation;
@property(assign,retain) NSString * hwMachine;
@property(assign,retain) NSString * inputLanguage;
@property(assign,retain) NSString * osRelease;
@property(assign,retain) NSMutableArray * requestElements;
@property(assign,retain) GEORPUserCredentials * userCredentials;
@property(assign,retain) NSString * userEmail;
@property(assign,retain) GEOLocation * userLocation;

- (void)addRequestElement:(id)arg1;
- (void)clearRequestElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasDevicePushToken;
- (bool)hasHwMachine;
- (bool)hasInputLanguage;
- (bool)hasOsRelease;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (bool)hasUserLocation;
- (unsigned long long)hash;
- (id)hwMachine;
- (id)inputLanguage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osRelease;
- (bool)readFrom:(id)arg1;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (id)requestElements;
- (unsigned long long)requestElementsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCountryCode:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setHwMachine:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setOsRelease:(id)arg1;
- (void)setRequestElements:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (id)userLocation;
- (void)writeTo:(id)arg1;

@end
