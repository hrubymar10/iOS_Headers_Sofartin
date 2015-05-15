/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUIActionCapture : PBCodable <NSCopying> {
    int _actionType;
    double _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int actionType : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
    int _sequenceNumber;
}

@property (nonatomic) int actionType;
@property (nonatomic) double duration;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) int sequenceNumber;

- (int)actionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasActionType;
- (bool)hasDuration;
- (bool)hasSequenceNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sequenceNumber;
- (void)setActionType:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)writeTo:(id)arg1;

@end
