/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxLeAddServiceResult : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int result : 1; 
    } _has;
    unsigned int _result;
    NSString *_resultString;
    NSString *_serviceUUID;
    NSString *_sessionId;
    unsigned long long _timestamp;
}

@property(assign,readwrite) bool hasResult;
@property(assign,readonly) bool hasResultString;
@property(assign,readonly) bool hasServiceUUID;
@property(assign,readonly) bool hasSessionId;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) unsigned int result;
@property(assign,retain) NSString * resultString;
@property(assign,retain) NSString * serviceUUID;
@property(assign,retain) NSString * sessionId;
@property(assign,readwrite) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResult;
- (bool)hasResultString;
- (bool)hasServiceUUID;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)result;
- (id)resultString;
- (id)serviceUUID;
- (id)sessionId;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setResultString:(id)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
