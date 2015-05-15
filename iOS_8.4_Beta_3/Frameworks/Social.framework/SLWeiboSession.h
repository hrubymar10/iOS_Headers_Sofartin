/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLWeiboSession : NSObject <SLMicroBlogSheetDelegate, SLWeiboClientSessionProtocol> {
    id _connectionResetBlock;
    CLInUseAssertion *_locationInUseAssertion;
    id _locationInformationChangedBlock;
    NSCache *_profileImageCache;
    SLRemoteSessionProxy<SLWeiboRemoteSessionProtocol> *_remoteSession;
    NSObject<OS_dispatch_queue> *_remoteSessionQueue;
    NSObject<OS_dispatch_semaphore> *_remoteSessionQueueSemaphore;
    NSBundle *_serviceBundle;
}

@property(assign,copy) id connectionResetBlock;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id locationInformationChangedBlock;
@property(assign,readonly) Class superclass;

+ (id)_remoteInterface;

- (void).cxx_destruct;
- (id)_createOrGetRemoteSession;
- (void)acceptLocationUpdate:(id)arg1;
- (void)beginPotentialLocationUse;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2;
- (id)connectionResetBlock;
- (bool)countMediaAttachmentsTowardCharacterCount;
- (void)deferExpensiveOperations;
- (void)endPotentialLocationUse;
- (void)ensureUserRecordStore;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)fetchCurrentUrlLimits:(id)arg1;
- (void)fetchGeotagStatus:(id)arg1;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchSessionInfo:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id)arg1;
- (id)init;
- (id)locationInformationChangedBlock;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (id)serviceAccountTypeIdentifier;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setConnectionResetBlock:(id)arg1;
- (void)setGeotagAccountSetting:(bool)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)setLocationInformationChangedBlock:(id)arg1;
- (void)showSettingsIfNeeded;
- (void)stopDeferringExpensiveOperations;
- (void)tearDownConnectionToRemoteSession;

@end
