/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPrivacy : NSObject {
    int _authStatus;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

+ (void)disableForceOverrideTCC;
+ (void)enableForceOverrideTCC;
+ (id)sharedInstance;

- (bool)_isPhotosAccessAllowedWithScope:(long long)arg1 forceHandler:(bool)arg2 accessAllowedHandler:(id)arg3;
- (void)dealloc;
- (id)init;
- (bool)isPhotoLibraryReadAccessAllowed;
- (bool)isPhotoLibrarySharingOrModificationAllowed;
- (bool)isPhotosAccessAllowedPromptIfNeededWithHandler:(id)arg1;
- (void)isPhotosAccessAllowedWithScope:(long long)arg1 handler:(id)arg2;
- (bool)isPhotosAccessAllowedWithScope:(long long)arg1 promptIfNeededWithHandler:(id)arg2;
- (bool)isPhotosTCCAccessAllowed;
- (bool)isPhotosTCCAccessNotAllowed;
- (bool)isPhotosTCCAccessRestricted;
- (void)photoAccessPowersActive;
- (int)photosTCCAccessStatus;

@end
