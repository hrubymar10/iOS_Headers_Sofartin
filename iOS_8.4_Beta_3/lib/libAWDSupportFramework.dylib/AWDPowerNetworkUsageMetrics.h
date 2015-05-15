/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerNetworkUsageMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    unsigned long long _timestamp;
    NSMutableArray *_usages;
}

@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) unsigned long long timestamp;
@property(assign,retain) NSMutableArray * usages;

- (void)addUsage:(id)arg1;
- (void)clearUsages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsages:(id)arg1;
- (unsigned long long)timestamp;
- (id)usageAtIndex:(unsigned long long)arg1;
- (id)usages;
- (unsigned long long)usagesCount;
- (void)writeTo:(id)arg1;

@end
