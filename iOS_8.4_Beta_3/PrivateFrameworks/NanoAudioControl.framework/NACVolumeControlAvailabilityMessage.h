/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeControlAvailabilityMessage : PBCodable <NSCopying> {
    NSString *_category;
    struct { 
        unsigned int volumeControlAvailable : 1; 
    } _has;
    bool _volumeControlAvailable;
}

@property(assign,retain) NSString * category;
@property(assign,readonly) bool hasCategory;
@property(assign,readwrite) bool hasVolumeControlAvailable;
@property(assign,readwrite) bool volumeControlAvailable;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasVolumeControlAvailable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasVolumeControlAvailable:(bool)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (bool)volumeControlAvailable;
- (void)writeTo:(id)arg1;

@end