/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenDeleteRequest : PBRequest <NSCopying> {
    NSString *_routingKey;
    NSData *_shortTokenHash;
}

@property(assign,readonly) bool hasRoutingKey;
@property(assign,readonly) bool hasShortTokenHash;
@property(assign,retain) NSString * routingKey;
@property(assign,retain) NSData * shortTokenHash;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingKey;
- (bool)hasShortTokenHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingKey;
- (void)setRoutingKey:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end