/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateSetValue : CAStateElement {
    NSString *_keyPath;
    id _value;
}

@property(assign,copy) NSString * keyPath;
@property(assign,retain) id value;

- (id)CAMLTypeForKey:(id)arg1;
- (void)apply:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (bool)matches:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end