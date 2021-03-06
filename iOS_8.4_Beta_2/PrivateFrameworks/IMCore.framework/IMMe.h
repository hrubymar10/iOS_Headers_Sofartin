/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMe : NSObject {
    NSArray *_abEmails;
    NSString *_abFirstName;
    NSString *_abFullName;
    NSMutableArray *_abIMHandles;
    NSString *_abLastName;
    NSString *_abNickname;
    NSMutableArray *_loginIMHandles;
    IMPerson *_person;
}

@property(assign,readonly) IMHandle * bestIMHandle;
@property(assign,readonly) NSString * email;
@property(assign,readonly) NSArray * emails;
@property(assign,readonly) NSString * firstName;
@property(assign,readonly) NSString * fullName;
@property(assign,readonly) NSString * guid;
@property(assign,readonly) NSArray * imHandles;
@property(assign,readonly) NSString * lastName;
@property(assign,readonly) NSString * nickname;
@property(assign,readonly) IMPerson * person;

+ (id)fallbackUserName;
+ (id)imHandleForService:(id)arg1;
+ (id)me;

- (id)_imHandlesWithIDs:(id)arg1 onAccount:(id)arg2;
- (bool)addIMHandle:(id)arg1;
- (bool)addLoginIMHandle:(id)arg1;
- (id)bestIMHandle;
- (void)dealloc;
- (id)description;
- (id)email;
- (id)emails;
- (id)firstName;
- (id)fullName;
- (id)guid;
- (id)imHandles;
- (id)init;
- (bool)isIMHandleLoginIMHandle:(id)arg1;
- (id)lastName;
- (id)loginIMHandles;
- (void)myPictureChanged;
- (id)nickname;
- (id)person;
- (void)rebuildIMHandles;
- (bool)removeIMHandle:(id)arg1;
- (bool)removeLoginIMHandle:(id)arg1;
- (void)resetABPerson;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (void)setIMPerson:(id)arg1;

@end
