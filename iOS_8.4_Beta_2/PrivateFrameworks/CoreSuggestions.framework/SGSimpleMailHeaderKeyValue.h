/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleMailHeaderKeyValue : NSObject <NSCopying, NSSecureCoding> {
    NSString *_key;
    NSString *_value;
}

@property(assign,readonly) NSString * key;
@property(assign,readonly) NSString * value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSimpleMailHeaderKeyValue:(id)arg1;
- (id)key;
- (id)value;

@end
