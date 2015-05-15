/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncedMailbox : NSObject {
    NSString *_accountId;
    NSString *_customName;
    unsigned long long _type;
    NSURL *_url;
}

@property(assign,retain) NSString * accountId;
@property(assign,retain) NSString * customName;
@property(assign,readwrite) unsigned long long type;
@property(assign,retain) NSURL * url;

- (void).cxx_destruct;
- (id)accountId;
- (id)customName;
- (id)init;
- (void)setAccountId:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)type;
- (id)url;

@end