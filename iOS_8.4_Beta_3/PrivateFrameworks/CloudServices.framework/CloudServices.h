/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface CloudServices : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *replyQueue;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *replyQueue;

+ (id)_CreateLakituConnection;

- (void).cxx_destruct;
- (id)changeSMSTargetWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)deleteRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)getAccountInfoWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)listSMSTargetsWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)recoverRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)replyQueue;
- (void)setReplyQueue:(id)arg1;
- (id)startSMSChallengeWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)storeRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)updateRecordWithInfo:(id)arg1 completionBlock:(id)arg2;
- (id)verifyCertificateWithInfo:(id)arg1 completionBlock:(id)arg2;

@end
