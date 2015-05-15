/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNFCGeneralStatistic : PBCodable <NSCopying> {
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalAPNReceived : 1; 
        unsigned int totalCEEnable : 1; 
        unsigned int totalCardProvisioned : 1; 
        unsigned int totalFailureWithMissingTransactionEndEvent : 1; 
        unsigned int totalFailureWithTransactionEndEventErrors : 1; 
        unsigned int totalRestrictModeEntered : 1; 
        unsigned int totalTransactionEndEvent : 1; 
        unsigned int totalTransientDeactiveTimeout : 1; 
    } _has;
    unsigned long long _startTimestamp;
    unsigned long long _timestamp;
    unsigned int _totalAPNReceived;
    unsigned int _totalCEEnable;
    unsigned int _totalCardProvisioned;
    unsigned int _totalFailureWithMissingTransactionEndEvent;
    unsigned int _totalFailureWithTransactionEndEventErrors;
    unsigned int _totalRestrictModeEntered;
    unsigned int _totalTransactionEndEvent;
    unsigned int _totalTransientDeactiveTimeout;
}

@property(assign,readwrite) bool hasStartTimestamp;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTotalAPNReceived;
@property(assign,readwrite) bool hasTotalCEEnable;
@property(assign,readwrite) bool hasTotalCardProvisioned;
@property(assign,readwrite) bool hasTotalFailureWithMissingTransactionEndEvent;
@property(assign,readwrite) bool hasTotalFailureWithTransactionEndEventErrors;
@property(assign,readwrite) bool hasTotalRestrictModeEntered;
@property(assign,readwrite) bool hasTotalTransactionEndEvent;
@property(assign,readwrite) bool hasTotalTransientDeactiveTimeout;
@property(assign,readwrite) unsigned long long startTimestamp;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int totalAPNReceived;
@property(assign,readwrite) unsigned int totalCEEnable;
@property(assign,readwrite) unsigned int totalCardProvisioned;
@property(assign,readwrite) unsigned int totalFailureWithMissingTransactionEndEvent;
@property(assign,readwrite) unsigned int totalFailureWithTransactionEndEventErrors;
@property(assign,readwrite) unsigned int totalRestrictModeEntered;
@property(assign,readwrite) unsigned int totalTransactionEndEvent;
@property(assign,readwrite) unsigned int totalTransientDeactiveTimeout;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStartTimestamp;
- (bool)hasTimestamp;
- (bool)hasTotalAPNReceived;
- (bool)hasTotalCEEnable;
- (bool)hasTotalCardProvisioned;
- (bool)hasTotalFailureWithMissingTransactionEndEvent;
- (bool)hasTotalFailureWithTransactionEndEventErrors;
- (bool)hasTotalRestrictModeEntered;
- (bool)hasTotalTransactionEndEvent;
- (bool)hasTotalTransientDeactiveTimeout;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalAPNReceived:(bool)arg1;
- (void)setHasTotalCEEnable:(bool)arg1;
- (void)setHasTotalCardProvisioned:(bool)arg1;
- (void)setHasTotalFailureWithMissingTransactionEndEvent:(bool)arg1;
- (void)setHasTotalFailureWithTransactionEndEventErrors:(bool)arg1;
- (void)setHasTotalRestrictModeEntered:(bool)arg1;
- (void)setHasTotalTransactionEndEvent:(bool)arg1;
- (void)setHasTotalTransientDeactiveTimeout:(bool)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalAPNReceived:(unsigned int)arg1;
- (void)setTotalCEEnable:(unsigned int)arg1;
- (void)setTotalCardProvisioned:(unsigned int)arg1;
- (void)setTotalFailureWithMissingTransactionEndEvent:(unsigned int)arg1;
- (void)setTotalFailureWithTransactionEndEventErrors:(unsigned int)arg1;
- (void)setTotalRestrictModeEntered:(unsigned int)arg1;
- (void)setTotalTransactionEndEvent:(unsigned int)arg1;
- (void)setTotalTransientDeactiveTimeout:(unsigned int)arg1;
- (unsigned long long)startTimestamp;
- (unsigned long long)timestamp;
- (unsigned int)totalAPNReceived;
- (unsigned int)totalCEEnable;
- (unsigned int)totalCardProvisioned;
- (unsigned int)totalFailureWithMissingTransactionEndEvent;
- (unsigned int)totalFailureWithTransactionEndEventErrors;
- (unsigned int)totalRestrictModeEntered;
- (unsigned int)totalTransactionEndEvent;
- (unsigned int)totalTransientDeactiveTimeout;
- (void)writeTo:(id)arg1;

@end