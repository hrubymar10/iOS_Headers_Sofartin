/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    NSMutableArray *_problemIds;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
}

@property (nonatomic, readonly) bool hasStatusNotificationId;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, retain) NSMutableArray *problemIds;
@property (nonatomic, retain) NSString *statusNotificationId;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;

- (void)addProblemId:(id)arg1;
- (void)clearProblemIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusNotificationId;
- (bool)hasUserCredentials;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemIdAtIndex:(unsigned long long)arg1;
- (id)problemIds;
- (unsigned long long)problemIdsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setProblemIds:(id)arg1;
- (void)setStatusNotificationId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)statusNotificationId;
- (id)userCredentials;
- (void)writeTo:(id)arg1;

@end
