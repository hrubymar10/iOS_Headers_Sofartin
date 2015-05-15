/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationAttributes : NSObject <NSCopying> {
    NSDictionary *mAttributes;
    NSString *mEffect;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *effect;

+ (id)attributesWithEffect:(id)arg1 attributes:(id)arg2;
+ (bool)customAttributeKeyIsValid:(id)arg1;
+ (id)supportedCustomAttributes;

- (id)attributes;
- (id)attributesAdjustedForTheme:(id)arg1;
- (id)attributesByAddingAttributesFromDictionary:(id)arg1;
- (id)attributesByAddingMissingAttributesFromDictionary:(id)arg1;
- (id)attributesByChangingEffectToEffect:(id)arg1;
- (id)attributesByRemovingAttributeForKey:(id)arg1;
- (id)attributesBySettingValue:(id)arg1 forAttributeKey:(id)arg2;
- (id)attributesByUpdatingThemeCurveNamesWithOldToNewCurveNameMap:(id)arg1;
- (bool)containsAttributeForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)effect;
- (unsigned long long)hash;
- (id)initWithEffect:(id)arg1 attributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)p_curveForNameKey:(id)arg1 forTheme:(id)arg2;
- (id)valueForAttributeKey:(id)arg1;

@end
