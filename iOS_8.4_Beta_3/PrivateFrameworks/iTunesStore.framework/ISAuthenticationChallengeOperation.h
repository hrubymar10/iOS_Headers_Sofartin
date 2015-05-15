/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISAuthenticationChallengeOperation : ISDialogOperation {
    ISAuthenticationChallenge *_challenge;
    NSURLCredential *_credential;
}

@property(assign,retain) ISAuthenticationChallenge * challenge;
@property(assign,retain) NSURLCredential * credential;

+ (id)operationWithChallenge:(id)arg1;

- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;
- (id)challenge;
- (id)credential;
- (void)dealloc;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;
- (void)run;
- (void)setChallenge:(id)arg1;
- (void)setCredential:(id)arg1;

@end
