/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {
    unsigned int _associatedSleepDur;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int associatedSleepDur : 1; 
        unsigned int roamDur : 1; 
        unsigned int totalDur : 1; 
        unsigned int type : 1; 
        unsigned int unassociatedSleepDur : 1; 
    } _has;
    unsigned int _roamDur;
    unsigned long long _timestamp;
    unsigned int _totalDur;
    unsigned int _type;
    unsigned int _unassociatedSleepDur;
}

@property(assign,readwrite) unsigned int associatedSleepDur;
@property(assign,readwrite) bool hasAssociatedSleepDur;
@property(assign,readwrite) bool hasRoamDur;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTotalDur;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) bool hasUnassociatedSleepDur;
@property(assign,readwrite) unsigned int roamDur;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,readwrite) unsigned int totalDur;
@property(assign,readwrite) unsigned int type;
@property(assign,readwrite) unsigned int unassociatedSleepDur;

- (unsigned int)associatedSleepDur;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssociatedSleepDur;
- (bool)hasRoamDur;
- (bool)hasTimestamp;
- (bool)hasTotalDur;
- (bool)hasType;
- (bool)hasUnassociatedSleepDur;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)roamDur;
- (void)setAssociatedSleepDur:(unsigned int)arg1;
- (void)setHasAssociatedSleepDur:(bool)arg1;
- (void)setHasRoamDur:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalDur:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUnassociatedSleepDur:(bool)arg1;
- (void)setRoamDur:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalDur:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUnassociatedSleepDur:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)totalDur;
- (unsigned int)type;
- (unsigned int)unassociatedSleepDur;
- (void)writeTo:(id)arg1;

@end
