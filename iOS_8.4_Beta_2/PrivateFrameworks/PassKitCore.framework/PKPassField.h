/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassField : NSObject <NSSecureCoding> {
    NSString *_changeMessage;
    unsigned long long _dataDetectorTypes;
    NSString *_key;
    NSString *_label;
    long long _textAlignment;
    long long _type;
    id _unformattedValue;
    NSString *_value;
}

@property(assign,copy) NSString * changeMessage;
@property(assign,readwrite) unsigned long long dataDetectorTypes;
@property(assign,copy) NSString * key;
@property(assign,copy) NSString * label;
@property(assign,readwrite) long long textAlignment;
@property(assign,readwrite) long long type;
@property(assign,copy) id unformattedValue;
@property(assign,readonly) NSString * value;

+ (bool)supportsSecureCoding;

- (id)changeMessage;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)flushCachedValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (void)setChangeMessage:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUnformattedValue:(id)arg1;
- (long long)textAlignment;
- (long long)type;
- (id)unformattedValue;
- (id)value;

@end