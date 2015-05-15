/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter> {
    <NPSDomainAccessorFilePresenterDelegate> *_delegate;
    NSURL *_domainURL;
    NSOperationQueue *_presenterOperationQueue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) <NPSDomainAccessorFilePresenterDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) NSURL * domainURL;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSOperationQueue * presentedItemOperationQueue;
@property(assign,copy) NSURL * presentedItemURL;
@property(assign,retain) NSOperationQueue * presenterOperationQueue;
@property(assign,copy) NSURL * primaryPresentedItemURL;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)domainURL;
- (id)initWithDelegate:(id)arg1 domainURL:(id)arg2;
- (bool)presentedItemNeedsWatching;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)presenterOperationQueue;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)setDomainURL:(id)arg1;
- (void)setPresenterOperationQueue:(id)arg1;
- (id)synchronizeForReadingOnly:(bool)arg1 handler:(id)arg2;

@end