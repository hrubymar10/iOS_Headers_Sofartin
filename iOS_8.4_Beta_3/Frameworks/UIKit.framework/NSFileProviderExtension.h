/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling> {
    NSObject<OS_dispatch_queue> *_extensionDispatchQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSURL *_memberQueueDocumentStorageURL;
    NSString *_memberQueueProviderIdentifier;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_dispatch_queue> * memberQueue;
@property(assign,retain) NSURL * memberQueueDocumentStorageURL;
@property(assign,copy) NSString * memberQueueProviderIdentifier;
@property(assign,readonly) Class superclass;

+ (id)_relativeComponentsOfURL:(id)arg1 fromBaseURL:(id)arg2;
+ (id)_resourceIDOfURL:(id)arg1 outError:(id*)arg2;
+ (id)placeholderURLForURL:(id)arg1;
+ (bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (id)documentStorageURL;
- (id)init;
- (void)itemChangedAtURL:(id)arg1;
- (id)memberQueue;
- (id)memberQueueDocumentStorageURL;
- (id)memberQueueProviderIdentifier;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(id)arg2;
- (id)providerIdentifier;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueDocumentStorageURL:(id)arg1;
- (void)setMemberQueueProviderIdentifier:(id)arg1;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(id)arg2;
- (void)stopProvidingItemAtURL:(id)arg1;

@end
