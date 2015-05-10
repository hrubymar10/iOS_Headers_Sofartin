/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectRelation : NSObject {
    bool _dirty;
    NSString *_inverseName;
    bool _loaded;
    EKObject *_owner;
    NSString *_relationName;
}

@property(assign,readonly) NSString * inverseName;
@property(assign,readonly) EKObject * owner;
@property(assign,readonly) NSString * relationName;

- (void)_addRelatedObject:(id)arg1 setInverse:(bool)arg2 dirty:(bool)arg3;
- (void)_removeRelatedObject:(id)arg1 setInverse:(bool)arg2 dirty:(bool)arg3;
- (id)committedValue;
- (void)dealloc;
- (void)didCommit;
- (unsigned long long)hash;
- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;
- (id)inverseName;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isWeak;
- (id)owner;
- (void)refresh;
- (void)relatedObjectDidChange;
- (id)relationName;
- (void)reset;
- (void)rollback;
- (void)updatePersistentObject;
- (bool)validate:(id*)arg1;

@end