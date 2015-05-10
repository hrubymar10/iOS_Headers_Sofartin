/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecord : NSObject <NSCopying, NSSecureCoding, PQLBindable> {
    NSMutableSet *_changedKeysSet;
    NSArray *_conflictLoserEtags;
    CKContainerID *_containerID;
    NSDate *_creationDate;
    CKRecordID *_creatorUserRecordID;
    NSString *_etag;
    CKShareID *_fakeShareID;
    bool _hasUpdatedShareID;
    bool _knownToServer;
    CKRecordID *_lastModifiedUserRecordID;
    NSDate *_modificationDate;
    NSString *_modifiedByDevice;
    NSMutableDictionary *_originalValues;
    long long _permission;
    NSDictionary *_pluginFields;
    NSString *_previousProtectionEtag;
    CKShareID *_previousShareID;
    NSData *_protectionData;
    NSString *_protectionEtag;
    CKRecordID *_recordID;
    NSString *_recordType;
    bool _serializeProtectionData;
    CKShareID *_shareID;
    NSString *_shareProtectionEtag;
    bool _trackChanges;
    NSMutableDictionary *_values;
    bool _wasCached;
    NSString *_zoneProtectionEtag;
}

@property(assign,readonly) NSData * brc_containerMetadataPropertiesData;
@property(assign,retain) NSSet * changedKeysSet;
@property(assign,retain) NSArray * conflictLoserEtags;
@property(assign,copy) CKContainerID * containerID;
@property(assign,readonly) bool containsAssetValues;
@property(assign,copy) NSDate * creationDate;
@property(assign,copy) CKRecordID * creatorUserRecordID;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * etag;
@property(assign,retain) CKShareID * fakeShareID;
@property(assign,readonly) bool hasEncryptedData;
@property(assign,readonly) bool hasModifiedEncryptedData;
@property(assign,readonly) bool hasModifiedPropertiesRequiringEncryption;
@property(assign,readonly) bool hasPropertiesRequiringEncryption;
@property(assign,readonly) bool hasUpdatedShareID;
@property(assign,readonly) unsigned long long hash;
@property(getter=isKnownToServer,assign,readwrite) bool knownToServer;
@property(assign,copy) CKRecordID * lastModifiedUserRecordID;
@property(assign,copy) NSDate * modificationDate;
@property(assign,copy) NSString * modifiedByDevice;
@property(assign,retain) NSDictionary * originalValues;
@property(assign,readwrite) long long permission;
@property(assign,copy) NSDictionary * pluginFields;
@property(assign,retain) NSString * previousProtectionEtag;
@property(assign,retain) CKShareID * previousShareID;
@property(assign,retain) NSData * protectionData;
@property(assign,retain) NSString * protectionEtag;
@property(assign,copy) NSString * recordChangeTag;
@property(assign,copy) CKRecordID * recordID;
@property(assign,copy) NSString * recordType;
@property(assign,readwrite) bool serializeProtectionData;
@property(assign,retain) CKShareID * shareID;
@property(assign,retain) NSString * shareProtectionEtag;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool trackChanges;
@property(assign,retain) NSDictionary * values;
@property(assign,readwrite) bool wasCached;
@property(assign,retain) NSString * zoneProtectionEtag;

+ (bool)accessInstanceVariablesDirectly;
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;
+ (id)brc_containerMetadataZoneID;
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)documentContentsRecordForItemID:(id)arg1 zoneID:(id)arg2;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_allStrings;
- (bool)_checkProperties:(bool)arg1 withValueCheckBlock:(id)arg2;
- (bool)_deserializeFilename:(id*)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (bool)_deserializeValue:(id*)arg1 forKey:(id)arg2 expectClass:(Class)arg3 allowNil:(bool)arg4 errorDescription:(id*)arg5;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateRecordName:(id)arg1;
- (void)_validateRecordValue:(id)arg1;
- (id)allKeys;
- (id)allTokens;
- (id)brc_containerMetadataIconNames;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataPropertiesData;
- (bool)brc_isInterestingRecordForSyncDown;
- (id)brc_oplockMergeEtag;
- (id)brc_updateDroppedReason;
- (id)changedKeys;
- (id)changedKeysSet;
- (id)conflictLoserEtags;
- (id)containerID;
- (bool)containsAssetValues;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creatorUserRecordID;
- (id)debugDescription;
- (id)description;
- (bool)deserializeAliasInfo:(id*)arg1 error:(id*)arg2;
- (bool)deserializeSharingOptions:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)deserializeStatInfo:(id*)arg1 itemID:(id)arg2 error:(id*)arg3;
- (bool)deserializeVersion:(id*)arg1 fakeStatInfo:(id*)arg2 error:(id*)arg3;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)fakeShareID;
- (bool)hasEncryptedData;
- (bool)hasModifiedEncryptedData;
- (bool)hasModifiedPropertiesRequiringEncryption;
- (bool)hasPropertiesRequiringEncryption;
- (bool)hasUpdatedShareID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (bool)isKnownToServer;
- (id)lastModifiedUserRecordID;
- (id)modificationDate;
- (id)modifiedByDevice;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (long long)permission;
- (id)pluginFields;
- (id)previousProtectionEtag;
- (id)previousShareID;
- (id)protectionData;
- (id)protectionEtag;
- (id)recordChangeTag;
- (id)recordID;
- (id)recordType;
- (void)resetChangedKeys;
- (id)safari_arrayForKey:(id)arg1;
- (bool)safari_boolForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_encryptedDataForKey:(id)arg1;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2;
- (void)serializeFilename:(id)arg1 forCreation:(bool)arg2 setExtension:(bool)arg3;
- (bool)serializeProtectionData;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(bool)arg4;
- (void)serializeSystemFields:(id)arg1;
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(bool)arg3;
- (void)setChangedKeysSet:(id)arg1;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreatorUserRecordID:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFakeShareID:(id)arg1;
- (void)setKnownToServer:(bool)arg1;
- (void)setLastModifiedUserRecordID:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOriginalValues:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setPreviousShareID:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setSerializeProtectionData:(bool)arg1;
- (void)setShareID:(id)arg1;
- (void)setShareProtectionEtag:(id)arg1;
- (void)setTrackChanges:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValues:(id)arg1;
- (void)setWasCached:(bool)arg1;
- (void)setZoneProtectionEtag:(id)arg1;
- (id)shareID;
- (id)shareProtectionEtag;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (bool)trackChanges;
- (id)valueForKey:(id)arg1;
- (id)values;
- (bool)wasCached;
- (id)zoneProtectionEtag;

@end
