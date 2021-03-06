/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {
    GEODownloadMetadata *_metadata;
    GEOResources *_resources;
}

@property(assign,readonly) bool hasResources;
@property(assign,retain) GEODownloadMetadata * metadata;
@property(assign,retain) GEOResources * resources;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResources;
- (unsigned long long)hash;
- (id)initWithResourceManifestData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (id)resources;
- (void)setMetadata:(id)arg1;
- (void)setResources:(id)arg1;
- (void)writeTo:(id)arg1;

@end
