/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKObjCProperty : NSObject {
    Class _classHandle;
    unsigned long long _flags;
    NSMethodSignature *_getterMethodSignature;
    SEL _getterSelector;
    NSString *_getterSelectorName;
    NSString *_instanceVariableName;
    NSString *_name;
    NSMethodSignature *_setterMethodSignature;
    SEL _setterSelector;
    NSString *_setterSelectorName;
    CKObjCType *_type;
}

@property(assign,readonly) Class classHandle;
@property(assign,readonly) unsigned long long flags;
@property(assign,readonly) NSMethodSignature * getterMethodSignature;
@property(assign,readonly) SEL getterSelector;
@property(assign,readonly) NSString * getterSelectorName;
@property(assign,readonly) NSString * instanceVariableName;
@property(assign,readonly) NSString * name;
@property(assign,readonly) NSMethodSignature * setterMethodSignature;
@property(assign,readonly) SEL setterSelector;
@property(assign,readonly) NSString * setterSelectorName;
@property(assign,readonly) CKObjCType * type;

- (void).cxx_destruct;
- (Class)classHandle;
- (long long)compare:(id)arg1;
- (long long)compareToProperty:(id)arg1;
- (unsigned long long)flags;
- (id)getFromObject:(id)arg1;
- (id)getterMethodSignature;
- (SEL)getterSelector;
- (id)getterSelectorName;
- (id)initWithClass:(Class)arg1 property:(struct objc_property { }*)arg2;
- (id)instanceVariableName;
- (id)name;
- (void)setValue:(id)arg1 onObject:(id)arg2;
- (id)setterMethodSignature;
- (SEL)setterSelector;
- (id)setterSelectorName;
- (id)type;

@end
