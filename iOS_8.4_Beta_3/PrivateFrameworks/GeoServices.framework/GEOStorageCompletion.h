/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageCompletion : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry *_autocompleteEntry;
    PBUnknownFields *_unknownFields;
}

@property(assign,retain) GEOPDAutocompleteEntry * autocompleteEntry;
@property(assign,readonly) bool hasAutocompleteEntry;
@property(assign,readonly) PBUnknownFields * unknownFields;

+ (id)storageForCompletionItem:(id)arg1;

- (void)applyToUserSearchInput:(id)arg1;
- (id)autocompleteEntry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end