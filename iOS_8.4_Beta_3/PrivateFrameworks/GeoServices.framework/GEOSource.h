/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSource : PBCodable <NSCopying> {
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
}

@property (nonatomic, readonly) bool hasSourceVersion;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, retain) NSString *sourceVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSourceVersion;
- (unsigned long long)hash;
- (id)initWithAttributionID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (id)sourceId;
- (id)sourceName;
- (id)sourceVersion;
- (void)writeTo:(id)arg1;

@end
