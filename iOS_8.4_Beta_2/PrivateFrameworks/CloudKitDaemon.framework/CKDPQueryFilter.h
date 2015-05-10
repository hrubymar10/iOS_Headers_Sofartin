/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryFilter : PBCodable <NSCopying> {
    CKDPLocationBound *_bounds;
    CKDPRecordFieldIdentifier *_fieldName;
    CKDPRecordFieldValue *_fieldValue;
    struct { 
        unsigned int type : 1; 
    } _has;
    int _type;
}

@property(assign,retain) CKDPLocationBound * bounds;
@property(assign,retain) CKDPRecordFieldIdentifier * fieldName;
@property(assign,retain) CKDPRecordFieldValue * fieldValue;
@property(assign,readonly) bool hasBounds;
@property(assign,readonly) bool hasFieldName;
@property(assign,readonly) bool hasFieldValue;
@property(assign,readwrite) bool hasType;
@property(assign,readwrite) int type;

- (void).cxx_destruct;
- (id)bounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (id)fieldValue;
- (bool)hasBounds;
- (bool)hasFieldName;
- (bool)hasFieldValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFieldValue:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end