/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioArtworkDataSource : NSObject <MPArtworkDataSource> {
    unsigned long long _backgroundCacheSize;
    unsigned long long _cacheSize;
    CPLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    long long _resumeToForegroundCacheSize;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)sharedRadioArtworkDataSource;

- (void).cxx_destruct;
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (void)_handleDidEnterBackgroundNotification:(id)arg1;
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_handleWillEnterForegroundNotification:(id)arg1;
- (void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(bool)arg2;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (bool)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)dealloc;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;

@end