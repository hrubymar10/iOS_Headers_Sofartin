/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying> {
    bool _analyzingSuccessfulRetry;
    unsigned long long _gatewayPingDuration;
    unsigned int _gatewayPingsDropped;
    unsigned int _gatewayPingsSent;
    int _gatewayStatus;
    struct { 
        unsigned int gatewayPingDuration : 1; 
        unsigned int knownURLLoadDuration : 1; 
        unsigned int siriSaltURLLoadDuration : 1; 
        unsigned int siriURLLoadDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int gatewayPingsDropped : 1; 
        unsigned int gatewayPingsSent : 1; 
        unsigned int gatewayStatus : 1; 
        unsigned int interface : 1; 
        unsigned int sendBufferBytesRemaining : 1; 
        unsigned int analyzingSuccessfulRetry : 1; 
        unsigned int isUserRequest : 1; 
        unsigned int wwanPreferred : 1; 
    } _has;
    int _interface;
    bool _isUserRequest;
    unsigned long long _knownURLLoadDuration;
    int _sendBufferBytesRemaining;
    unsigned long long _siriSaltURLLoadDuration;
    unsigned long long _siriURLLoadDuration;
    unsigned long long _timestamp;
    bool _wwanPreferred;
}

@property(assign,readwrite) bool analyzingSuccessfulRetry;
@property(assign,readwrite) unsigned long long gatewayPingDuration;
@property(assign,readwrite) unsigned int gatewayPingsDropped;
@property(assign,readwrite) unsigned int gatewayPingsSent;
@property(assign,readwrite) int gatewayStatus;
@property(assign,readwrite) bool hasAnalyzingSuccessfulRetry;
@property(assign,readwrite) bool hasGatewayPingDuration;
@property(assign,readwrite) bool hasGatewayPingsDropped;
@property(assign,readwrite) bool hasGatewayPingsSent;
@property(assign,readwrite) bool hasGatewayStatus;
@property(assign,readwrite) bool hasInterface;
@property(assign,readwrite) bool hasIsUserRequest;
@property(assign,readwrite) bool hasKnownURLLoadDuration;
@property(assign,readwrite) bool hasSendBufferBytesRemaining;
@property(assign,readwrite) bool hasSiriSaltURLLoadDuration;
@property(assign,readwrite) bool hasSiriURLLoadDuration;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasWwanPreferred;
@property(assign,readwrite) int interface;
@property(assign,readwrite) bool isUserRequest;
@property(assign,readwrite) unsigned long long knownURLLoadDuration;
@property(assign,readwrite) int sendBufferBytesRemaining;
@property(assign,readwrite) unsigned long long siriSaltURLLoadDuration;
@property(assign,readwrite) unsigned long long siriURLLoadDuration;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) bool wwanPreferred;

- (bool)analyzingSuccessfulRetry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)gatewayPingDuration;
- (unsigned int)gatewayPingsDropped;
- (unsigned int)gatewayPingsSent;
- (int)gatewayStatus;
- (bool)hasAnalyzingSuccessfulRetry;
- (bool)hasGatewayPingDuration;
- (bool)hasGatewayPingsDropped;
- (bool)hasGatewayPingsSent;
- (bool)hasGatewayStatus;
- (bool)hasInterface;
- (bool)hasIsUserRequest;
- (bool)hasKnownURLLoadDuration;
- (bool)hasSendBufferBytesRemaining;
- (bool)hasSiriSaltURLLoadDuration;
- (bool)hasSiriURLLoadDuration;
- (bool)hasTimestamp;
- (bool)hasWwanPreferred;
- (unsigned long long)hash;
- (int)interface;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequest;
- (unsigned long long)knownURLLoadDuration;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sendBufferBytesRemaining;
- (void)setAnalyzingSuccessfulRetry:(bool)arg1;
- (void)setGatewayPingDuration:(unsigned long long)arg1;
- (void)setGatewayPingsDropped:(unsigned int)arg1;
- (void)setGatewayPingsSent:(unsigned int)arg1;
- (void)setGatewayStatus:(int)arg1;
- (void)setHasAnalyzingSuccessfulRetry:(bool)arg1;
- (void)setHasGatewayPingDuration:(bool)arg1;
- (void)setHasGatewayPingsDropped:(bool)arg1;
- (void)setHasGatewayPingsSent:(bool)arg1;
- (void)setHasGatewayStatus:(bool)arg1;
- (void)setHasInterface:(bool)arg1;
- (void)setHasIsUserRequest:(bool)arg1;
- (void)setHasKnownURLLoadDuration:(bool)arg1;
- (void)setHasSendBufferBytesRemaining:(bool)arg1;
- (void)setHasSiriSaltURLLoadDuration:(bool)arg1;
- (void)setHasSiriURLLoadDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWwanPreferred:(bool)arg1;
- (void)setInterface:(int)arg1;
- (void)setIsUserRequest:(bool)arg1;
- (void)setKnownURLLoadDuration:(unsigned long long)arg1;
- (void)setSendBufferBytesRemaining:(int)arg1;
- (void)setSiriSaltURLLoadDuration:(unsigned long long)arg1;
- (void)setSiriURLLoadDuration:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWwanPreferred:(bool)arg1;
- (unsigned long long)siriSaltURLLoadDuration;
- (unsigned long long)siriURLLoadDuration;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;
- (bool)wwanPreferred;

@end
