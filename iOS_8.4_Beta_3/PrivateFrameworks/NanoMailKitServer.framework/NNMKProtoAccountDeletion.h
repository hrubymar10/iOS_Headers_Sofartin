/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoAccountDeletion : PBCodable <NSCopying> {
    NSString *_accountId;
}

@property(assign,retain) NSString * accountId;
@property(assign,readonly) bool hasAccountId;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)writeTo:(id)arg1;

@end