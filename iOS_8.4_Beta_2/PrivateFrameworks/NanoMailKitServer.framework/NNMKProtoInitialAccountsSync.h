/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoInitialAccountsSync : PBCodable <NSCopying> {
    NSMutableArray *_initialAccounts;
}

@property(assign,retain) NSMutableArray * initialAccounts;

- (void).cxx_destruct;
- (void)addInitialAccount:(id)arg1;
- (void)clearInitialAccounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initialAccountAtIndex:(unsigned long long)arg1;
- (id)initialAccounts;
- (unsigned long long)initialAccountsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInitialAccounts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
