/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableQuantitySample : PBCodable <NSCopying> {
    struct { 
        unsigned int valueInCanonicalUnit : 1; 
    } _has;
    HDCodableSample *_sample;
    double _valueInCanonicalUnit;
}

@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasValueInCanonicalUnit;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) double valueInCanonicalUnit;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSample;
- (bool)hasValueInCanonicalUnit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setHasValueInCanonicalUnit:(bool)arg1;
- (void)setSample:(id)arg1;
- (void)setValueInCanonicalUnit:(double)arg1;
- (double)valueInCanonicalUnit;
- (void)writeTo:(id)arg1;

@end
