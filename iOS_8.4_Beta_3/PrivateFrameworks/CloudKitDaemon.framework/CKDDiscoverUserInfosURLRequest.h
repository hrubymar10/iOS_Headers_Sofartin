/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest {
    NSMutableDictionary *_emailAliasToEmailAddress;
    NSArray *_emailsToDiscover;
    NSMutableDictionary *_hashedEmailByRequestID;
    id _progressBlock;
    NSArray *_userRecordIDsToDiscover;
    bool _wantsProtectionInfo;
}

@property (nonatomic, retain) NSMutableDictionary *emailAliasToEmailAddress;
@property (nonatomic, retain) NSArray *emailsToDiscover;
@property (nonatomic, retain) NSMutableDictionary *hashedEmailByRequestID;
@property (nonatomic, copy) id progressBlock;
@property (nonatomic, retain) NSArray *userRecordIDsToDiscover;
@property (nonatomic) bool wantsProtectionInfo;

- (void).cxx_destruct;
- (id)emailAliasToEmailAddress;
- (id)emailsToDiscover;
- (id)hashedEmailByRequestID;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (int)operationType;
- (id)progressBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setEmailAliasToEmailAddress:(id)arg1;
- (void)setEmailsToDiscover:(id)arg1;
- (void)setHashedEmailByRequestID:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setUserRecordIDsToDiscover:(id)arg1;
- (void)setWantsProtectionInfo:(bool)arg1;
- (id)userRecordIDsToDiscover;
- (bool)wantsProtectionInfo;

@end
