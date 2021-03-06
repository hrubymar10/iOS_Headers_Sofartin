/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUProtoBufUserActivityContext : PBCodable <NSCopying> {
    NSMutableArray *_containerItems;
    struct { 
        unsigned int originatorType : 1; 
        unsigned int originatorVersion : 1; 
    } _has;
    int _originatorType;
    int _originatorVersion;
}

@property(assign,retain) NSMutableArray * containerItems;
@property(assign,readwrite) bool hasOriginatorType;
@property(assign,readwrite) bool hasOriginatorVersion;
@property(assign,readwrite) int originatorType;
@property(assign,readwrite) int originatorVersion;

- (void).cxx_destruct;
- (void)addContainerItems:(id)arg1;
- (void)clearContainerItems;
- (id)containerItems;
- (id)containerItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerItemsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOriginatorType;
- (bool)hasOriginatorVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)originatorType;
- (int)originatorVersion;
- (bool)readFrom:(id)arg1;
- (void)setContainerItems:(id)arg1;
- (void)setHasOriginatorType:(bool)arg1;
- (void)setHasOriginatorVersion:(bool)arg1;
- (void)setOriginatorType:(int)arg1;
- (void)setOriginatorVersion:(int)arg1;
- (void)writeTo:(id)arg1;

@end
