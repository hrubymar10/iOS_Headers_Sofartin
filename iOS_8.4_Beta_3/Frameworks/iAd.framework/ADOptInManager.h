/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADOptInManager : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate> {
    ADAdSheetConnection *_connection;
}

@property (nonatomic, retain) ADAdSheetConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (void)configureConnection:(id)arg1;
- (id)connection;
- (void)getiAdIDsWithCompletionHandler:(id)arg1;
- (void)handleAccountChange;
- (id)init;
- (void)refreshOptInStatus;
- (void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setOptInStatus:(bool)arg1 completionHandler:(id)arg2;
- (bool)shouldLaunchAdSheet;

@end
