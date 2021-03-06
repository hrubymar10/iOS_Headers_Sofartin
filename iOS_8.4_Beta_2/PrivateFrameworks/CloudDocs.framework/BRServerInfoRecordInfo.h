/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    unsigned long long _bounceNo;
    NSData *_encryptedBasename;
    NSString *_etag;
    NSString *_extension;
    struct { 
        unsigned int bounceNo : 1; 
    } _has;
    NSString *_recordID;
    NSData *_recordProtectionInfo;
    NSString *_zoneName;
    NSData *_zoneProtectionInfo;
}

@property(assign,readwrite) unsigned long long bounceNo;
@property(assign,retain) NSData * encryptedBasename;
@property(assign,retain) NSString * etag;
@property(assign,retain) NSString * extension;
@property(assign,readwrite) bool hasBounceNo;
@property(assign,readonly) bool hasEncryptedBasename;
@property(assign,readonly) bool hasEtag;
@property(assign,readonly) bool hasExtension;
@property(assign,readonly) bool hasRecordID;
@property(assign,readonly) bool hasRecordProtectionInfo;
@property(assign,readonly) bool hasZoneName;
@property(assign,readonly) bool hasZoneProtectionInfo;
@property(assign,retain) NSString * recordID;
@property(assign,retain) NSData * recordProtectionInfo;
@property(assign,retain) NSString * zoneName;
@property(assign,retain) NSData * zoneProtectionInfo;

- (unsigned long long)bounceNo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedBasename;
- (id)etag;
- (id)extension;
- (bool)hasBounceNo;
- (bool)hasEncryptedBasename;
- (bool)hasEtag;
- (bool)hasExtension;
- (bool)hasRecordID;
- (bool)hasRecordProtectionInfo;
- (bool)hasZoneName;
- (bool)hasZoneProtectionInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)recordProtectionInfo;
- (void)setBounceNo:(unsigned long long)arg1;
- (void)setEncryptedBasename:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setHasBounceNo:(bool)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)setZoneProtectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneName;
- (id)zoneProtectionInfo;

@end
