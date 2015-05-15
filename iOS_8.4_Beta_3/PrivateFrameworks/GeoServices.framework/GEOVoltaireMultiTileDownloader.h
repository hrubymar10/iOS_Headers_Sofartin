/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate> {
    int _attempts;
    NSData *_auditToken;
    GEOTileKeyMap *_baseTilesWaitingForLocalized;
    NSURLConnection *_connection;
    <GEOVoltaireMultiTileDownloaderDelegate> *_delegate;
    NSMutableSet *_errorCodes;
    GEOTileKeyList *_keyList;
    NSLocale *_locale;
    GEOTileKeyMap *_localizedTilesWaitingForBase;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSString *_postString;
    unsigned short _providerID;
    GEONetworkDataReader *_reader;
    GEOTileKeyList *_receivedKeys;
    NSURL *_requestURL;
    bool _requireWiFi;
    GEOTileKeyList *_requiresLocalization;
    NSString *_sharedPrefix;
    double _startTime;
    double _timeout;
    bool _useStatusCodes;
    NSString *_userAgent;
}

@property(assign,retain) NSData * auditToken;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <GEOVoltaireMultiTileDownloaderDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSURL * requestURL;
@property(assign,readwrite) bool requireWiFi;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool useStatusCodes;
@property(assign,retain) NSString * userAgent;

- (void)_cancelWithError:(id)arg1;
- (void)_cleanupConnection;
- (void)_failWithError:(id)arg1;
- (id)_localizationURLForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)_localizationURLIfNecessaryForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)_mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })_tileKeyForURL:(id)arg1 edition:(unsigned int*)arg2 isLocalized:(bool*)arg3;
- (void)_tryParseTiles;
- (id)_urlForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)auditToken;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)elapsed;
- (id)initWithURL:(id)arg1 keyList:(id)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4;
- (void)logDownloadDetails;
- (id)requestURL;
- (bool)requireWiFi;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequireWiFi:(bool)arg1;
- (void)setUseStatusCodes:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (void)start;
- (bool)useStatusCodes;
- (id)userAgent;

@end
