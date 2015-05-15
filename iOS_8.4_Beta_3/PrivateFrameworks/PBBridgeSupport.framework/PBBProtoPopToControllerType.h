/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoPopToControllerType : PBCodable <NSCopying> {
    unsigned int _controllerType;
    struct { 
        unsigned int intendedFireDate : 1; 
    } _has;
    double _intendedFireDate;
}

@property (nonatomic) unsigned int controllerType;
@property (nonatomic) bool hasIntendedFireDate;
@property (nonatomic) double intendedFireDate;

- (unsigned int)controllerType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntendedFireDate;
- (unsigned long long)hash;
- (double)intendedFireDate;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setControllerType:(unsigned int)arg1;
- (void)setHasIntendedFireDate:(bool)arg1;
- (void)setIntendedFireDate:(double)arg1;
- (void)writeTo:(id)arg1;

@end
