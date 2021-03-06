/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAForceField : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    bool _enabled;
    CAValueFunction *_function;
    CALayer *_layer;
    NSString *_name;
    void *_priv;
}

@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,retain) CAValueFunction * function;
@property(assign,retain) CALayer * layer;
@property(assign,copy) NSString * name;

+ (void)CAMLParserStartElement:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)forceField;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)function;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)layer;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setEnabled:(bool)arg1;
- (void)setFunction:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
