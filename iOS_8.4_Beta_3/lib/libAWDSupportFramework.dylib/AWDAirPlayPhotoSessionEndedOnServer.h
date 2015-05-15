/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlayPhotoSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned int _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int maxBPS : 1; 
        unsigned int maxPhotoBytes : 1; 
        unsigned int minBPS : 1; 
        unsigned int minPhotoBytes : 1; 
        unsigned int reason : 1; 
        unsigned int totalPhotos : 1; 
    } _has;
    unsigned int _maxBPS;
    unsigned int _maxPhotoBytes;
    unsigned int _minBPS;
    unsigned int _minPhotoBytes;
    int _reason;
    NSString *_sessionUUID;
    unsigned long long _timestamp;
    unsigned int _totalPhotos;
}

@property(assign,readwrite) unsigned int duration;
@property(assign,readwrite) bool hasDuration;
@property(assign,readwrite) bool hasMaxBPS;
@property(assign,readwrite) bool hasMaxPhotoBytes;
@property(assign,readwrite) bool hasMinBPS;
@property(assign,readwrite) bool hasMinPhotoBytes;
@property(assign,readwrite) bool hasReason;
@property(assign,readonly) bool hasSessionUUID;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTotalPhotos;
@property(assign,readwrite) unsigned int maxBPS;
@property(assign,readwrite) unsigned int maxPhotoBytes;
@property(assign,readwrite) unsigned int minBPS;
@property(assign,readwrite) unsigned int minPhotoBytes;
@property(assign,readwrite) int reason;
@property(assign,retain) NSString * sessionUUID;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int totalPhotos;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasMaxBPS;
- (bool)hasMaxPhotoBytes;
- (bool)hasMinBPS;
- (bool)hasMinPhotoBytes;
- (bool)hasReason;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (bool)hasTotalPhotos;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxBPS;
- (unsigned int)maxPhotoBytes;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minBPS;
- (unsigned int)minPhotoBytes;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)sessionUUID;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasMaxBPS:(bool)arg1;
- (void)setHasMaxPhotoBytes:(bool)arg1;
- (void)setHasMinBPS:(bool)arg1;
- (void)setHasMinPhotoBytes:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalPhotos:(bool)arg1;
- (void)setMaxBPS:(unsigned int)arg1;
- (void)setMaxPhotoBytes:(unsigned int)arg1;
- (void)setMinBPS:(unsigned int)arg1;
- (void)setMinPhotoBytes:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalPhotos:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalPhotos;
- (void)writeTo:(id)arg1;

@end
