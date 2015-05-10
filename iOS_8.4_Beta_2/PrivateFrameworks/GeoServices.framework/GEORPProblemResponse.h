/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
        unsigned int isNotificationSupported : 1; 
    } _has;
    bool _isNotificationSupported;
    NSString *_problemId;
    int _statusCode;
}

@property(assign,readwrite) bool hasIsNotificationSupported;
@property(assign,readonly) bool hasProblemId;
@property(assign,readwrite) bool hasStatusCode;
@property(assign,readwrite) bool isNotificationSupported;
@property(assign,retain) NSString * problemId;
@property(assign,readwrite) int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNotificationSupported;
- (bool)hasProblemId;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationSupported;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (bool)readFrom:(id)arg1;
- (void)setHasIsNotificationSupported:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setIsNotificationSupported:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
