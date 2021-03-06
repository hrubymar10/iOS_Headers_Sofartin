/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHomeKitEvent : PBCodable <NSCopying> {
    unsigned int _eventType;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property(assign,readwrite) unsigned int eventType;
@property(assign,retain) NSString * guid;
@property(assign,readwrite) bool hasEventType;
@property(assign,readonly) bool hasGuid;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (id)guid;
- (bool)hasEventType;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
