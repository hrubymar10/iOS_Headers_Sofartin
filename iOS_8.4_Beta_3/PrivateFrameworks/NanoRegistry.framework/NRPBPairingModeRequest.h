/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBPairingModeRequest : PBRequest <NSCopying> {
    int _pairingMode;
}

@property (nonatomic) int pairingMode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pairingMode;
- (bool)readFrom:(id)arg1;
- (void)setPairingMode:(int)arg1;
- (void)writeTo:(id)arg1;

@end
