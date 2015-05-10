/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudInvitation : PHObject {
    NSString *_albumGUID;
    NSString *_cloudGUID;
    int _invitationState;
    int _invitationStateLocal;
    NSNumber *_inviteeEmailKey;
    NSString *_inviteeFirstName;
    NSString *_inviteeFullName;
    NSString *_inviteeHashedPersonID;
    NSString *_inviteeLastName;
    NSDate *_inviteeSubscriptionDate;
    bool _isMine;
}

@property(assign,readonly) NSString * albumGUID;
@property(assign,readonly) NSString * cloudGUID;
@property(assign,readonly) int invitationState;
@property(assign,readonly) NSString * invitationStateDescription;
@property(assign,readonly) int invitationStateLocal;
@property(assign,readonly) NSNumber * inviteeEmailKey;
@property(assign,readonly) NSArray * inviteeEmails;
@property(assign,readonly) NSString * inviteeFirstName;
@property(assign,readonly) NSString * inviteeFullName;
@property(assign,readonly) NSString * inviteeHashedPersonID;
@property(assign,readonly) NSString * inviteeLastName;
@property(assign,readonly) NSArray * inviteePhones;
@property(assign,readonly) NSDate * inviteeSubscriptionDate;
@property(assign,readonly) bool isMine;

+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)albumGUID;
- (Class)changeRequestClass;
- (id)cloudGUID;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (int)invitationState;
- (id)invitationStateDescription;
- (int)invitationStateLocal;
- (id)inviteeDisplayNameIncludingEmail:(bool)arg1;
- (id)inviteeEmailKey;
- (id)inviteeEmails;
- (id)inviteeFirstName;
- (id)inviteeFullName;
- (id)inviteeHashedPersonID;
- (id)inviteeLastName;
- (id)inviteePhones;
- (id)inviteeSubscriptionDate;
- (bool)isMine;

@end