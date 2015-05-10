/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoUpdatePushTokenRequest : PBRequest <NSCopying> {
    NSString *_pushToken;
}

@property(assign,readonly) bool hasPushToken;
@property(assign,retain) NSString * pushToken;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPushToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pushToken;
- (bool)readFrom:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
