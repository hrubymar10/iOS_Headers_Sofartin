/* Generated by RuntimeBrowser.
 */

@protocol PRSSessionController <NSObject>

@required

- (bool)isEnabled;
- (double)sessionStartTime;
- (NSArray *)supportedDomainIdentifiers;
- (NSURLSessionConfiguration *)urlSessionConfiguration;
- (long long)useLedBelly;
- (long long)useSprite;

@optional

- (NSString *)applicationNameForUserAgent;
- (NSArray *)excludedDomainIdentifiers;
- (NSString *)parsecBaseURL;
- (void)sessionReceivedBagWithEnabledDomains:(NSArray *)arg1;
- (void)setUserId:(NSString *)arg1;
- (bool)useGUID;
- (NSString *)userId;

@end
