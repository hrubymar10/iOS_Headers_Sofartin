/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserInfosOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSArray *_emails;
    bool _shouldDiscoverAllContacts;
    NSArray *_userRecordIDs;
}

@property(assign,retain) NSArray * emails;
@property(assign,readwrite) bool shouldDiscoverAllContacts;
@property(assign,retain) NSArray * userRecordIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setShouldDiscoverAllContacts:(bool)arg1;
- (void)setUserRecordIDs:(id)arg1;
- (bool)shouldDiscoverAllContacts;
- (id)userRecordIDs;

@end
