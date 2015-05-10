/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetGenreTreeNodesRequest : RadioRequest {
    SSMetricsConfiguration *_metricsConfiguration;
    SSMetricsPageEvent *_metricsPageEvent;
    unsigned long long _parentNodeID;
    SSURLConnectionRequest *_request;
}

@property(assign,retain) SSMetricsConfiguration * metricsConfiguration;
@property(assign,copy) SSMetricsPageEvent * metricsPageEvent;

+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1;
+ (id)fallbackRequestPath;
+ (id)requestBagKey;
+ (id)responseContentKey;

- (void).cxx_destruct;
- (id)_genreTreeByApplyingResponse:(id)arg1;
- (id)init;
- (id)initWithParentNodeID:(unsigned long long)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (void)startWithCachedCompletionHandler:(id)arg1 networkCompletionHandler:(id)arg2;
- (void)startWithCompletionHandler:(id)arg1;

@end