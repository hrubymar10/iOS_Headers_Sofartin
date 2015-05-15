/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSwitch : NSObject <NSSecureCoding> {
    long long _action;
    long long _buttonNumber;
    long long _headSwitch;
    unsigned short _keyCode;
    NSString *_manufacturerName;
    NSString *_name;
    NSString *_productName;
    struct NSString { Class x1; } *_source;
    struct NSString { Class x1; } *_type;
    NSUUID *_uuid;
}

@property(assign,readwrite) long long action;
@property(assign,readwrite) long long buttonNumber;
@property(assign,readwrite) long long headSwitch;
@property(assign,readwrite) unsigned short keyCode;
@property(assign,copy) NSString * manufacturerName;
@property(assign,copy) NSString * name;
@property(assign,copy) NSString * productName;
@property(assign,retain) NSString * source;
@property(assign,retain) NSString * type;
@property(assign,retain) NSUUID * uuid;

+ (bool)supportsSecureCoding;
+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString { Class x1; }*)arg3 type:(struct NSString { Class x1; }*)arg4;

- (long long)action;
- (long long)buttonNumber;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)headSwitch;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString { Class x1; }*)arg3 type:(struct NSString { Class x1; }*)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)keyCode;
- (id)manufacturerName;
- (id)name;
- (id)productName;
- (void)setAction:(long long)arg1;
- (void)setButtonNumber:(long long)arg1;
- (void)setHeadSwitch:(long long)arg1;
- (void)setKeyCode:(unsigned short)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setSource:(struct NSString { Class x1; }*)arg1;
- (void)setType:(struct NSString { Class x1; }*)arg1;
- (void)setUuid:(id)arg1;
- (struct NSString { Class x1; }*)source;
- (struct NSString { Class x1; }*)type;
- (id)uuid;

@end
