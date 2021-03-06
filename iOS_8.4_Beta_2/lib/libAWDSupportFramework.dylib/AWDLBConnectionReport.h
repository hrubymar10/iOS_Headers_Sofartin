/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLBConnectionReport : PBCodable <NSCopying> {
    long long _bytesReceived;
    long long _bytesSent;
    long long _clientConnectionCount;
    int _connectionAttemptCount;
    int _connectionCellularFallbackCount;
    long long _connectionDuration;
    int _connectionFailureCount;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _connectionReadyTimes;
    int _connectionSuccessMptcpCount;
    int _connectionSuccessTcpCount;
    struct { 
        unsigned int bytesReceived : 1; 
        unsigned int bytesSent : 1; 
        unsigned int clientConnectionCount : 1; 
        unsigned int connectionDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int connectionAttemptCount : 1; 
        unsigned int connectionCellularFallbackCount : 1; 
        unsigned int connectionFailureCount : 1; 
        unsigned int connectionSuccessMptcpCount : 1; 
        unsigned int connectionSuccessTcpCount : 1; 
        unsigned int resumptionFailureCount : 1; 
        unsigned int resumptionSuccessCount : 1; 
        unsigned int suspensionCount : 1; 
        unsigned int upgradeSuccessAndNotNeededCount : 1; 
        unsigned int upgradeSuccessAndPrimaryCount : 1; 
    } _has;
    int _resumptionFailureCount;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _resumptionFailureErrors;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _resumptionFailureTimes;
    int _resumptionSuccessCount;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _resumptionSuccessTimes;
    int _suspensionCount;
    unsigned long long _timestamp;
    int _upgradeSuccessAndNotNeededCount;
    int _upgradeSuccessAndPrimaryCount;
}

@property(assign,readwrite) long long bytesReceived;
@property(assign,readwrite) long long bytesSent;
@property(assign,readwrite) long long clientConnectionCount;
@property(assign,readwrite) int connectionAttemptCount;
@property(assign,readwrite) int connectionCellularFallbackCount;
@property(assign,readwrite) long long connectionDuration;
@property(assign,readwrite) int connectionFailureCount;
@property(assign,readonly) long long* connectionReadyTimes;
@property(assign,readonly) unsigned long long connectionReadyTimesCount;
@property(assign,readwrite) int connectionSuccessMptcpCount;
@property(assign,readwrite) int connectionSuccessTcpCount;
@property(assign,readwrite) bool hasBytesReceived;
@property(assign,readwrite) bool hasBytesSent;
@property(assign,readwrite) bool hasClientConnectionCount;
@property(assign,readwrite) bool hasConnectionAttemptCount;
@property(assign,readwrite) bool hasConnectionCellularFallbackCount;
@property(assign,readwrite) bool hasConnectionDuration;
@property(assign,readwrite) bool hasConnectionFailureCount;
@property(assign,readwrite) bool hasConnectionSuccessMptcpCount;
@property(assign,readwrite) bool hasConnectionSuccessTcpCount;
@property(assign,readwrite) bool hasResumptionFailureCount;
@property(assign,readwrite) bool hasResumptionSuccessCount;
@property(assign,readwrite) bool hasSuspensionCount;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasUpgradeSuccessAndNotNeededCount;
@property(assign,readwrite) bool hasUpgradeSuccessAndPrimaryCount;
@property(assign,readwrite) int resumptionFailureCount;
@property(assign,readonly) int* resumptionFailureErrors;
@property(assign,readonly) unsigned long long resumptionFailureErrorsCount;
@property(assign,readonly) long long* resumptionFailureTimes;
@property(assign,readonly) unsigned long long resumptionFailureTimesCount;
@property(assign,readwrite) int resumptionSuccessCount;
@property(assign,readonly) long long* resumptionSuccessTimes;
@property(assign,readonly) unsigned long long resumptionSuccessTimesCount;
@property(assign,readwrite) int suspensionCount;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) int upgradeSuccessAndNotNeededCount;
@property(assign,readwrite) int upgradeSuccessAndPrimaryCount;

