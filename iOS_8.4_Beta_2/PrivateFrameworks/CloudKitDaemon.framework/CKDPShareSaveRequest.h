/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareSaveRequest : PBRequest <NSCopying> {
    NSData *_protectedFullToken;
    CKDPShare *_share;
    NSData *_shortTokenHash;
}

@property(assign,readonly) bool hasProtectedFullToken;
@property(assign,readonly) bool hasShare;
@property(assign,readonly) bool hasShortTokenHash;
@property(assign,retain) NSData * protectedFullToken;
@property(assign,retain) CKDPShare * share;
@property(assign,retain) NSData * shortTokenHash;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProtectedFullToken;
- (bool)hasShare;
- (bool)hasShortTokenHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectedFullToken;
- (bool)readFrom:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (id)share;
- (id)shortTokenHash;
- (void)writeTo:(id)arg1;

@end
