/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSInitiateMessage : IDSFaceTimeMessage <NSCopying> {
    NSArray *_canonicalizedPeers;
    NSArray *_peers;
    NSDictionary *_regionInformation;
    NSData *_selfBlob;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSData *_selfPushToken;
}

@property(assign,copy) NSArray * canonicalizedPeers;
@property(assign,copy) NSArray * peers;
@property(assign,copy) NSDictionary * regionInformation;
@property(assign,copy) NSData * selfBlob;
@property(assign,copy) NSNumber * selfNATType;
@property(assign,copy) NSData * selfNatIP;
@property(assign,copy) NSData * selfPushToken;

- (id)bagKey;
- (id)canonicalizedPeers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)peers;
- (id)regionInformation;
- (id)requiredKeys;
- (id)selfBlob;
- (id)selfNATType;
- (id)selfNatIP;
- (id)selfPushToken;
- (void)setCanonicalizedPeers:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setRegionInformation:(id)arg1;
- (void)setSelfBlob:(id)arg1;
- (void)setSelfNATType:(id)arg1;
- (void)setSelfNatIP:(id)arg1;
- (void)setSelfPushToken:(id)arg1;

@end