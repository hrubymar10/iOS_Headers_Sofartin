/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentity : NSObject <NSSecureCoding> {
    NSString *_emailAddress;
    NSString *_firstName;
    bool _hasiCloudAccount;
    bool _hasiCloudAccountSupportingSharing;
    NSString *_lastName;
    NSData *_protectionData;
    CKRecordID *_userRecordID;
}

@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) bool hasiCloudAccount;
@property (nonatomic) bool hasiCloudAccountSupportingSharing;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, copy) CKRecordID *userRecordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_init;
- (id)ckShortDescription;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (bool)hasiCloudAccount;
- (bool)hasiCloudAccountSupportingSharing;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)localizedDisplayName;
- (id)protectionData;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setHasiCloudAccountSupportingSharing:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

@end
