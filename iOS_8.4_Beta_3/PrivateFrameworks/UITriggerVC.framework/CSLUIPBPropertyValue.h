/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBPropertyValue : PBCodable <NSCopying> {
    NSMutableArray *_arrayValues;
    NSData *_dataValue;
    CSLUIPBPropertyValue *_dictionaryKey;
    CSLUIPBNumber *_numberValue;
    CSLUIPBSize *_sizeValue;
    NSString *_stringValue;
    NSData *_uUIDValue;
}

@property(assign,retain) NSMutableArray * arrayValues;
@property(assign,retain) NSData * dataValue;
@property(assign,retain) CSLUIPBPropertyValue * dictionaryKey;
@property(assign,readonly) bool hasDataValue;
@property(assign,readonly) bool hasDictionaryKey;
@property(assign,readonly) bool hasNumberValue;
@property(assign,readonly) bool hasSizeValue;
@property(assign,readonly) bool hasStringValue;
@property(assign,readonly) bool hasUUIDValue;
@property(assign,retain) CSLUIPBNumber * numberValue;
@property(assign,retain) CSLUIPBSize * sizeValue;
@property(assign,retain) NSString * stringValue;
@property(assign,retain) NSData * uUIDValue;

- (void).cxx_destruct;
- (void)addArrayValues:(id)arg1;
- (id)arrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryKey;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasDictionaryKey;
- (bool)hasNumberValue;
- (bool)hasSizeValue;
- (bool)hasStringValue;
- (bool)hasUUIDValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numberValue;
- (bool)readFrom:(id)arg1;
- (void)setArrayValues:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDictionaryKey:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setSizeValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUUIDValue:(id)arg1;
- (id)sizeValue;
- (id)stringValue;
- (id)uUIDValue;
- (void)writeTo:(id)arg1;

@end