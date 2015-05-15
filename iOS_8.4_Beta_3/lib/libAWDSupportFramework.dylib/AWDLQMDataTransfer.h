/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLQMDataTransfer : PBCodable <NSCopying> {
    NSString *_bundleName;
    struct { 
        unsigned int lQM : 1; 
        unsigned int rxBytes : 1; 
        unsigned int stateDuration : 1; 
        unsigned int txBytes : 1; 
    } _has;
    int _lQM;
    unsigned int _rxBytes;
    unsigned int _stateDuration;
    unsigned int _txBytes;
}

@property (nonatomic, retain) NSString *bundleName;
@property (nonatomic, readonly) bool hasBundleName;
@property (nonatomic) bool hasLQM;
@property (nonatomic) bool hasRxBytes;
@property (nonatomic) bool hasStateDuration;
@property (nonatomic) bool hasTxBytes;
@property (nonatomic) int lQM;
@property (nonatomic) unsigned int rxBytes;
@property (nonatomic) unsigned int stateDuration;
@property (nonatomic) unsigned int txBytes;

- (id)bundleName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleName;
- (bool)hasLQM;
- (bool)hasRxBytes;
- (bool)hasStateDuration;
- (bool)hasTxBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)lQM;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rxBytes;
- (void)setBundleName:(id)arg1;
- (void)setHasLQM:(bool)arg1;
- (void)setHasRxBytes:(bool)arg1;
- (void)setHasStateDuration:(bool)arg1;
- (void)setHasTxBytes:(bool)arg1;
- (void)setLQM:(int)arg1;
- (void)setRxBytes:(unsigned int)arg1;
- (void)setStateDuration:(unsigned int)arg1;
- (void)setTxBytes:(unsigned int)arg1;
- (unsigned int)stateDuration;
- (unsigned int)txBytes;
- (void)writeTo:(id)arg1;

@end
