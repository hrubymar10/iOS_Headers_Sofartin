/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString *_emailAddress;
    NSString *_name;
}

@property(assign,readonly) NSString * emailAddress;
@property(assign,readonly) NSString * name;

+ (id)namedEmailAddressWithFieldValue:(id)arg1;
+ (id)namedEmailAddressesWithFieldValues:(id)arg1;
+ (id)serializeAll:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEmailAddress:(id)arg1;
- (id)name;
- (id)serialized;

@end
