/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHomeKitResult : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _characteristicTypes;
    unsigned int _duration;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int isClient : 1; 
        unsigned int resultCode : 1; 
        unsigned int resultType : 1; 
        unsigned int transportType : 1; 
    } _has;
    unsigned int _isClient;
    int _resultCode;
    unsigned int _resultType;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _serviceTypes;
    unsigned long long _timestamp;
    unsigned int _transportType;
}

@property(assign,readonly) unsigned int* characteristicTypes;
@property(assign,readonly) unsigned long long characteristicTypesCount;
@property(assign,readwrite) unsigned int duration;
@property(assign,retain) NSString * guid;
@property(assign,readwrite) bool hasDuration;
@property(assign,readonly) bool hasGuid;
@property(assign,readwrite) bool hasIsClient;
@property(assign,readwrite) bool hasResultCode;
@property(assign,readwrite) bool hasResultType;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTransportType;
@property(assign,readwrite) unsigned int isClient;
@property(assign,readwrite) int resultCode;
@property(assign,readwrite) unsigned int resultType;
@property(assign,readonly) unsigned int* serviceTypes;
@property(assign,readonly) unsigned long long serviceTypesCount;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int transportType;

- (void)addCharacteristicType:(unsigned int)arg1;
- (void)addServiceType:(unsigned int)arg1;
- (unsigned int)characteristicTypeAtIndex:(unsigned long long)arg1;
- (unsigned int*)characteristicTypes;
- (unsigned long long)characteristicTypesCount;
- (void)clearCharacteristicTypes;
- (void)clearServiceTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (id)guid;
- (bool)hasDuration;
- (bool)hasGuid;
- (bool)hasIsClient;
- (bool)hasResultCode;
- (bool)hasResultType;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (unsigned int)isClient;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultCode;
- (unsigned int)resultType;
- (unsigned int)serviceTypeAtIndex:(unsigned long long)arg1;
- (unsigned int*)serviceTypes;
- (unsigned long long)serviceTypesCount;
- (void)setCharacteristicTypes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDuration:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasIsClient:(bool)arg1;
- (void)setHasResultCode:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setIsClient:(unsigned int)arg1;
- (void)setResultCode:(int)arg1;
- (void)setResultType:(unsigned int)arg1;
- (void)setServiceTypes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
