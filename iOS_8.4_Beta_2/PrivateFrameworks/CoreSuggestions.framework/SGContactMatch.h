/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding> {
    SGContact *_contact;
    long long _matchingFieldType;
}

@property(assign,readonly) SGContact * contact;
@property(assign,readonly) <SGObject> * matchingField;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactMatch:(id)arg1;
- (id)matchingField;

@end