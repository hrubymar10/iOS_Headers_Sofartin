/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter> {
    PFUbiquityLocation *_presentedItemLocation;
    NSURL *_presentedItemURL;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) PFUbiquityLocation * presentedItemLocation;
@property(assign,retain) NSOperationQueue * presentedItemOperationQueue;
@property(assign,copy) NSURL * presentedItemURL;
@property(assign,copy) NSURL * primaryPresentedItemURL;
@property(assign,readonly) Class superclass;

+ (void)initialize;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (id)presentedItemLocation;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)relinquishPresentedItemToReader:(id)arg1;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id)arg1;

@end
