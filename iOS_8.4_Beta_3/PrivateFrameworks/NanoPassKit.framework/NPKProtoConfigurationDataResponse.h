/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoConfigurationDataResponse : PBCodable <NSCopying> {
    NSData *_configurationDataBytes;
    struct { 
        unsigned int pending : 1; 
    } _has;
    bool _pending;
}

@property (nonatomic, retain) NSData *configurationDataBytes;
@property (nonatomic, readonly) bool hasConfigurationDataBytes;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool pending;

- (void).cxx_destruct;
- (id)configurationDataBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfigurationDataBytes;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setConfigurationDataBytes:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
