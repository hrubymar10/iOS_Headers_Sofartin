/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSMutableConnectionConfiguration : HSConnectionConfiguration

@property (nonatomic, retain) SSAccount *account;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSString *buildIdentifier;
@property (nonatomic, retain) NSNumber *familyMemberStoreID;
@property (nonatomic, copy) NSString *purchaseClientIdentifier;
@property (nonatomic) long long requestReason;

- (id)account;
- (id)baseURL;
- (id)buildIdentifier;
- (id)familyMemberStoreID;
- (id)initWithConfiguration:(id)arg1;
- (id)purchaseClientIdentifier;
- (long long)requestReason;
- (void)setAccount:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (void)setFamilyMemberStoreID:(id)arg1;
- (void)setPurchaseClientIdentifier:(id)arg1;
- (void)setRequestReason:(long long)arg1;

@end
