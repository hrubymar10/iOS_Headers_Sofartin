/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltUIBuildFail : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSString *_sectionid;
    unsigned long long _timestamp;
}

@property(assign,readonly) bool hasSectionid;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,retain) NSString * sectionid;
@property(assign,readwrite) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionid;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionid;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSectionid:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
