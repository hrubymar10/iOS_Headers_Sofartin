/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMProtoDidPlaySoundAndFlashLEDResponse : PBCodable <NSCopying> {
    bool _didPlay;
}

@property(assign,readwrite) bool didPlay;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didPlay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDidPlay:(bool)arg1;
- (void)writeTo:(id)arg1;

@end