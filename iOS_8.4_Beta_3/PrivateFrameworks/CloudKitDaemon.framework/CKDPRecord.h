/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecord : PBCodable <NSCopying> {
    NSMutableArray *_conflictLoserEtags;
    CKDPIdentifier *_createdBy;
    NSString *_etag;
    NSMutableArray *_fields;
    struct { 
        unsigned int permission : 1; 
    } _has;
    CKDPIdentifier *_modifiedBy;
    NSString *_modifiedByDevice;
    int _permission;
    NSMutableArray *_pluginFields;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPShareIdentifier *_shareId;
    CKDPDateStatistics *_timeStatistics;
    CKDPRecordType *_type;
}

@property (nonatomic, retain) NSMutableArray *conflictLoserEtags;
@property (nonatomic, retain) CKDPIdentifier *createdBy;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSMutableArray *fields;
@property (nonatomic, readonly) bool hasCreatedBy;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasModifiedBy;
@property (nonatomic, readonly) bool hasModifiedByDevice;
@property (nonatomic) bool hasPermission;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, readonly) bool hasTimeStatistics;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) CKDPIdentifier *modifiedBy;
@property (nonatomic, retain) NSString *modifiedByDevice;
@property (nonatomic) int permission;
@property (nonatomic, retain) NSMutableArray *pluginFields;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) CKDPDateStatistics *timeStatistics;
@property (nonatomic, retain) CKDPRecordType *type;

+ (id)recordFromData:(id)arg1;

- (void).cxx_destruct;
- (void)_inflateFieldsFromData:(id)arg1;
- (void)addConflictLoserEtags:(id)arg1;
- (void)addFields:(id)arg1;
- (void)addPluginFields:(id)arg1;
- (void)clearConflictLoserEtags;
- (void)clearFields;
- (void)clearPluginFields;
- (id)conflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLoserEtagsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdBy;
- (id)dataRepresentation;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (id)fieldData;
- (id)fieldForKey:(id)arg1;
- (id)fields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (bool)hasCreatedBy;
- (bool)hasEtag;
- (bool)hasModifiedBy;
- (bool)hasModifiedByDevice;
- (bool)hasPermission;
- (bool)hasProtectionInfo;
- (bool)hasRecordIdentifier;
- (bool)hasShareId;
- (bool)hasTimeStatistics;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedBy;
- (id)modifiedByDevice;
- (int)permission;
- (id)pluginFields;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pluginFieldsCount;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setConflictLoserEtags:(id)arg1;
- (void)setCreatedBy:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setHasPermission:(bool)arg1;
- (void)setModifiedBy:(id)arg1;
- (void)setModifiedByDevice:(id)arg1;
- (void)setPermission:(int)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setShareId:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (void)setType:(id)arg1;
- (id)shareId;
- (id)timeStatistics;
- (id)type;
- (void)writeTo:(id)arg1;

@end
