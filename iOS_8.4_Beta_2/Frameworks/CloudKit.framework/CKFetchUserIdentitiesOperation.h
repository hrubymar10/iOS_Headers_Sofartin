/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserIdentitiesOperation : CKOperation {
    NSMutableSet *_discoveredUserIdentities;
    id _fetchIdentitiesCompletionBlock;
    NSArray *_identities;
    id _identityFetchedBlock;
    NSMutableDictionary *_lookupErrors;
    NSMutableDictionary *_lookupInfoToUserIdentities;
}

@property(assign,retain) NSMutableSet * discoveredUserIdentities;
@property(assign,copy) id fetchIdentitiesCompletionBlock;
@property(assign,retain) NSArray * identities;
@property(assign,copy) id identityFetchedBlock;
@property(assign,retain) NSMutableDictionary * lookupErrors;
@property(assign,retain) NSMutableDictionary * lookupInfoToUserIdentities;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)discoveredUserIdentities;
- (id)fetchIdentitiesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)identities;
- (id)identityFetchedBlock;
- (id)init;
- (id)initWithIdentitiesToFetch:(id)arg1;
- (id)lookupErrors;
- (id)lookupInfoToUserIdentities;
- (void)performCKOperation;
- (void)setDiscoveredUserIdentities:(id)arg1;
- (void)setFetchIdentitiesCompletionBlock:(id)arg1;
- (void)setIdentities:(id)arg1;
- (void)setIdentityFetchedBlock:(id)arg1;
- (void)setLookupErrors:(id)arg1;
- (void)setLookupInfoToUserIdentities:(id)arg1;

@end