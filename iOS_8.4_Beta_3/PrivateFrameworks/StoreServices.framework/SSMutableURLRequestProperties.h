/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property(assign,copy) NSData * HTTPBody;
@property(assign,retain) NSInputStream * HTTPBodyStream;
@property(assign,copy) NSDictionary * HTTPHeaders;
@property(assign,copy) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,assign,readwrite) bool ITunesStoreRequest;
@property(assign,readwrite) long long KBSyncType;
@property(assign,retain) NSURL * URL;
@property(assign,copy) NSString * URLBagKey;
@property(assign,readwrite) long long URLBagType;
@property(assign,copy) id URLBagURLBlock;
@property(assign,copy) NSArray * URLs;
@property(assign,readwrite) long long allowedRetryCount;
@property(assign,readwrite) bool allowsBootstrapCellularData;
@property(assign,readwrite) unsigned long long cachePolicy;
@property(assign,copy) NSString * clientAuditBundleIdentifier;
@property(assign,copy) NSData * clientAuditTokenData;
@property(assign,copy) NSString * clientIdentifier;
@property(assign,readwrite) long long expectedContentLength;
@property(getter=isLargeDownload,assign,readwrite) bool largeDownload;
@property(assign,readwrite) long long machineDataStyle;
@property(assign,readwrite) unsigned long long networkServiceType;
@property(assign,copy) NSDictionary * requestParameters;
@property(assign,readwrite) bool requiresCellularDataNetwork;
@property(assign,readwrite) bool requiresExtendedValidationCertificates;
@property(assign,readwrite) bool requiresHTTPS;
@property(assign,readwrite) bool shouldAddKBSyncData;
@property(assign,readwrite) bool shouldDecodeResponse;
@property(assign,readwrite) bool shouldDisableCellular;
@property(assign,readwrite) bool shouldDisableCellularFallback;
@property(assign,readwrite) bool shouldProcessProtocol;
@property(assign,readwrite) bool shouldSendSecureToken;
@property(assign,readwrite) bool shouldSetCookies;
@property(assign,readwrite) double timeoutInterval;
@property(assign,copy) NSArray * userAgentComponents;

+ (id)newForRadioRequestURL:(id)arg1;
+ (id)newForRadioRequestURL:(id)arg1 accountUniqueIdentifier:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setClientAuditBundleIdentifier:(id)arg1;
- (void)setClientAuditTokenData:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setITunesStoreRequest:(bool)arg1;
- (void)setKBSyncType:(long long)arg1;
- (void)setLargeDownload:(bool)arg1;
- (void)setMachineDataStyle:(long long)arg1;
- (void)setMultiPartFormDataWithDictionary:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiresCellularDataNetwork:(bool)arg1;
- (void)setRequiresExtendedValidationCertificates:(bool)arg1;
- (void)setRequiresHTTPS:(bool)arg1;
- (void)setShouldAddKBSyncData:(bool)arg1;
- (void)setShouldDecodeResponse:(bool)arg1;
- (void)setShouldDisableCellular:(bool)arg1;
- (void)setShouldDisableCellularFallback:(bool)arg1;
- (void)setShouldProcessProtocol:(bool)arg1;
- (void)setShouldSendSecureToken:(bool)arg1;
- (void)setShouldSetCookies:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (void)setURLBagType:(long long)arg1;
- (void)setURLBagURLBlock:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;

@end