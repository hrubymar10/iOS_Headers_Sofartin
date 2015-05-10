/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyInvite : NSObject {
    NSString *_childFirstName;
    NSString *_childLastName;
    NSString *_code;
    bool _isChildTransferInvite;
    NSNumber *_organizerDSID;
    NSString *_organizerEmail;
    NSString *_organizerFirstName;
    NSString *_organizerLastName;
    NSNumber *_recepientDSID;
}

@property(assign,copy) NSString * childFirstName;
@property(assign,copy) NSString * childLastName;
@property(assign,copy) NSString * code;
@property(assign,readwrite) bool isChildTransferInvite;
@property(assign,copy) NSNumber * organizerDSID;
@property(assign,copy) NSString * organizerEmail;
@property(assign,copy) NSString * organizerFirstName;
@property(assign,copy) NSString * organizerLastName;
@property(assign,copy) NSNumber * recepientDSID;

- (void).cxx_destruct;
- (id)childFirstName;
- (id)childLastName;
- (id)code;
- (unsigned long long)hash;
- (bool)isChildTransferInvite;
- (bool)isEqual:(id)arg1;
- (id)organizerDSID;
- (id)organizerEmail;
- (id)organizerFirstName;
- (id)organizerLastName;
- (id)recepientDSID;
- (void)setChildFirstName:(id)arg1;
- (void)setChildLastName:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setIsChildTransferInvite:(bool)arg1;
- (void)setOrganizerDSID:(id)arg1;
- (void)setOrganizerEmail:(id)arg1;
- (void)setOrganizerFirstName:(id)arg1;
- (void)setOrganizerLastName:(id)arg1;
- (void)setRecepientDSID:(id)arg1;

@end