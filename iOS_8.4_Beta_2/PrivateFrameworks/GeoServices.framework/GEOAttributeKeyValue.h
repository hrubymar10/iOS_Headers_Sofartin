/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {
    NSString *_attributeKey;
    NSString *_attributeValue;
}

@property(assign,retain) NSString * attributeKey;
@property(assign,retain) NSString * attributeValue;

- (id)attributeKey;
- (id)attributeValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributeKey:(id)arg1;
- (void)setAttributeValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
