/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSMutableArray *logoURLs;
@property (nonatomic, retain) NSMutableArray *snippetLogoURLs;

- (void)addLogoURLs:(id)arg1;
- (void)addSnippetLogoURLs:(id)arg1;
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;
- (void)clearLogoURLs;
- (void)clearSnippetLogoURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasLanguage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)logoURLs;
- (id)logoURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)logoURLsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLogoURLs:(id)arg1;
- (void)setSnippetLogoURLs:(id)arg1;
- (id)snippetLogoURLs;
- (id)snippetLogoURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetLogoURLsCount;
- (void)writeTo:(id)arg1;

@end
