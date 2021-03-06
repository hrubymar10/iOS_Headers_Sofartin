/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAppearanceCustomizableClassInfo : NSObject {
    NSString *_appearanceNodeKey;
    Class _customizableViewClass;
    Class _guideClass;
    unsigned long long _hash;
    bool _isCustomizableViewClassRoot;
    bool _isGuideClassRoot;
}

@property(assign,readonly) NSString * _appearanceNodeKey;
@property(assign,readonly) Class _customizableViewClass;
@property(assign,readonly) Class _guideClass;
@property(assign,readonly) unsigned long long _hash;

+ (id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;

- (id)_appearanceNodeKey;
- (Class)_customizableViewClass;
- (Class)_guideClass;
- (unsigned long long)_hash;
- (id)_superClassInfo;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
