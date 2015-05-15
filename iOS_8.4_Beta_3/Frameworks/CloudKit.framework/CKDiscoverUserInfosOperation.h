/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserInfosOperation : CKOperation {
    id _discoverUserInfosCompletionBlock;
    NSArray *_emailAddresses;
    NSMutableDictionary *_emailsToUserInfos;
    NSArray *_userRecordIDs;
    NSMutableDictionary *_userRecordIDsToUserInfos;
}

@property (nonatomic, copy) id discoverUserInfosCompletionBlock;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, retain) NSMutableDictionary *emailsToUserInfos;
@property (nonatomic, copy) NSArray *userRecordIDs;
@property (nonatomic, retain) NSMutableDictionary *userRecordIDsToUserInfos;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)discoverUserInfosCompletionBlock;
- (id)emailAddresses;
- (id)emailsToUserInfos;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (void)performCKOperation;
- (void)setDiscoverUserInfosCompletionBlock:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmailsToUserInfos:(id)arg1;
- (void)setUserRecordIDs:(id)arg1;
- (void)setUserRecordIDsToUserInfos:(id)arg1;
- (id)userRecordIDs;
- (id)userRecordIDsToUserInfos;

@end
