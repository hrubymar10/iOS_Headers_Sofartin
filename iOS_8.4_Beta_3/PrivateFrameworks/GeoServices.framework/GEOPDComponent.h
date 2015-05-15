/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponent : PBCodable <NSCopying> {
    GEOPDAttribution *_attribution;
    int _cacheControl;
    struct { 
        unsigned int timestampFirstSeen : 1; 
        unsigned int cacheControl : 1; 
        unsigned int startIndex : 1; 
        unsigned int status : 1; 
        unsigned int ttl : 1; 
        unsigned int type : 1; 
        unsigned int valuesAvailable : 1; 
        unsigned int version : 1; 
    } _has;
    GEOPDSource *_source;
    int _startIndex;
    int _status;
    double _timestampFirstSeen;
    unsigned int _ttl;
    int _type;
    NSMutableArray *_values;
    int _valuesAvailable;
    unsigned int _version;
    NSMutableArray *_versionDomains;
}

@property (nonatomic, retain) GEOPDAttribution *attribution;
@property (nonatomic) int cacheControl;
@property (nonatomic, readonly) bool hasAttribution;
@property (nonatomic) bool hasCacheControl;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestampFirstSeen;
@property (nonatomic) bool hasTtl;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasValuesAvailable;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) GEOPDSource *source;
@property (nonatomic) int startIndex;
@property (nonatomic) int status;
@property (nonatomic) double timestampFirstSeen;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) int type;
@property (nonatomic, retain) NSMutableArray *values;
@property (nonatomic) int valuesAvailable;
@property (nonatomic) unsigned int version;
@property (nonatomic, retain) NSMutableArray *versionDomains;

- (void)addValue:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (id)attribution;
- (int)cacheControl;
- (void)clearValues;
- (void)clearVersionDomains;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAttribution;
- (bool)hasCacheControl;
- (bool)hasSource;
- (bool)hasStartIndex;
- (bool)hasStatus;
- (bool)hasTimestampFirstSeen;
- (bool)hasTtl;
- (bool)hasType;
- (bool)hasValuesAvailable;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)setCacheControl:(int)arg1;
- (void)setHasCacheControl:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestampFirstSeen:(bool)arg1;
- (void)setHasTtl:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasValuesAvailable:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setStartIndex:(int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestampFirstSeen:(double)arg1;
- (void)setTtl:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (void)setValues:(id)arg1;
- (void)setValuesAvailable:(int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setVersionDomains:(id)arg1;
- (id)source;
- (int)startIndex;
- (int)status;
- (double)timestampFirstSeen;
- (unsigned int)ttl;
- (int)type;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (int)valuesAvailable;
- (unsigned long long)valuesCount;
- (unsigned int)version;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (id)versionDomains;
- (unsigned long long)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end
