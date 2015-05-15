/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSFMFAccountInfo : NSObject <NSSecureCoding> {
    NSDictionary *_additionalInfo;
    NSString *_aosAPSEnvironment;
    NSString *_aosServerHost;
    NSString *_aosServerProtocolScheme;
    NSString *_appAuthToken;
    long long _appAuthTokenStatus;
    NSString *_appServerHost;
    NSString *_dsid;
    NSString *_internalAuthToken;
    NSString *_legacyDsid;
    NSString *_legacyUsername;
    NSString *_username;
}

@property (nonatomic, retain) NSDictionary *additionalInfo;
@property (nonatomic, retain) NSString *aosAPSEnvironment;
@property (nonatomic, retain) NSString *aosServerHost;
@property (nonatomic, retain) NSString *aosServerProtocolScheme;
@property (nonatomic, retain) NSString *appAuthToken;
@property (nonatomic) long long appAuthTokenStatus;
@property (nonatomic, retain) NSString *appServerHost;
@property (nonatomic, retain) NSString *dsid;
@property (nonatomic, retain) NSString *internalAuthToken;
@property (nonatomic, retain) NSString *legacyDsid;
@property (nonatomic, retain) NSString *legacyUsername;
@property (nonatomic, retain) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalInfo;
- (id)aosAPSEnvironment;
- (id)aosServerHost;
- (id)aosServerProtocolScheme;
- (id)appAuthToken;
- (long long)appAuthTokenStatus;
- (id)appServerHost;
- (void)dealloc;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)internalAuthToken;
- (id)legacyDsid;
- (id)legacyUsername;
- (void)setAdditionalInfo:(id)arg1;
- (void)setAosAPSEnvironment:(id)arg1;
- (void)setAosServerHost:(id)arg1;
- (void)setAosServerProtocolScheme:(id)arg1;
- (void)setAppAuthToken:(id)arg1;
- (void)setAppAuthTokenStatus:(long long)arg1;
- (void)setAppServerHost:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setInternalAuthToken:(id)arg1;
- (void)setLegacyDsid:(id)arg1;
- (void)setLegacyUsername:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
