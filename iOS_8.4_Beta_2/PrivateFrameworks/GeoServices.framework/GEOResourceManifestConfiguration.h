/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestConfiguration : NSObject {
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_countryCode;
    NSString *_dataDirectory;
    NSString *_environment;
    NSString *_hardwareIdentifier;
    NSString *_os;
    NSString *_osBuild;
    NSString *_osVersion;
    unsigned int _tileGroupIdentifier;
}

@property(assign,copy) NSString * applicationIdentifier;
@property(assign,copy) NSString * applicationVersion;
@property(assign,copy) NSString * countryCode;
@property(assign,copy) NSString * dataDirectory;
@property(assign,readonly) NSString * directorySuffix;
@property(assign,copy) NSString * environment;
@property(assign,copy) NSString * hardwareIdentifier;
@property(assign,copy) NSString * os;
@property(assign,copy) NSString * osBuild;
@property(assign,copy) NSString * osVersion;
@property(assign,readwrite) unsigned int tileGroupIdentifier;

- (id)applicationIdentifier;
- (id)applicationVersion;
- (id)conciseDictionaryRepresentation;
- (id)countryCode;
- (id)dataDirectory;
- (void)dealloc;
- (id)directorySuffix;
- (id)environment;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConciseDictionaryRepresentation:(id)arg1;
- (bool)isDefaultConfiguration;
- (bool)isEqual:(id)arg1;
- (id)os;
- (id)osBuild;
- (id)osVersion;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDataDirectory:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOs:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)tileGroupIdentifier;

@end