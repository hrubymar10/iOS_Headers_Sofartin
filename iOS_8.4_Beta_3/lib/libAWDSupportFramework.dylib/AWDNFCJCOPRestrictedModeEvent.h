/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {
    bool _contactless;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int contactless : 1; 
    } _has;
    NSData *_log;
    unsigned long long _timestamp;
}

@property (nonatomic) bool contactless;
@property (nonatomic) bool hasContactless;
@property (nonatomic, readonly) bool hasLog;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSData *log;
@property (nonatomic) unsigned long long timestamp;

- (bool)contactless;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactless;
- (bool)hasLog;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)log;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactless:(bool)arg1;
- (void)setHasContactless:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
