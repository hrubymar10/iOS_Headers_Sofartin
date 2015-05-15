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

@property (nonatomic, readonly) NSString *_appearanceNodeKey;
@property (nonatomic, readonly) Class _customizableViewClass;
@property (nonatomic, readonly) Class _guideClass;
@property (nonatomic, readonly) unsigned long long _hash;

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
