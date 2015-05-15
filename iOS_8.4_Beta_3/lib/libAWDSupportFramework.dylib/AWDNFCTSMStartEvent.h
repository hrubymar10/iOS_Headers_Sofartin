/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCTSMStartEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int idxTableAvail : 1; 
        unsigned int persistentAvail : 1; 
        unsigned int transientDeselectAvail : 1; 
        unsigned int transientResetAvail : 1; 
    } _has;
    unsigned int _idxTableAvail;
    unsigned int _persistentAvail;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    unsigned int _transientDeselectAvail;
    unsigned int _transientResetAvail;
    NSString *_url;
    NSData *_uuidReference;
}

@property(assign,readwrite) bool hasIdxTableAvail;
@property(assign,readwrite) bool hasPersistentAvail;
@property(assign,readwrite) bool hasTimeDeltaFromReference;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTransientDeselectAvail;
@property(assign,readwrite) bool hasTransientResetAvail;
@property(assign,readonly) bool hasUrl;
@property(assign,readonly) bool hasUuidReference;
@property(assign,readwrite) unsigned int idxTableAvail;
@property(assign,readwrite) unsigned int persistentAvail;
@property(assign,readwrite) unsigned long long timeDeltaFromReference;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int transientDeselectAvail;
@property(assign,readwrite) unsigned int transientResetAvail;
@property(assign,retain) NSString * url;
@property(assign,retain) NSData * uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdxTableAvail;
- (bool)hasPersistentAvail;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasTransientDeselectAvail;
- (bool)hasTransientResetAvail;
- (bool)hasUrl;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (unsigned int)idxTableAvail;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)persistentAvail;
- (bool)readFrom:(id)arg1;
- (void)setHasIdxTableAvail:(bool)arg1;
- (void)setHasPersistentAvail:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransientDeselectAvail:(bool)arg1;
- (void)setHasTransientResetAvail:(bool)arg1;
- (void)setIdxTableAvail:(unsigned int)arg1;
- (void)setPersistentAvail:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransientDeselectAvail:(unsigned int)arg1;
- (void)setTransientResetAvail:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (unsigned int)transientDeselectAvail;
- (unsigned int)transientResetAvail;
- (id)url;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end