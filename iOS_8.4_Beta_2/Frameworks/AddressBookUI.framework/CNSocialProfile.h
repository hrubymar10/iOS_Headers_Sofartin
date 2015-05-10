/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNSocialProfile : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *_profileDictionary;
}

@property(assign,copy) NSString * displayname;
@property(assign,retain) NSMutableDictionary * profileDictionary;
@property(assign,copy) NSString * service;
@property(assign,copy) NSString * urlString;
@property(assign,copy) NSString * userIdentifier;
@property(assign,copy) NSString * username;

+ (id)socialProfile;
+ (id)socialProfileWithDictionary:(id)arg1;
+ (id)socialProfileWithUrlString:(id)arg1 username:(id)arg2 service:(id)arg3;
+ (id)socialProfileWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
+ (id)socialProfileWithUsername:(id)arg1 service:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayname;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)profileDictionary;
- (id)service;
- (void)setProfileDictionary:(id)arg1;
- (id)urlString;
- (id)userIdentifier;
- (id)username;

@end