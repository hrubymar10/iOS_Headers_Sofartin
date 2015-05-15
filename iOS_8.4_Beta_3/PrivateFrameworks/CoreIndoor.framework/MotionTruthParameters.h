/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface MotionTruthParameters : PBCodable <NSCopying> {
    float _bias;
    float _errorPeriodSeconds;
    struct { 
        unsigned int bias : 1; 
        unsigned int errorPeriodSeconds : 1; 
        unsigned int scale : 1; 
    } _has;
    float _scale;
}

@property (nonatomic) float bias;
@property (nonatomic) float errorPeriodSeconds;
@property (nonatomic) bool hasBias;
@property (nonatomic) bool hasErrorPeriodSeconds;
@property (nonatomic) bool hasScale;
@property (nonatomic) float scale;

- (float)bias;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)errorPeriodSeconds;
- (bool)hasBias;
- (bool)hasErrorPeriodSeconds;
- (bool)hasScale;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)scale;
- (void)setBias:(float)arg1;
- (void)setErrorPeriodSeconds:(float)arg1;
- (void)setHasBias:(bool)arg1;
- (void)setHasErrorPeriodSeconds:(bool)arg1;
- (void)setHasScale:(bool)arg1;
- (void)setScale:(float)arg1;
- (void)writeTo:(id)arg1;

@end