- (void)addConnectionReadyTimes:(long long)arg1;
- (void)addResumptionFailureErrors:(int)arg1;
- (void)addResumptionFailureTimes:(long long)arg1;
- (void)addResumptionSuccessTimes:(long long)arg1;
- (long long)bytesReceived;
- (long long)bytesSent;
- (void)clearConnectionReadyTimes;
- (void)clearResumptionFailureErrors;
- (void)clearResumptionFailureTimes;
- (void)clearResumptionSuccessTimes;
- (long long)clientConnectionCount;
- (int)connectionAttemptCount;
- (int)connectionCellularFallbackCount;
- (long long)connectionDuration;
- (int)connectionFailureCount;
- (long long*)connectionReadyTimes;
- (long long)connectionReadyTimesAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionReadyTimesCount;
- (int)connectionSuccessMptcpCount;
- (int)connectionSuccessTcpCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytesReceived;
- (bool)hasBytesSent;
- (bool)hasClientConnectionCount;
- (bool)hasConnectionAttemptCount;
- (bool)hasConnectionCellularFallbackCount;
- (bool)hasConnectionDuration;
- (bool)hasConnectionFailureCount;
- (bool)hasConnectionSuccessMptcpCount;
- (bool)hasConnectionSuccessTcpCount;
- (bool)hasResumptionFailureCount;
- (bool)hasResumptionSuccessCount;
- (bool)hasSuspensionCount;
- (bool)hasTimestamp;
- (bool)hasUpgradeSuccessAndNotNeededCount;
- (bool)hasUpgradeSuccessAndPrimaryCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resumptionFailureCount;
- (int*)resumptionFailureErrors;
- (int)resumptionFailureErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resumptionFailureErrorsCount;
- (long long*)resumptionFailureTimes;
- (long long)resumptionFailureTimesAtIndex:(unsigned long long)arg1;
- (unsigned long long)resumptionFailureTimesCount;
- (int)resumptionSuccessCount;
- (long long*)resumptionSuccessTimes;
- (long long)resumptionSuccessTimesAtIndex:(unsigned long long)arg1;
- (unsigned long long)resumptionSuccessTimesCount;
- (void)setBytesReceived:(long long)arg1;
- (void)setBytesSent:(long long)arg1;
- (void)setClientConnectionCount:(long long)arg1;
- (void)setConnectionAttemptCount:(int)arg1;
- (void)setConnectionCellularFallbackCount:(int)arg1;
- (void)setConnectionDuration:(long long)arg1;
- (void)setConnectionFailureCount:(int)arg1;
- (void)setConnectionReadyTimes:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setConnectionSuccessMptcpCount:(int)arg1;
- (void)setConnectionSuccessTcpCount:(int)arg1;
- (void)setHasBytesReceived:(bool)arg1;
- (void)setHasBytesSent:(bool)arg1;
- (void)setHasClientConnectionCount:(bool)arg1;
- (void)setHasConnectionAttemptCount:(bool)arg1;
- (void)setHasConnectionCellularFallbackCount:(bool)arg1;
- (void)setHasConnectionDuration:(bool)arg1;
- (void)setHasConnectionFailureCount:(bool)arg1;
- (void)setHasConnectionSuccessMptcpCount:(bool)arg1;
- (void)setHasConnectionSuccessTcpCount:(bool)arg1;
- (void)setHasResumptionFailureCount:(bool)arg1;
- (void)setHasResumptionSuccessCount:(bool)arg1;
- (void)setHasSuspensionCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUpgradeSuccessAndNotNeededCount:(bool)arg1;
- (void)setHasUpgradeSuccessAndPrimaryCount:(bool)arg1;
- (void)setResumptionFailureCount:(int)arg1;
- (void)setResumptionFailureErrors:(int*)arg1 count:(unsigned long long)arg2;
- (void)setResumptionFailureTimes:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setResumptionSuccessCount:(int)arg1;
- (void)setResumptionSuccessTimes:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setSuspensionCount:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUpgradeSuccessAndNotNeededCount:(int)arg1;
- (void)setUpgradeSuccessAndPrimaryCount:(int)arg1;
- (int)suspensionCount;
- (unsigned long long)timestamp;
- (int)upgradeSuccessAndNotNeededCount;
- (int)upgradeSuccessAndPrimaryCount;
- (void)writeTo:(id)arg1;

@end
