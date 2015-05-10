/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFamilyCircleController : NSObject {
    SKUIClientContext *_clientContext;
    bool _hasLoaded;
    FAFamilyCircle *_iCloudFamily;
    SSFamilyCircle *_iTunesFamily;
    NSCache *_imageCache;
    NSNumber *_lastAccountID;
    NSOperationQueue *_opQueue;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,readonly) SSFamilyCircle * familyCircle;
@property(assign,readonly) bool hasLoaded;
@property(assign,readonly) FAFamilyCircle * iCloudFamily;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_reloadDataWithPromptStyle:(long long)arg1;
- (void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4;
- (void)_setProfilePicture:(id)arg1 forMember:(id)arg2;
- (id)clientContext;
- (void)dealloc;
- (id)familyCircle;
- (bool)hasLoaded;
- (id)iCloudFamily;
- (id)init;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)reloadData;
- (void)setClientContext:(id)arg1;

@end