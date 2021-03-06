/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSEntityMapping : NSObject {
    NSMutableArray *_attributeMappings;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    struct __entityMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedEntityMapping : 31; 
    } _entityMappingFlags;
    NSString *_entityMigrationPolicyClassName;
    unsigned long long _mappingType;
    NSDictionary *_mappingsByName;
    NSString *_name;
    NSMutableArray *_relationshipMappings;
    void *_reserved;
    void *_reserved1;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
}

@property(assign,retain) NSArray * attributeMappings;
@property(assign,copy) NSString * destinationEntityName;
@property(assign,copy) NSData * destinationEntityVersionHash;
@property(assign,copy) NSString * entityMigrationPolicyClassName;
@property(assign,readwrite) unsigned long long mappingType;
@property(assign,copy) NSString * name;
@property(assign,retain) NSArray * relationshipMappings;
@property(assign,copy) NSString * sourceEntityName;
@property(assign,copy) NSData * sourceEntityVersionHash;
@property(assign,retain) NSExpression * sourceExpression;
@property(assign,retain) NSDictionary * userInfo;

+ (void)initialize;

- (void)_addAttributeMapping:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (bool)_hasInferredMappingNeedingValidation;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (id)_mappingsByName;
- (id)_migrationPolicy;
- (void)_setIsEditable:(bool)arg1;
- (void)_throwIfNotEditable;
- (id)attributeMappings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationEntityName;
- (id)destinationEntityVersionHash;
- (void)encodeWithCoder:(id)arg1;
- (id)entityMigrationPolicyClassName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mappingType;
- (id)name;
- (id)relationshipMappings;
- (void)setAttributeMappings:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setDestinationEntityVersionHash:(id)arg1;
- (void)setEntityMigrationPolicyClassName:(id)arg1;
- (void)setMappingType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRelationshipMappings:(id)arg1;
- (void)setSourceEntityName:(id)arg1;
- (void)setSourceEntityVersionHash:(id)arg1;
- (void)setSourceExpression:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sourceEntityName;
- (id)sourceEntityVersionHash;
- (id)sourceExpression;
- (id)userInfo;

@end
