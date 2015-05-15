/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODownloadMetadata : PBCodable <NSCopying> {
    NSString *_etag;
    double _timestamp;
    NSString *_url;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSString *url;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUrl:(id)arg1;
- (double)timestamp;
- (id)url;
- (void)writeTo:(id)arg1;

@end
