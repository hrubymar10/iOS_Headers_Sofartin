/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPinStorage : PBCodable <NSCopying> {
    MSPDroppedPin *_droppedPin;
    struct { 
        unsigned int position : 1; 
        unsigned int timestamp : 1; 
        unsigned int type : 1; 
    } _has;
    NSString *_identifier;
    double _position;
    double _timestamp;
    int _type;
    PBUnknownFields *_unknownFields;
}

@property (nonatomic, retain) MSPDroppedPin *droppedPin;
@property (nonatomic, readonly) bool hasDroppedPin;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasPosition;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double position;
@property (nonatomic) double timestamp;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)droppedPin;
- (bool)hasDroppedPin;
- (bool)hasIdentifier;
- (bool)hasPosition;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)position;
- (bool)readFrom:(id)arg1;
- (void)setDroppedPin:(id)arg1;
- (void)setHasPosition:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPosition:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (double)timestamp;
- (int)type;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
