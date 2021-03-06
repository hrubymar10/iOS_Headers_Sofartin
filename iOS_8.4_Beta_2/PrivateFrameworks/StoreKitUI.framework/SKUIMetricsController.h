/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsController : NSObject {
    SKUIMetricsImpressionSession *_activeImpressionsSession;
    NSString *_applicationIdentifier;
    SSMetricsController *_controller;
    bool _flushesImmediately;
    SSMetricsConfiguration *_globalConfiguration;
    NSString *_hostApplicationIdentifier;
    bool _impressionsEnabled;
    NSObject<OS_dispatch_source> *_impressionsTimer;
    bool _loggingEnabled;
    SSMetricsConfiguration *_pageConfiguration;
    NSString *_pageContext;
    NSString *_pageURL;
    NSString *_topic;
    NSString *_userAgent;
    NSString *_windowOrientation;
}

@property(assign,readonly) NSNumber * accountIdentifier;
@property(assign,readonly) SKUIMetricsImpressionSession * activeImpressionsSession;
@property(assign,copy) NSString * applicationIdentifier;
@property(assign,readonly) double flushInterval;
@property(assign,readonly) SSMetricsConfiguration * globalConfiguration;
@property(assign,copy) NSString * hostApplicationIdentifier;
@property(assign,retain) SSMetricsConfiguration * pageConfiguration;
@property(assign,copy) NSString * pageContext;
@property(assign,copy) NSString * pageURL;
@property(assign,copy) NSString * topic;
@property(assign,copy) NSString * userAgent;
@property(assign,copy) NSString * windowOrientation;

+ (void)flushImmediately;

- (void).cxx_destruct;
- (void)_insertEvent:(id)arg1;
- (void)_recordActiveImpressions;
- (void)_waitUntilRecordingComplete;
- (id)accountIdentifier;
- (id)activeImpressionsSession;
- (id)applicationIdentifier;
- (bool)canRecordEventWithType:(id)arg1;
- (id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (void)closeImpressionsSession;
- (id)compoundStringWithElements:(id)arg1;
- (void)dealloc;
- (void)flushImmediately;
- (double)flushInterval;
- (id)globalConfiguration;
- (id)hostApplicationIdentifier;
- (id)initWithGlobalConfiguration:(id)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (id)locationWithPageComponent:(id)arg1;
- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;
- (id)pageConfiguration;
- (id)pageContext;
- (id)pageURL;
- (id)performActionForItem:(id)arg1;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (void)pingURLs:(id)arg1;
- (void)pingURLs:(id)arg1 withClientContext:(id)arg2;
- (void)recordBuyConfirmedEventsForItems:(id)arg1 purchaseResponses:(id)arg2;
- (void)recordEvent:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setPageConfiguration:(id)arg1;
- (void)setPageContext:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (id)tokenStringWithElements:(id)arg1;
- (id)topic;
- (id)userAgent;
- (id)windowOrientation;

@end
