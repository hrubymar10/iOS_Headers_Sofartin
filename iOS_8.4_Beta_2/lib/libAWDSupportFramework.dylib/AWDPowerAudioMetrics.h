/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {
    unsigned int _audioHeadsetDuration;
    unsigned int _audioHeadsetPowerMicroWatt;
    unsigned int _audioSpeakerDuration;
    unsigned int _audioSpeakerPowerMicroWatt;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _audioVolumeLevelDurationSpeakers;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _audioVolumeLevelDurations;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioHeadsetDuration : 1; 
        unsigned int audioHeadsetPowerMicroWatt : 1; 
        unsigned int audioSpeakerDuration : 1; 
        unsigned int audioSpeakerPowerMicroWatt : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property(assign,readwrite) unsigned int audioHeadsetDuration;
@property(assign,readwrite) unsigned int audioHeadsetPowerMicroWatt;
@property(assign,readwrite) unsigned int audioSpeakerDuration;
@property(assign,readwrite) unsigned int audioSpeakerPowerMicroWatt;
@property(assign,readonly) unsigned int* audioVolumeLevelDurationSpeakers;
@property(assign,readonly) unsigned long long audioVolumeLevelDurationSpeakersCount;
@property(assign,readonly) unsigned int* audioVolumeLevelDurations;
@property(assign,readonly) unsigned long long audioVolumeLevelDurationsCount;
@property(assign,readwrite) bool hasAudioHeadsetDuration;
@property(assign,readwrite) bool hasAudioHeadsetPowerMicroWatt;
@property(assign,readwrite) bool hasAudioSpeakerDuration;
@property(assign,readwrite) bool hasAudioSpeakerPowerMicroWatt;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) unsigned long long timestamp;

- (void)addAudioVolumeLevelDuration:(unsigned int)arg1;
- (void)addAudioVolumeLevelDurationSpeaker:(unsigned int)arg1;
- (unsigned int)audioHeadsetDuration;
- (unsigned int)audioHeadsetPowerMicroWatt;
- (unsigned int)audioSpeakerDuration;
- (unsigned int)audioSpeakerPowerMicroWatt;
- (unsigned int)audioVolumeLevelDurationAtIndex:(unsigned long long)arg1;
- (unsigned int)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)arg1;
- (unsigned int*)audioVolumeLevelDurationSpeakers;
- (unsigned long long)audioVolumeLevelDurationSpeakersCount;
- (unsigned int*)audioVolumeLevelDurations;
- (unsigned long long)audioVolumeLevelDurationsCount;
- (void)clearAudioVolumeLevelDurationSpeakers;
- (void)clearAudioVolumeLevelDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioHeadsetDuration;
- (bool)hasAudioHeadsetPowerMicroWatt;
- (bool)hasAudioSpeakerDuration;
- (bool)hasAudioSpeakerPowerMicroWatt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioHeadsetDuration:(unsigned int)arg1;
- (void)setAudioHeadsetPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioSpeakerDuration:(unsigned int)arg1;
- (void)setAudioSpeakerPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioVolumeLevelDurationSpeakers:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setAudioVolumeLevelDurations:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasAudioHeadsetDuration:(bool)arg1;
- (void)setHasAudioHeadsetPowerMicroWatt:(bool)arg1;
- (void)setHasAudioSpeakerDuration:(bool)arg1;
- (void)setHasAudioSpeakerPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
