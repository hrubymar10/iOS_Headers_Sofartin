/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignEntityKey *_foreignEntityKey;
    NSSQLForeignKey *_foreignKey;
    NSSQLForeignOrderKey *_foreignOrderKey;
    bool _isVirtual;
    unsigned int _slot;
}

- (void)_setForeignOrderKey:(id)arg1;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)foreignEntityKey;
- (id)foreignKey;
- (id)foreignOrderKey;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3;
- (bool)isOptional;
- (bool)isVirtual;
- (unsigned int)slot;

@end
