/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionID : 1; 
        unsigned int suggestionEntryIndex : 1; 
        unsigned int suggestionsEntryListIndex : 1; 
    } _has;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    GEOPDAutocompleteEntry *_suggestionEntry;
    int _suggestionEntryIndex;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    int _suggestionsEntryListIndex;
}

@property(assign,readwrite) bool hasSessionID;
@property(assign,readonly) bool hasSuggestionEntry;
@property(assign,readwrite) bool hasSuggestionEntryIndex;
@property(assign,readonly) bool hasSuggestionEntryMetadata;
@property(assign,readonly) bool hasSuggestionMetadata;
@property(assign,readwrite) bool hasSuggestionsEntryListIndex;
@property(assign,readwrite) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(assign,retain) GEOPDAutocompleteEntry * suggestionEntry;
@property(assign,readwrite) int suggestionEntryIndex;
@property(assign,retain) NSData * suggestionEntryMetadata;
@property(assign,retain) NSData * suggestionMetadata;
@property(assign,readwrite) int suggestionsEntryListIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionID;
- (bool)hasSuggestionEntry;
- (bool)hasSuggestionEntryIndex;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasSuggestionMetadata;
- (bool)hasSuggestionsEntryListIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSuggestionEntryIndex:(bool)arg1;
- (void)setHasSuggestionsEntryListIndex:(bool)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryIndex:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionsEntryListIndex:(int)arg1;
- (id)suggestionEntry;
- (int)suggestionEntryIndex;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (int)suggestionsEntryListIndex;
- (void)writeTo:(id)arg1;

@end
