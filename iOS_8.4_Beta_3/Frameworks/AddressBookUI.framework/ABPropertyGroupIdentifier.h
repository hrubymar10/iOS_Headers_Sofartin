/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupIdentifier : NSObject <NSCopying> {
    void *_context;
    int _property;
}

@property(assign,readonly) void* context;
@property(assign,readonly) int property;

+ (id)propertyGroupIdentifierWithProperty:(int)arg1 context:(void*)arg2;

- (void*)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(int)arg1 context:(void*)arg2;
- (bool)isEqual:(id)arg1;
- (int)property;

@end