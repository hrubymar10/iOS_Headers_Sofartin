/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPWebAuthTokenRetrieveResponse : PBCodable <NSCopying> {
    NSString *_token;
}

@property(assign,readonly) bool hasToken;
@property(assign,retain) NSString * token;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;
- (void)writeTo:(id)arg1;

@end