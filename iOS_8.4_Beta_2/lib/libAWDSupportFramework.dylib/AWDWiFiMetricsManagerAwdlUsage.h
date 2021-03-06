/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerAwdlUsage : PBCodable <NSCopying> {
    unsigned int _appRxBytes;
    unsigned int _appTxBytes;
    unsigned int _cachedPeersNotAssociated;
    unsigned int _cachedPeersOn24G;
    unsigned int _cachedPeersOn5G;
    unsigned int _cachedPeersOnDFS;
    unsigned int _flags;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int appRxBytes : 1; 
        unsigned int appTxBytes : 1; 
        unsigned int cachedPeersNotAssociated : 1; 
        unsigned int cachedPeersOn24G : 1; 
        unsigned int cachedPeersOn5G : 1; 
        unsigned int cachedPeersOnDFS : 1; 
        unsigned int flags : 1; 
        unsigned int ifPacketFailures : 1; 
        unsigned int ifRxBytes : 1; 
        unsigned int ifTxBytes : 1; 
        unsigned int numOfCachedPeers : 1; 
        unsigned int numOfPeers : 1; 
        unsigned int peerInfraChannel : 1; 
        unsigned int periodInMinutes : 1; 
        unsigned int selfInfraChannel : 1; 
    } _has;
    unsigned int _ifPacketFailures;
    unsigned int _ifRxBytes;
    unsigned int _ifTxBytes;
    unsigned int _numOfCachedPeers;
    unsigned int _numOfPeers;
    unsigned int _peerInfraChannel;
    unsigned int _periodInMinutes;
    unsigned int _selfInfraChannel;
    NSMutableArray *_states;
    unsigned long long _timestamp;
}

@property(assign,readwrite) unsigned int appRxBytes;
@property(assign,readwrite) unsigned int appTxBytes;
@property(assign,readwrite) unsigned int cachedPeersNotAssociated;
@property(assign,readwrite) unsigned int cachedPeersOn24G;
@property(assign,readwrite) unsigned int cachedPeersOn5G;
@property(assign,readwrite) unsigned int cachedPeersOnDFS;
@property(assign,readwrite) unsigned int flags;
@property(assign,readwrite) bool hasAppRxBytes;
@property(assign,readwrite) bool hasAppTxBytes;
@property(assign,readwrite) bool hasCachedPeersNotAssociated;
@property(assign,readwrite) bool hasCachedPeersOn24G;
@property(assign,readwrite) bool hasCachedPeersOn5G;
@property(assign,readwrite) bool hasCachedPeersOnDFS;
@property(assign,readwrite) bool hasFlags;
@property(assign,readwrite) bool hasIfPacketFailures;
@property(assign,readwrite) bool hasIfRxBytes;
@property(assign,readwrite) bool hasIfTxBytes;
@property(assign,readwrite) bool hasNumOfCachedPeers;
@property(assign,readwrite) bool hasNumOfPeers;
@property(assign,readwrite) bool hasPeerInfraChannel;
@property(assign,readwrite) bool hasPeriodInMinutes;
@property(assign,readwrite) bool hasSelfInfraChannel;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) unsigned int ifPacketFailures;
@property(assign,readwrite) unsigned int ifRxBytes;
@property(assign,readwrite) unsigned int ifTxBytes;
@property(assign,readwrite) unsigned int numOfCachedPeers;
@property(assign,readwrite) unsigned int numOfPeers;
@property(assign,readwrite) unsigned int peerInfraChannel;
@property(assign,readwrite) unsigned int periodInMinutes;
@property(assign,readwrite) unsigned int selfInfraChannel;
@property(assign,retain) NSMutableArray * states;
@property(assign,readwrite) unsigned long long timestamp;

- (void)addStates:(id)arg1;
- (unsigned int)appRxBytes;
- (unsigned int)appTxBytes;
- (unsigned int)cachedPeersNotAssociated;
- (unsigned int)cachedPeersOn24G;
- (unsigned int)cachedPeersOn5G;
- (unsigned int)cachedPeersOnDFS;
- (void)clearStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (bool)hasAppRxBytes;
- (bool)hasAppTxBytes;
- (bool)hasCachedPeersNotAssociated;
- (bool)hasCachedPeersOn24G;
- (bool)hasCachedPeersOn5G;
- (bool)hasCachedPeersOnDFS;
- (bool)hasFlags;
- (bool)hasIfPacketFailures;
- (bool)hasIfRxBytes;
- (bool)hasIfTxBytes;
- (bool)hasNumOfCachedPeers;
- (bool)hasNumOfPeers;
- (bool)hasPeerInfraChannel;
- (bool)hasPeriodInMinutes;
- (bool)hasSelfInfraChannel;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)ifPacketFailures;
- (unsigned int)ifRxBytes;
- (unsigned int)ifTxBytes;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numOfCachedPeers;
- (unsigned int)numOfPeers;
- (unsigned int)peerInfraChannel;
- (unsigned int)periodInMinutes;
- (bool)readFrom:(id)arg1;
- (unsigned int)selfInfraChannel;
- (void)setAppRxBytes:(unsigned int)arg1;
- (void)setAppTxBytes:(unsigned int)arg1;
- (void)setCachedPeersNotAssociated:(unsigned int)arg1;
- (void)setCachedPeersOn24G:(unsigned int)arg1;
- (void)setCachedPeersOn5G:(unsigned int)arg1;
- (void)setCachedPeersOnDFS:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasAppRxBytes:(bool)arg1;
- (void)setHasAppTxBytes:(bool)arg1;
- (void)setHasCachedPeersNotAssociated:(bool)arg1;
- (void)setHasCachedPeersOn24G:(bool)arg1;
- (void)setHasCachedPeersOn5G:(bool)arg1;
- (void)setHasCachedPeersOnDFS:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasIfPacketFailures:(bool)arg1;
- (void)setHasIfRxBytes:(bool)arg1;
- (void)setHasIfTxBytes:(bool)arg1;
- (void)setHasNumOfCachedPeers:(bool)arg1;
- (void)setHasNumOfPeers:(bool)arg1;
- (void)setHasPeerInfraChannel:(bool)arg1;
- (void)setHasPeriodInMinutes:(bool)arg1;
- (void)setHasSelfInfraChannel:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIfPacketFailures:(unsigned int)arg1;
- (void)setIfRxBytes:(unsigned int)arg1;
- (void)setIfTxBytes:(unsigned int)arg1;
- (void)setNumOfCachedPeers:(unsigned int)arg1;
- (void)setNumOfPeers:(unsigned int)arg1;
- (void)setPeerInfraChannel:(unsigned int)arg1;
- (void)setPeriodInMinutes:(unsigned int)arg1;
- (void)setSelfInfraChannel:(unsigned int)arg1;
- (void)setStates:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)states;
- (id)statesAtIndex:(unsigned long long)arg1;
- (unsigned long long)statesCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
