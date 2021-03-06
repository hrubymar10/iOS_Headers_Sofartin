/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchClient : NSObject <CLLocationManagerDelegate> {
    NSString *_applicationNameForUserAgent;
    NSURLSessionTask *_bagFetchTask;
    NSMutableDictionary *_bagImageData;
    NSMutableDictionary *_bagImages;
    NSString *_customFlight;
    NSString *_deviceIP;
    bool _enabled;
    NSArray *_enabledDomains;
    bool _feedbackEnabled;
    NSURL *_feedbackFallbackURL;
    NSURL *_feedbackURL;
    NSString *_firstUseDescriptionText;
    NSString *_firstUseLearnMoreText;
    NSString *_firstUseLearnMoreURLString;
    GEOUserSessionEntity *_geoUserSessionEntity;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    } _latestQueryTimestamp;
    CLLocation *_location;
    CLLocationManager *_locationManager;
    NSThread *_locationThread;
    unsigned long long _maximumCachedQueriesToSend;
    unsigned long long _maximumCachedResultsToSend;
    NSURL *_mescalCertificateURL;
    bool _mescalEnabled;
    WBSParsecSearchMescalSession *_mescalSession;
    NSURL *_mescalSetupURL;
    unsigned long long _mescalVersionNumber;
    double _minimumIntervalBetweenQueriesFromBag;
    double _minimumIntervalBetweenQueriesFromSearchResponse;
    unsigned long long _minimumQueryLength;
    NSArray *_optionalQueryItems;
    NSNumber *_otherRenderTimeout;
    NSString *_recentlyUsedAppIdentifierListString;
    NSArray *_recentlyUsedAppIdentifierWhitelist;
    bool _safeModeEnabled;
    NSMutableDictionary *_screenScaleToSpriteImageDictionary;
    NSMutableDictionary *_screenScaleToSpriteMapDictionary;
    NSURL *_searchFallbackURL;
    NSNumber *_searchRenderTimeout;
    NSURL *_searchURL;
    <WBSParsecSearchClientStorage> *_storage;
    NSString *_storeFrontIdentifier;
    NSArray *_supportedDomainIdentifiers;
    NSArray *_supportedGeolocationServices;
    NSTimer *_updateTimer;
    bool _updatingLocation;
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSString *_userAgent;
    NSString *_userGUID;
    bool _userGUIDEnabled;
    NSTimer *_userGUIDExpirationTimer;
    NSURL *_userGUIDFallbackURL;
    NSURL *_userGUIDURL;
    bool _usesLedBelly;
    bool _usesSprites;
    int ipChangeNotificationToken;
}

