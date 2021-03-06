/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {
    NSString *_completion;
    PBUnknownFields *_unknownFields;
}

@property(assign,retain) NSString * completion;
@property(assign,readonly) bool hasCompletion;
@property(assign,readonly) PBUnknownFields * unknownFields;

- (id)completion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompletion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompletion:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
