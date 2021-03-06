/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property(assign,retain) NSNumber * accountIdentifier;
@property(assign,retain) NSString * applicationIdentifier;
@property(assign,retain) NSNumber * baseVersion;
@property(assign,retain) NSNumber * clientVersion;
@property(assign,retain) NSString * connection;
@property(assign,retain) NSString * eventType;
@property(assign,retain) NSNumber * eventVersion;
@property(assign,retain) NSString * hostApplicationIdentifier;
@property(assign,readwrite) double originalTime;
@property(assign,retain) NSString * pageContext;
@property(assign,retain) NSString * pageDescription;
@property(assign,readwrite) unsigned long long pageID;
@property(assign,retain) NSString * pageType;
@property(assign,retain) NSString * pageURL;
@property(assign,retain) NSNumber * pixelRatio;
@property(assign,retain) NSNumber * previousClientVersion;
@property(assign,retain) NSNumber * screenHeight;
@property(assign,retain) NSNumber * screenWidth;
@property(assign,retain) NSString * topic;
@property(assign,retain) NSString * userAgent;
@property(assign,retain) NSNumber * windowHeight;
@property(assign,retain) NSString * windowOrientation;
@property(assign,retain) NSNumber * windowWidth;

- (id)accountIdentifier;
- (id)applicationIdentifier;
- (id)baseVersion;
- (id)clientVersion;
- (id)connection;
- (id)decorateReportingURL:(id)arg1;
- (id)description;
- (id)eventType;
- (id)eventVersion;
- (id)hostApplicationIdentifier;
- (id)init;
- (bool)isBlacklistedByConfiguration:(id)arg1;
- (double)originalTime;
- (id)pageContext;
- (id)pageDescription;
- (unsigned long long)pageID;
- (id)pageType;
- (id)pageURL;
- (id)pixelRatio;
- (id)previousClientVersion;
- (id)screenHeight;
- (id)screenWidth;
- (void)setAccountIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setEventVersion:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setOriginalTime:(double)arg1;
- (void)setOriginalTimeUsingDate:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setPageDescription:(id)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setPageType:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPixelRatio:(id)arg1;
- (void)setPreviousClientVersion:(id)arg1;
- (void)setScreenHeight:(id)arg1;
- (void)setScreenWidth:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWindowHeight:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (void)setWindowWidth:(id)arg1;
- (id)topic;
- (id)userAgent;
- (id)windowHeight;
- (id)windowOrientation;
- (id)windowWidth;

@end
