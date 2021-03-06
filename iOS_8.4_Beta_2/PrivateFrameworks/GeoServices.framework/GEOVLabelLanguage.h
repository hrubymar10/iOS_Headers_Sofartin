/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLabelLanguage : PBCodable <NSCopying> {
    unsigned int _endOffset;
    NSString *_languageLocale;
    unsigned int _startOffset;
}

@property(assign,readwrite) unsigned int endOffset;
@property(assign,retain) NSString * languageLocale;
@property(assign,readwrite) unsigned int startOffset;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageLocale;
- (bool)readFrom:(id)arg1;
- (void)setEndOffset:(unsigned int)arg1;
- (void)setLanguageLocale:(id)arg1;
- (void)setStartOffset:(unsigned int)arg1;
- (unsigned int)startOffset;
- (void)writeTo:(id)arg1;

@end
