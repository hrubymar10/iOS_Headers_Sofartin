/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTWatchKitAppList : NSObject {
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
}

- (void).cxx_destruct;
- (void)_fetchWatchKitInfo;
- (void)dealloc;
- (id)init;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;

@end
