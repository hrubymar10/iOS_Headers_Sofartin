/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBProperty : PBCodable <NSCopying> {
    NSString *_name;
    CSLUIPBPropertyValue *_value;
}

@property(assign,readonly) bool hasName;
@property(assign,readonly) bool hasValue;
@property(assign,retain) NSString * name;
@property(assign,retain) CSLUIPBPropertyValue * value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end