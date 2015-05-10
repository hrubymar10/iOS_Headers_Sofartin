/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSAutomaticReadingListTwitterSource : WBSAutomaticReadingListSocialSource {
    unsigned long long _numberOfRequestsAllowedInRateLimitWindow;
}

@property(assign,readwrite) unsigned long long numberOfRequestsAllowedInRateLimitWindow;

+ (id)sharedSource;

- (id)accountTypeIdentifier;
- (Class)itemClass;
- (double)minimumTimeBetweenRequests;
- (unsigned long long)numberOfRequestsAllowedInRateLimitWindow;
- (id)repostResourceURLStringForItem:(id)arg1;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;
- (id)serviceName;
- (id)serviceType;
- (void)setNumberOfRequestsAllowedInRateLimitWindow:(unsigned long long)arg1;
- (void)updateMinimumTimeBetweenRequestsFromResponseHeaders:(id)arg1;

@end
