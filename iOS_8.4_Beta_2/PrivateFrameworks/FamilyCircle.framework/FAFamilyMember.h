/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyMember : NSObject <NSSecureCoding> {
    NSDictionary *_dictionary;
}

@property(assign,readonly) unsigned long long age;
@property(assign,copy) NSString * appleID;
@property(assign,copy) NSDictionary * dictionary;
@property(assign,copy) NSNumber * dsid;
@property(assign,copy) NSString * firstName;
@property(assign,readonly) bool hasAskToBuyEnabled;
@property(assign,readonly) bool hasLinkediTunesAccount;
@property(assign,readonly) bool hasParentalControlsEnabled;
@property(assign,copy) NSString * hashedDSID;
@property(assign,readonly) NSNumber * iTunesAccountDSID;
@property(assign,copy) NSString * iTunesAccountUsername;
@property(assign,copy) NSString * inviteEmail;
@property(assign,readonly) bool isChildAccount;
@property(assign,readonly) bool isMe;
@property(assign,readonly) bool isParent;
@property(assign,copy) NSDate * joinedDate;
@property(assign,copy) NSString * lastName;
@property(assign,copy) NSString * memberTypeDisplayString;
@property(assign,copy) NSString * memberTypeString;
@property(assign,copy) NSString * statusString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)age;
- (id)appleID;
- (id)description;
- (id)dictionary;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)fetchFamilyPhotoWithRequestedSize:(unsigned long long)arg1 fallbackToLocalAddressBook:(bool)arg2 completionHandler:(id)arg3;
- (id)firstName;
- (bool)hasAskToBuyEnabled;
- (bool)hasLinkediTunesAccount;
- (bool)hasParentalControlsEnabled;
- (id)hashedDSID;
- (id)iTunesAccountDSID;
- (id)iTunesAccountUsername;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)inviteEmail;
- (bool)isChildAccount;
- (bool)isMe;
- (bool)isParent;
- (id)joinedDate;
- (id)lastName;
- (id)memberTypeDisplayString;
- (id)memberTypeString;
- (id)statusString;

@end