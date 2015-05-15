/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSetSectionInfoRequest : PBRequest <NSCopying> {
    BLTPBSectionInfo *_sectionInfo;
}

@property (nonatomic, readonly) bool hasSectionInfo;
@property (nonatomic, retain) BLTPBSectionInfo *sectionInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
