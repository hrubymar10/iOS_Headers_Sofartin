/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying> {
    NSMutableArray *_containerPrivacySettings;
}

@property(assign,retain) NSMutableArray * containerPrivacySettings;

- (void).cxx_destruct;
- (void)addContainerPrivacySettings:(id)arg1;
- (void)clearContainerPrivacySettings;
- (id)containerPrivacySettings;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerPrivacySettingsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerPrivacySettings:(id)arg1;
- (void)writeTo:(id)arg1;

@end