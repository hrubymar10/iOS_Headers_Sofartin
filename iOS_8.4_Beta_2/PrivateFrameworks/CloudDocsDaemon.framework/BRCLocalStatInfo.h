/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCLocalStatInfo : BRCStatInfo {
    NSString *_bouncedName;
    NSNumber *_documentID;
    NSNumber *_fileID;
    BRCGenerationID *_generationID;
    NSString *_localName;
    NSNumber *_processingStamp;
    NSNumber *_stagedFileID;
    unsigned int _stagedGenerationID;
}

@property(assign,readonly) NSString * bouncedName;
@property(assign,readonly) NSNumber * documentID;
@property(assign,readonly) NSNumber * fileID;
@property(assign,readonly) NSNumber * fileObjectID;
@property(assign,readonly) BRCGenerationID * generationID;
@property(assign,readonly) NSString * localName;
@property(assign,readonly) NSNumber * lostStamp;
@property(assign,readonly) NSNumber * processingStamp;
@property(assign,readonly) NSNumber * stagedFileID;
@property(assign,readonly) NSNumber * stagedFileIDForDB;
@property(assign,readonly) unsigned int stagedGenerationID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearBouncedName;
- (void)_clearFileID;
- (void)_clearGenerationID;
- (void)_generatedBouncedFilename:(id)arg1;
- (void)_markAlmostDead;
- (void)_markClearedFromStage;
- (void)_markDead;
- (void)_markLiveFromStageAsFault:(bool)arg1;
- (void)_markLostAddingBackoffWithMode:(unsigned char)arg1 container:(id)arg2;
- (void)_markReserved;
- (void)_markStagedWithFileID:(id)arg1 generationID:(unsigned int)arg2 documentID:(id)arg3;
- (void)_migrateBouncedNameToLocalName;
- (void)_moveItemAsideWithUUIDString;
- (void)_setCKInfo:(id)arg1;
- (void)_setParentID:(id)arg1;
- (void)_updateMetadataFromFSAtPath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 isPackageFault:(bool)arg4;
- (void)_updateStatMeta:(id)arg1;
- (id)bouncedName;
- (bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (unsigned long long)diffAgainstLocalInfo:(id)arg1;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)fileID;
- (id)fileObjectID;
- (id)filename;
- (id)generationID;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalStatInfo:(id)arg1;
- (id)initWithRelativePath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3;
- (id)localName;
- (id)lostStamp;
- (id)processingStamp;
- (void)setFilename:(id)arg1;
- (void)setFilename:(id)arg1 forceRename:(bool)arg2;
- (id)stagedFileID;
- (id)stagedFileIDForDB;
- (unsigned int)stagedGenerationID;
- (void)updateFromFSAtPath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 isPackageFault:(bool)arg4;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 itemID:(id)arg2 parentID:(id)arg3 isPackageFault:(bool)arg4;

@end
