/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheUsageFeedbackCollection : PBCodable <NSCopying> {
    NSMutableArray *_cacheFeedbacks;
}

@property(assign,retain) NSMutableArray * cacheFeedbacks;

- (void)addCacheFeedback:(id)arg1;
- (id)cacheFeedbackAtIndex:(unsigned long long)arg1;
- (id)cacheFeedbacks;
- (unsigned long long)cacheFeedbacksCount;
- (void)clearCacheFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCacheFeedbacks:(id)arg1;
- (void)writeTo:(id)arg1;

@end