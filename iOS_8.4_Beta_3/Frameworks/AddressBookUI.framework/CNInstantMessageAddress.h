/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNInstantMessageAddress : NSObject <NSCopying> {
    NSString *_service;
    NSString *_username;
}

@property (readonly, copy) NSString *service;
@property (readonly, copy) NSString *username;

+ (id)instantMessageAddressWithUsername:(id)arg1 service:(id)arg2;

- (id)addressDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithUsername:(id)arg1 service:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)service;
- (id)username;

@end
