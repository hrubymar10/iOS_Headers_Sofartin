/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int _audioCompressionType;
    unsigned int _bonjourMs;
    unsigned int _configMs;
    unsigned int _connectMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int configMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int prepareMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    } _has;
    unsigned int _prepareMs;
    NSString *_sessionUUID;
    int _status;
    unsigned long long _timestamp;
    unsigned int _transportType;
}

@property(assign,readwrite) unsigned int audioCompressionType;
@property(assign,readwrite) unsigned int bonjourMs;
@property(assign,readwrite) unsigned int configMs;
@property(assign,readwrite) unsigned int connectMs;
@property(assign,readwrite) bool hasAudioCompressionType;
@property(assign,readwrite) bool hasBonjourMs;
@property(assign,readwrite) bool hasConfigMs;
@property(assign,readwrite) bool hasConnectMs;
@property(assign,readwrite) bool hasPrepareMs;
@property(assign,readonly) bool hasSessionUUID;
@property(assign,readwrite) bool hasStatus;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTransportType;
@property(assign,readwrite) unsigned int prepareMs;
@property(assign,retain) NSString * sessionUUID;
@property(assign,readwrite) int status;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int transportType;

- (unsigned int)audioCompressionType;
- (unsigned int)bonjourMs;
- (unsigned int)configMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioCompressionType;
- (bool)hasBonjourMs;
- (bool)hasConfigMs;
- (bool)hasConnectMs;
- (bool)hasPrepareMs;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)prepareMs;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConfigMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setHasAudioCompressionType:(bool)arg1;
- (void)setHasBonjourMs:(bool)arg1;
- (void)setHasConfigMs:(bool)arg1;
- (void)setHasConnectMs:(bool)arg1;
- (void)setHasPrepareMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setPrepareMs:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
