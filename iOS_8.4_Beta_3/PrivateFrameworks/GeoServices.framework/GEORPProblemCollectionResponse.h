/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemCollectionResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    NSString *_problemId;
    int _statusCode;
}

@property (nonatomic, readonly) bool hasProblemId;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic) int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProblemId;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
