/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int _audioOnly;
    unsigned int _authMs;
    unsigned int _bitrate;
    unsigned int _bonjourMs;
    unsigned int _connectMs;
    unsigned int _duration;
    unsigned long long _fileBytes;
    struct { 
        unsigned int fileBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int authMs : 1; 
        unsigned int bitrate : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int duration : 1; 
        unsigned int infoMs : 1; 
        unsigned int postAuthMs : 1; 
        unsigned int secureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
    } _has;
    unsigned int _infoMs;
    unsigned int _postAuthMs;
    unsigned int _secureConnectionMs;
    NSString *_serverModel;
    NSString *_serverVersion;
    NSString *_sessionUUID;
    int _status;
    unsigned long long _timestamp;
    unsigned int _transportType;
    unsigned int _type;
}

@property(assign,readwrite) unsigned int audioOnly;
@property(assign,readwrite) unsigned int authMs;
@property(assign,readwrite) unsigned int bitrate;
@property(assign,readwrite) unsigned int bonjourMs;
@property(assign,readwrite) unsigned int connectMs;
@property(assign,readwrite) unsigned int duration;
@property(assign,readwrite) unsigned long long fileBytes;
@property(assign,readwrite) bool hasAudioOnly;
@property(assign,readwrite) bool hasAuthMs;
@property(assign,readwrite) bool hasBitrate;
@property(assign,readwrite) bool hasBonjourMs;
@property(assign,readwrite) bool hasConnectMs;
@property(assign,readwrite) bool hasDuration;
@property(assign,readwrite) bool hasFileBytes;
@property(assign,readwrite) bool hasInfoMs;
@property(assign,readwrite) bool hasPostAuthMs;
@property(assign,readwrite) bool hasSecureConnectionMs;
@property(assign,readonly) bool hasServerModel;
@property(assign,readonly) bool hasServerVersion;
@property(assign,readonly) bool hasSessionUUID;
@property(assign,readwrite) bool hasStatus;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTransportType;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) unsigned int infoMs;
@property(assign,readwrite) unsigned int postAuthMs;
@property(assign,readwrite) unsigned int secureConnectionMs;
@property(assign,retain) NSString * serverModel;
@property(assign,retain) NSString * serverVersion;
@property(assign,retain) NSString * sessionUUID;
@property(assign,readwrite) int status;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int transportType;
@property(assign,readwrite) unsigned int type;

- (unsigned int)audioOnly;
- (unsigned int)authMs;
- (unsigned int)bitrate;
- (unsigned int)bonjourMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned long long)fileBytes;
- (bool)hasAudioOnly;
- (bool)hasAuthMs;
- (bool)hasBitrate;
- (bool)hasBonjourMs;
- (bool)hasConnectMs;
- (bool)hasDuration;
- (bool)hasFileBytes;
- (bool)hasInfoMs;
- (bool)hasPostAuthMs;
- (bool)hasSecureConnectionMs;
- (bool)hasServerModel;
- (bool)hasServerVersion;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)infoMs;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)postAuthMs;
- (bool)readFrom:(id)arg1;
- (unsigned int)secureConnectionMs;
- (id)serverModel;
- (id)serverVersion;
- (id)sessionUUID;
- (void)setAudioOnly:(unsigned int)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (void)setBitrate:(unsigned int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setFileBytes:(unsigned long long)arg1;
- (void)setHasAudioOnly:(bool)arg1;
- (void)setHasAuthMs:(bool)arg1;
- (void)setHasBitrate:(bool)arg1;
- (void)setHasBonjourMs:(bool)arg1;
- (void)setHasConnectMs:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFileBytes:(bool)arg1;
- (void)setHasInfoMs:(bool)arg1;
- (void)setHasPostAuthMs:(bool)arg1;
- (void)setHasSecureConnectionMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setInfoMs:(unsigned int)arg1;
- (void)setPostAuthMs:(unsigned int)arg1;
- (void)setSecureConnectionMs:(unsigned int)arg1;
- (void)setServerModel:(id)arg1;
- (void)setServerVersion:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end