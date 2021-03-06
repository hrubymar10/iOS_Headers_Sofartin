/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsOptions : PBCodable <NSCopying> {
    int _entriesType;
    struct { 
        unsigned int entriesType : 1; 
        unsigned int listType : 1; 
        unsigned int includeRankingFeatures : 1; 
        unsigned int normalizePOIs : 1; 
    } _has;
    bool _includeRankingFeatures;
    int _listType;
    bool _normalizePOIs;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
}

@property (nonatomic) int entriesType;
@property (nonatomic) bool hasEntriesType;
@property (nonatomic) bool hasIncludeRankingFeatures;
@property (nonatomic) bool hasListType;
@property (nonatomic) bool hasNormalizePOIs;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasSuggestionMetadata;
@property (nonatomic) bool includeRankingFeatures;
@property (nonatomic) int listType;
@property (nonatomic) bool normalizePOIs;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entriesType;
- (bool)hasEntriesType;
- (bool)hasIncludeRankingFeatures;
- (bool)hasListType;
- (bool)hasNormalizePOIs;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasSuggestionMetadata;
- (unsigned long long)hash;
- (bool)includeRankingFeatures;
- (bool)isEqual:(id)arg1;
- (int)listType;
- (void)mergeFrom:(id)arg1;
- (bool)normalizePOIs;
- (bool)readFrom:(id)arg1;
- (void)setEntriesType:(int)arg1;
- (void)setHasEntriesType:(bool)arg1;
- (void)setHasIncludeRankingFeatures:(bool)arg1;
- (void)setHasListType:(bool)arg1;
- (void)setHasNormalizePOIs:(bool)arg1;
- (void)setIncludeRankingFeatures:(bool)arg1;
- (void)setListType:(int)arg1;
- (void)setNormalizePOIs:(bool)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (void)writeTo:(id)arg1;

@end
