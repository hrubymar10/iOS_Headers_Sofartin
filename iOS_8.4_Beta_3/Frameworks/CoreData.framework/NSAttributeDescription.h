/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAttributeDescription : NSPropertyDescription {
    struct __attributeDescriptionFlags { 
        unsigned int _hasMaxValueInExtraIvars : 1; 
        unsigned int _hasMinValueInExtraIvars : 1; 
        unsigned int _storeBinaryDataExternally : 1; 
        unsigned int _reservedAttributeDescription : 29; 
    } _attributeDescriptionFlags;
    Class _attributeValueClass;
    NSString *_attributeValueClassName;
    id _defaultValue;
    unsigned long long _type;
    NSString *_valueTransformerName;
}

@property(assign,readwrite) bool allowsExternalBinaryDataStorage;
@property(assign,readwrite) unsigned long long attributeType;
@property(assign,copy) NSString * attributeValueClassName;
@property(assign,retain) id defaultValue;
@property(assign,copy) NSString * valueTransformerName;
@property(assign,copy) NSData * versionHash;

+ (id)_classNameForType:(unsigned long long)arg1;
+ (void)initialize;

- (Class)_attributeValueClass;
- (long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (bool)_comparePredicatesAndWarnings:(id)arg1;
- (bool)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3;
- (id)_initWithType:(unsigned long long)arg1;
- (bool)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned long long)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (bool)allowsExternalBinaryDataStorage;
- (unsigned long long)attributeType;
- (id)attributeValueClassName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIndexed;
- (void)setAllowsExternalBinaryDataStorage:(bool)arg1;
- (void)setAttributeType:(unsigned long long)arg1;
- (void)setAttributeValueClassName:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setStoresBinaryDataExternally:(bool)arg1;
- (void)setValueTransformerName:(id)arg1;
- (bool)storesBinaryDataExternally;
- (id)validationPredicates;
- (id)validationWarnings;
- (id)valueTransformerName;
- (id)versionHash;

@end