@property (nonatomic, readonly) NSString *applicationNameForUserAgent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSArray *enabledDomains;
@property (nonatomic, readonly) bool feedbackEnabled;
@property (nonatomic, readonly) NSURL *feedbackFallbackURL;
@property (nonatomic, readonly) NSURL *feedbackURL;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) NSString *firstUseLearnMoreText;
@property (nonatomic, readonly) NSString *firstUseLearnMoreURLString;
@property (nonatomic, readonly) GEOUserSessionEntity *geoUserSessionEntity;
@property (readonly) unsigned long long hash;
@property (nonatomic) /* Warning: unhandled struct encoding: '{time_point<std::__1::chrono::steady_clock' */ struct  latestQueryTimestamp; /* unknown property attribute:  1000000000> >=q}} */
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long maximumCachedQueriesToSend;
@property (nonatomic, readonly) unsigned long long maximumCachedResultsToSend;
@property (nonatomic, readonly) WBSParsecSearchMescalSession *mescalSession;
@property (nonatomic, readonly) double minimumIntervalBetweenQueriesFromBag;
@property (nonatomic) double minimumIntervalBetweenQueriesFromSearchResponse;
@property (nonatomic, readonly) unsigned long long minimumQueryLength;
@property (nonatomic, readonly) NSArray *optionalQueryItems;
@property (nonatomic, readonly) NSNumber *otherRenderTimeout;
@property (nonatomic) bool safeModeEnabled;
@property (nonatomic, readonly) NSURL *searchFallbackURL;
@property (nonatomic, readonly) NSNumber *searchRenderTimeout;
@property (nonatomic, readonly) NSURL *searchURL;
@property (nonatomic, readonly) NSURLQueryItem *secretKeyQueryItem;
@property (nonatomic, readonly) <WBSParsecSearchClientStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedDomainIdentifiers;
@property (nonatomic, readonly) NSURLSessionConfiguration *urlSessionConfiguration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureMescalFromDictionary:(id)arg1;
- (void)_createMescalSession;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_customFlightQueryItem;
- (void)_fetchConfiguration;
- (void)_fetchUserGUIDIfNeeded;
- (void)_generateBagImagesFromDictionary:(id)arg1;
- (void)_generateSpriteImagesFromArray:(id)arg1;
- (bool)_hasLocationServicesEffectiveBundleEntitlement;
- (id)_localeQueryItem;
- (id)_locationSourceForLocation:(id)arg1;
- (void)_locationThread;
- (void)_performBlock:(id)arg1;
- (void)_performBlockOnLocationThread:(id)arg1;
- (void)_performBlockOnLocationThread:(id)arg1 wait:(bool)arg2;
- (void)_performBlockOnLocationThreadAndWait:(id)arg1;
- (void)_refreshGEOUserSession;
- (void)_requestDeviceIP;
- (void)_setDeviceIP:(id)arg1;
- (void)_setUserGUID:(id)arg1 expirationDate:(id)arg2;
- (void)_storeFrontIdentifierDidChange:(id)arg1;
- (void)_updateOptionalQueryItems;
- (void)_updateStoreFrontIdentifier;
- (void)_updateUserGUIDExpirationTimerWithDate:(id)arg1;
- (void)_userGUIDExpirationTimerDidFire:(id)arg1;
- (id)applicationNameForUserAgent;
- (id)enabledDomains;
- (bool)feedbackEnabled;
- (id)feedbackFallbackURL;
- (id)feedbackURL;
- (id)firstUseDescriptionText;
- (id)firstUseLearnMoreText;
- (id)firstUseLearnMoreURLString;
- (id)geoUserSessionEntity;
- (id)imageForIdentifier:(id)arg1 withScale:(double)arg2;
- (id)initWithStorage:(id)arg1 applicationNameForUserAgent:(id)arg2;
- (void)invalidate;
- (bool)isEnabled;
- (struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })latestQueryTimestamp;
- (id)location;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationSource;
- (unsigned long long)maximumCachedQueriesToSend;
- (unsigned long long)maximumCachedResultsToSend;
- (id)mescalSession;
- (double)minimumIntervalBetweenQueriesFromBag;
- (double)minimumIntervalBetweenQueriesFromSearchResponse;
- (unsigned long long)minimumQueryLength;
- (id)optionalQueryItems;
- (id)otherRenderTimeout;
- (void)resetUserGUID;
- (bool)safeModeEnabled;
- (id)searchFallbackURL;
- (id)searchRenderTimeout;
- (id)searchURL;
- (id)secretKeyQueryItem;
- (void)setLatestQueryTimestamp:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x_1_1_1; } x1; })arg1;
- (void)setMinimumIntervalBetweenQueriesFromSearchResponse:(double)arg1;
- (void)setSafeModeEnabled:(bool)arg1;
- (void)setSupportedDomainIdentifiers:(id)arg1;
- (id)spriteImageForIdentifier:(id)arg1 withScale:(double)arg2;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id)storage;
- (id)supportedDomainIdentifiers;
- (void)updateRecentlyUsedAppIdentifiers;
- (void)updateURLSessionConfiguration;
- (id)urlSessionConfiguration;

@end
