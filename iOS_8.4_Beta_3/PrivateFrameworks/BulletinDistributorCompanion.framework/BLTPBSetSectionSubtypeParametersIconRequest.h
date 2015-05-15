/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSetSectionSubtypeParametersIconRequest : PBRequest <NSCopying> {
    bool _defaultSubtype;
    struct { 
        unsigned int subtypeID : 1; 
        unsigned int defaultSubtype : 1; 
    } _has;
    BLTPBSectionIcon *_icon;
    NSString *_sectionID;
    unsigned long long _subtypeID;
}

@property(assign,readwrite) bool defaultSubtype;
@property(assign,readwrite) bool hasDefaultSubtype;
@property(assign,readonly) bool hasIcon;
@property(assign,readonly) bool hasSectionID;
@property(assign,readwrite) bool hasSubtypeID;
@property(assign,retain) BLTPBSectionIcon * icon;
@property(assign,retain) NSString * sectionID;
@property(assign,readwrite) unsigned long long subtypeID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultSubtype;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultSubtype;
- (bool)hasIcon;
- (bool)hasSectionID;
- (bool)hasSubtypeID;
- (unsigned long long)hash;
- (id)icon;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionID;
- (void)setDefaultSubtype:(bool)arg1;
- (void)setHasDefaultSubtype:(bool)arg1;
- (void)setHasSubtypeID:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setSubtypeID:(unsigned long long)arg1;
- (unsigned long long)subtypeID;
- (void)writeTo:(id)arg1;

@end