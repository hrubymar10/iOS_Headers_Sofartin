/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelStatus : PBCodable <NSCopying> {
    bool _enabled;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int enabled : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property(assign,readwrite) bool enabled;
@property(assign,readwrite) bool hasEnabled;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasEnabled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
