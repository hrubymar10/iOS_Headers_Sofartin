/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupRequest : NSObject {
    NSMutableDictionary *_emailsToProtectionInfo;
    NSMutableDictionary *_emailsToUserInfo;
    bool _isCancelled;
    id _lookupCompletionBlock;
    id _perEmailProgressBlock;
    NSMutableSet *_remainingEmailsToFetch;
}

@property (nonatomic, retain) NSMutableDictionary *emailsToProtectionInfo;
@property (nonatomic, retain) NSMutableDictionary *emailsToUserInfo;
@property (nonatomic) bool isCancelled;
@property (nonatomic, copy) id lookupCompletionBlock;
@property (nonatomic, copy) id perEmailProgressBlock;
@property (nonatomic, retain) NSMutableSet *remainingEmailsToFetch;

- (void).cxx_destruct;
- (void)cancel;
- (id)emailsToProtectionInfo;
- (id)emailsToUserInfo;
- (void)finishWithError:(id)arg1;
- (id)initWithEmails:(id)arg1;
- (bool)isCancelled;
- (id)lookupCompletionBlock;
- (id)perEmailProgressBlock;
- (void)receivedProtectionInfo:(id)arg1 userInfo:(id)arg2 forEmail:(id)arg3;
- (id)remainingEmailsToFetch;
- (void)setEmailsToProtectionInfo:(id)arg1;
- (void)setEmailsToUserInfo:(id)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setLookupCompletionBlock:(id)arg1;
- (void)setPerEmailProgressBlock:(id)arg1;
- (void)setRemainingEmailsToFetch:(id)arg1;

@end
