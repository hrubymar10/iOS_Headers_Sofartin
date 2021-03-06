/* Generated by RuntimeBrowser.
 */

@protocol SKUIJSITunesStore <JSExport>

@required

- (void)approveInPerson:(NSNumber *)arg1 :(JSValue *)arg2;
- (void)attemptLocalAskToBuyApproval:(NSNumber *)arg1;
- (void)buy:(NSDictionary *)arg1;
- (void)download:(NSDictionary *)arg1;
- (void)exit:(NSDictionary *)arg1;
- (void)findApps:(NSArray *)arg1 :(JSValue *)arg2 :(NSDictionary *)arg3;
- (void)findLibraryItems:(NSArray *)arg1 :(JSValue *)arg2 :(NSDictionary *)arg3;
- (void)getBookSample:(NSDictionary *)arg1;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(JSValue *)arg1;
- (void)log:(NSString *)arg1;
- (SKUIJSAppleAccount *)primaryAppleAccount;
- (bool)resourceExists:(NSString *)arg1;
- (void)setPreviewOverlay:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;

@end
