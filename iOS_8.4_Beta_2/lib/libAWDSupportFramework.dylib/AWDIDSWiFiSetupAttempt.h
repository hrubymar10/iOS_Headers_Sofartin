/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWiFiSetupAttempt : PBCodable <NSCopying> {
    NSString *_client;
    unsigned long long _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int result : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    } _has;
    unsigned long long _result;
    unsigned long long _timestamp;
    unsigned long long _type;
}

@property(assign,retain) NSString * client;
@property(assign,readwrite) unsigned long long duration;
@property(assign,readonly) bool hasClient;
@property(assign,readwrite) bool hasDuration;
@property(assign,readwrite) bool hasResult;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) unsigned long long result;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned long long type;

- (id)client;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasClient;
- (bool)hasDuration;
- (bool)hasResult;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)result;
- (void)setClient:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setResult:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)type;
- (void)writeTo:(id)arg1;

@end