/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttribution : PBCodable <NSCopying> {
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(assign,retain) NSMutableArray * attributionURLs;
@property(assign,retain) NSString * sourceIdentifier;
@property(assign,readwrite) unsigned int sourceVersion;

- (void)addAttributionURLs:(id)arg1;
- (id)attributionURLs;
- (id)attributionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionURLsCount;
- (void)clearAttributionURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributionURLs:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (id)sourceIdentifier;
- (unsigned int)sourceVersion;
- (void)writeTo:(id)arg1;

@end
