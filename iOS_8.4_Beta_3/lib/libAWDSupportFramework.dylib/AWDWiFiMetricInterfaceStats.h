/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricInterfaceStats : PBCodable <NSCopying> {
    unsigned int _a2dpAssocMinutes;
    unsigned int _cellularDataRxBytes;
    unsigned int _cellularDataTxBytes;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int a2dpAssocMinutes : 1; 
        unsigned int cellularDataRxBytes : 1; 
        unsigned int cellularDataTxBytes : 1; 
        unsigned int hidAssocMinutes : 1; 
        unsigned int scoAssocMinutes : 1; 
        unsigned int statsCollectionMinutes : 1; 
        unsigned int wifiA2dpRxBytes : 1; 
        unsigned int wifiA2dpTxBytes : 1; 
        unsigned int wifiAssocMinutes : 1; 
        unsigned int wifiHidRxBytes : 1; 
        unsigned int wifiHidTxBytes : 1; 
        unsigned int wifiRxBytes : 1; 
        unsigned int wifiScoRxBytes : 1; 
        unsigned int wifiScoTxBytes : 1; 
        unsigned int wifiTxBytes : 1; 
    } _has;
    unsigned int _hidAssocMinutes;
    unsigned int _scoAssocMinutes;
    unsigned int _statsCollectionMinutes;
    unsigned long long _timestamp;
    unsigned int _wifiA2dpRxBytes;
    unsigned int _wifiA2dpTxBytes;
    unsigned int _wifiAssocMinutes;
    unsigned int _wifiHidRxBytes;
    unsigned int _wifiHidTxBytes;
    unsigned int _wifiRxBytes;
    unsigned int _wifiScoRxBytes;
    unsigned int _wifiScoTxBytes;
    unsigned int _wifiTxBytes;
}

@property(assign,readwrite) unsigned int a2dpAssocMinutes;
@property(assign,readwrite) unsigned int cellularDataRxBytes;
@property(assign,readwrite) unsigned int cellularDataTxBytes;
@property(assign,readwrite) bool hasA2dpAssocMinutes;
@property(assign,readwrite) bool hasCellularDataRxBytes;
@property(assign,readwrite) bool hasCellularDataTxBytes;
@property(assign,readwrite) bool hasHidAssocMinutes;
@property(assign,readwrite) bool hasScoAssocMinutes;
@property(assign,readwrite) bool hasStatsCollectionMinutes;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasWifiA2dpRxBytes;
@property(assign,readwrite) bool hasWifiA2dpTxBytes;
@property(assign,readwrite) bool hasWifiAssocMinutes;
@property(assign,readwrite) bool hasWifiHidRxBytes;
@property(assign,readwrite) bool hasWifiHidTxBytes;
@property(assign,readwrite) bool hasWifiRxBytes;
@property(assign,readwrite) bool hasWifiScoRxBytes;
@property(assign,readwrite) bool hasWifiScoTxBytes;
@property(assign,readwrite) bool hasWifiTxBytes;
@property(assign,readwrite) unsigned int hidAssocMinutes;
@property(assign,readwrite) unsigned int scoAssocMinutes;
@property(assign,readwrite) unsigned int statsCollectionMinutes;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int wifiA2dpRxBytes;
@property(assign,readwrite) unsigned int wifiA2dpTxBytes;
@property(assign,readwrite) unsigned int wifiAssocMinutes;
@property(assign,readwrite) unsigned int wifiHidRxBytes;
@property(assign,readwrite) unsigned int wifiHidTxBytes;
@property(assign,readwrite) unsigned int wifiRxBytes;
@property(assign,readwrite) unsigned int wifiScoRxBytes;
@property(assign,readwrite) unsigned int wifiScoTxBytes;
@property(assign,readwrite) unsigned int wifiTxBytes;

- (unsigned int)a2dpAssocMinutes;
- (unsigned int)cellularDataRxBytes;
- (unsigned int)cellularDataTxBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasA2dpAssocMinutes;
- (bool)hasCellularDataRxBytes;
- (bool)hasCellularDataTxBytes;
- (bool)hasHidAssocMinutes;
- (bool)hasScoAssocMinutes;
- (bool)hasStatsCollectionMinutes;
- (bool)hasTimestamp;
- (bool)hasWifiA2dpRxBytes;
- (bool)hasWifiA2dpTxBytes;
- (bool)hasWifiAssocMinutes;
- (bool)hasWifiHidRxBytes;
- (bool)hasWifiHidTxBytes;
- (bool)hasWifiRxBytes;
- (bool)hasWifiScoRxBytes;
- (bool)hasWifiScoTxBytes;
- (bool)hasWifiTxBytes;
- (unsigned long long)hash;
- (unsigned int)hidAssocMinutes;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)scoAssocMinutes;
- (void)setA2dpAssocMinutes:(unsigned int)arg1;
- (void)setCellularDataRxBytes:(unsigned int)arg1;
- (void)setCellularDataTxBytes:(unsigned int)arg1;
- (void)setHasA2dpAssocMinutes:(bool)arg1;
- (void)setHasCellularDataRxBytes:(bool)arg1;
- (void)setHasCellularDataTxBytes:(bool)arg1;
- (void)setHasHidAssocMinutes:(bool)arg1;
- (void)setHasScoAssocMinutes:(bool)arg1;
- (void)setHasStatsCollectionMinutes:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifiA2dpRxBytes:(bool)arg1;
- (void)setHasWifiA2dpTxBytes:(bool)arg1;
- (void)setHasWifiAssocMinutes:(bool)arg1;
- (void)setHasWifiHidRxBytes:(bool)arg1;
- (void)setHasWifiHidTxBytes:(bool)arg1;
- (void)setHasWifiRxBytes:(bool)arg1;
- (void)setHasWifiScoRxBytes:(bool)arg1;
- (void)setHasWifiScoTxBytes:(bool)arg1;
- (void)setHasWifiTxBytes:(bool)arg1;
- (void)setHidAssocMinutes:(unsigned int)arg1;
- (void)setScoAssocMinutes:(unsigned int)arg1;
- (void)setStatsCollectionMinutes:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiA2dpRxBytes:(unsigned int)arg1;
- (void)setWifiA2dpTxBytes:(unsigned int)arg1;
- (void)setWifiAssocMinutes:(unsigned int)arg1;
- (void)setWifiHidRxBytes:(unsigned int)arg1;
- (void)setWifiHidTxBytes:(unsigned int)arg1;
- (void)setWifiRxBytes:(unsigned int)arg1;
- (void)setWifiScoRxBytes:(unsigned int)arg1;
- (void)setWifiScoTxBytes:(unsigned int)arg1;
- (void)setWifiTxBytes:(unsigned int)arg1;
- (unsigned int)statsCollectionMinutes;
- (unsigned long long)timestamp;
- (unsigned int)wifiA2dpRxBytes;
- (unsigned int)wifiA2dpTxBytes;
- (unsigned int)wifiAssocMinutes;
- (unsigned int)wifiHidRxBytes;
- (unsigned int)wifiHidTxBytes;
- (unsigned int)wifiRxBytes;
- (unsigned int)wifiScoRxBytes;
- (unsigned int)wifiScoTxBytes;
- (unsigned int)wifiTxBytes;
- (void)writeTo:(id)arg1;

@end