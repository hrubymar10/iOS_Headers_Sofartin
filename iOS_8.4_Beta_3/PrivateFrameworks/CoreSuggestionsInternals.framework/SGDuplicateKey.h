/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDuplicateKey : NSObject {
    NSObject<SGEntityKey> *_entityKey;
    long long _entityType;
    SGDuplicateKey *_parentKey;
}

@property (nonatomic, readonly) NSString *compositeHash;
@property (nonatomic, readonly) NSObject<SGEntityKey> *entityKey;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) SGDuplicateKey *parentKey;

+ (id)duplicateKeyForCuratedContactWithExternalId:(int)arg1;
+ (id)duplicateKeyForCuratedEventWithExternalID:(id)arg1;
+ (id)duplicateKeyForEmailWithSource:(id)arg1 messageId:(id)arg2;
+ (id)duplicateKeyForPseudoContactWithIdentity:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForPseudoEventWithDomain:(id)arg1 groupId:(id)arg2 parentKey:(id)arg3;

- (void).cxx_destruct;
- (id)compositeHash;
- (id)contactDetailKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedContactKey;
- (id)curatedEventKey;
- (id)description;
- (id)emailKey;
- (id)entityKey;
- (long long)entityType;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithEntityKey:(id)arg1 entityType:(long long)arg2 parentKey:(id)arg3;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSerializedEntityKey:(id)arg1 entityType:(long long)arg2 serializedParentKey:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDuplicateKey:(id)arg1;
- (id)parentKey;
- (id)pseudoContactKey;
- (id)pseudoEventKey;
- (id)serialize;

@end
