/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPropertyProxy : NSObject {
    CNContact *_contact;
    int _identifier;
    NSString *_property;
}

@property(assign,readwrite) CNContact * contact;
@property(assign,readwrite) int identifier;
@property(assign,readwrite) NSString * property;

+ (id)proxyForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(int)arg3;

- (id)contact;
- (int)identifier;
- (id)property;
- (void)setContact:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end