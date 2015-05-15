/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAppLaunchController : NSObject {
    SSLookupRequest *_request;
    NSString *_webURLString;
    NSURL *webURL;
}

@property (nonatomic, retain) SSLookupRequest *storeRequest;
@property (nonatomic, retain) NSURL *webURL;

+ (void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2;
+ (void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 completionHandler:(id)arg3;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(id)arg2;
- (void)setStoreRequest:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)storeRequest;
- (id)webURL;

@end
