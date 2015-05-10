/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCThrottleBase : NSObject {
    unsigned int _finalRetryCount;
    unsigned int _initialRetryCount;
    long long _maximumNsecsBetweenRetries;
    long long _minimumNsecsBetweenRetries;
    NSString *_name;
    long long _nsecsBeforeForgettingCounter;
}

@property(assign,readonly) NSString * name;
@property(assign,readonly) long long nsecsBeforeForgettingCounter;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (bool)isBlocking;
- (id)name;
- (long long)nsecsBeforeForgettingCounter;
- (long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned int*)arg2 now:(long long)arg3;
- (long long)retryBackoff:(unsigned int)arg1;

@end
