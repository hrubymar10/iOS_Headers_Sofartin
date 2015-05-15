/* Generated by RuntimeBrowser.
 */

@protocol ACDOAuthSignerProtocol <NSObject>

@required

- (void)setClientBundleID:(NSString *)arg1 withHandler:(id)arg2;
- (void)setShouldIncludeAppIdInRequest:(bool)arg1;
- (void)signURLRequest:(NSURLRequest *)arg1 withAccount:(ACAccount *)arg2 applicationID:(NSString *)arg3 timestamp:(NSDate *)arg4 handler:(id)arg5;
- (void)signURLRequest:(NSURLRequest *)arg1 withAccount:(ACAccount *)arg2 callingPID:(NSNumber *)arg3 timestamp:(NSDate *)arg4 handler:(id)arg5;

@end
