/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYMessageHeader : PBCodable <NSCopying> {
    SYPeer *_sender;
    unsigned long long _sequenceNumber;
    SYVectorClock *_state;
    double _timestamp;
    unsigned int _version;
}

@property(assign,retain) SYPeer * sender;
@property(assign,readwrite) unsigned long long sequenceNumber;
@property(assign,retain) SYVectorClock * state;
@property(assign,readwrite) double timestamp;
@property(assign,readwrite) unsigned int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sender;
- (unsigned long long)sequenceNumber;
- (void)setSender:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)state;
- (double)timestamp;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end