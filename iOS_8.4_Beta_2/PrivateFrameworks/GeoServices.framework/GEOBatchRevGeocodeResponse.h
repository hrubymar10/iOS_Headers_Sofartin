/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int statusCode : 1; 
        unsigned int ttl : 1; 
        unsigned int version : 1; 
    } _has;
    int _statusCode;
    double _timestamp;
    unsigned int _ttl;
    unsigned int _version;
    NSMutableArray *_versionDomains;
}

@property(assign,retain) NSMutableArray * batchPlaceResults;
@property(assign,retain) NSMutableArray * clusters;
@property(assign,readwrite) bool hasStatusCode;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTtl;
@property(assign,readwrite) bool hasVersion;
@property(assign,retain) NSDictionary * httpHeaders;
@property(assign,readwrite) int statusCode;
@property(assign,readwrite) double timestamp;
@property(assign,readwrite) unsigned int ttl;
@property(assign,readwrite) unsigned int version;
@property(assign,retain) NSMutableArray * versionDomains;

- (void)addBatchPlaceResult:(id)arg1;
- (void)addCluster:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;
- (id)batchPlaceResults;
- (unsigned long long)batchPlaceResultsCount;
- (void)clearBatchPlaceResults;
- (void)clearClusters;
- (void)clearVersionDomains;
- (id)clusterAtIndex:(unsigned long long)arg1;
- (id)clusters;
- (unsigned long long)clustersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (bool)hasTimestamp;
- (bool)hasTtl;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)httpHeaders;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBatchPlaceResults:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTtl:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTtl:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setVersionDomains:(id)arg1;
- (int)statusCode;
- (double)timestamp;
- (unsigned int)ttl;
- (unsigned int)version;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (id)versionDomains;
- (unsigned long long)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end
