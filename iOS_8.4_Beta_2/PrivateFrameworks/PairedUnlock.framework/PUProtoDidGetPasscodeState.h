/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUProtoDidGetPasscodeState : PBCodable <NSCopying> {
    bool _hasPasscode;
    bool _isLocked;
    bool _isUnlockOnly;
}

@property(assign,readwrite) bool hasPasscode;
@property(assign,readwrite) bool isLocked;
@property(assign,readwrite) bool isUnlockOnly;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPasscode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLocked;
- (bool)isUnlockOnly;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPasscode:(bool)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setIsUnlockOnly:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
