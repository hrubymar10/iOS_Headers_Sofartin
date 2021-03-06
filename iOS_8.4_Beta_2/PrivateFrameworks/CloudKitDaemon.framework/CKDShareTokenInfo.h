/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareTokenInfo : NSObject <NSCopying> {
    NSData *_privateTokenData;
    NSData *_publicTokenData;
    NSString *_routingKey;
    NSData *_shortSharingTokenData;
}

@property(assign,retain) NSData * privateTokenData;
@property(assign,retain) NSData * publicTokenData;
@property(assign,retain) NSString * routingKey;
@property(assign,readonly) NSString * shortSharingToken;
@property(assign,retain) NSData * shortSharingTokenData;
@property(assign,readonly) NSData * shortSharingTokenHashData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)privateTokenData;
- (id)publicTokenData;
- (id)routingKey;
- (void)setPrivateTokenData:(id)arg1;
- (void)setPublicTokenData:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShortSharingTokenData:(id)arg1;
- (id)shortSharingToken;
- (id)shortSharingTokenData;
- (id)shortSharingTokenHashData;

@end
