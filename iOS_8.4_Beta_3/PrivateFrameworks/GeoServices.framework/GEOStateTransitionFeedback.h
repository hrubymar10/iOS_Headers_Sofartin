/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTransitionFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int newValue : 1; 
        unsigned int oldValue : 1; 
        unsigned int stateType : 1; 
    } _has;
    int _newValue;
    int _oldValue;
    int _stateType;
}

@property (nonatomic) bool hasNewValue;
@property (nonatomic) bool hasOldValue;
@property (nonatomic) bool hasStateType;
@property (nonatomic) int newValue;
@property (nonatomic) int oldValue;
@property (nonatomic) int stateType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNewValue;
- (bool)hasOldValue;
- (bool)hasStateType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newValue;
- (int)oldValue;
- (bool)readFrom:(id)arg1;
- (void)setHasNewValue:(bool)arg1;
- (void)setHasOldValue:(bool)arg1;
- (void)setHasStateType:(bool)arg1;
- (void)setNewValue:(int)arg1;
- (void)setOldValue:(int)arg1;
- (void)setStateType:(int)arg1;
- (int)stateType;
- (void)writeTo:(id)arg1;

@end
