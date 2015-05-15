/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlaySlideshowSessionStartedOnServer : PBCodable <NSCopying> {
    NSString *_clientModel;
    NSString *_clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int repeat : 1; 
        unsigned int slideMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    } _has;
    unsigned int _repeat;
    NSString *_sessionUUID;
    unsigned int _slideMs;
    int _status;
    NSString *_theme;
    unsigned long long _timestamp;
    NSString *_transition;
    unsigned int _transportType;
}

@property(assign,retain) NSString * clientModel;
@property(assign,retain) NSString * clientVersion;
@property(assign,readonly) bool hasClientModel;
@property(assign,readonly) bool hasClientVersion;
@property(assign,readwrite) bool hasRepeat;
@property(assign,readonly) bool hasSessionUUID;
@property(assign,readwrite) bool hasSlideMs;
@property(assign,readwrite) bool hasStatus;
@property(assign,readonly) bool hasTheme;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readonly) bool hasTransition;
@property(assign,readwrite) bool hasTransportType;
@property(assign,readwrite) unsigned int repeat;
@property(assign,retain) NSString * sessionUUID;
@property(assign,readwrite) unsigned int slideMs;
@property(assign,readwrite) int status;
@property(assign,retain) NSString * theme;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,retain) NSString * transition;
@property(assign,readwrite) unsigned int transportType;

- (id)clientModel;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientModel;
- (bool)hasClientVersion;
- (bool)hasRepeat;
- (bool)hasSessionUUID;
- (bool)hasSlideMs;
- (bool)hasStatus;
- (bool)hasTheme;
- (bool)hasTimestamp;
- (bool)hasTransition;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)repeat;
- (id)sessionUUID;
- (void)setClientModel:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasRepeat:(bool)arg1;
- (void)setHasSlideMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlideMs:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTheme:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransition:(id)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned int)slideMs;
- (int)status;
- (id)theme;
- (unsigned long long)timestamp;
- (id)transition;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
