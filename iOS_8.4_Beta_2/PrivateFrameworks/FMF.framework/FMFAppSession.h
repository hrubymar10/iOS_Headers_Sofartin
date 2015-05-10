/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFAppSession : NSObject

+ (id)sharedInstance;

- (id)_fmfAppAccountFromAOSAccount:(id)arg1;
- (void)locationAuthorizationForShareMyLocationWithCompletion:(id)arg1;
- (void)renewFMFAccountCredentialsWithCompletion:(id)arg1;
- (void)retrieveFMFAccountWithCompletion:(id)arg1;
- (void)startListeningForFMFAppPushInEnvironment:(id)arg1 withMessageHandler:(id)arg2 tokenHandler:(id)arg3;
- (void)stopListeningForFMFAppPush;
- (id)thisDeviceId;

@end