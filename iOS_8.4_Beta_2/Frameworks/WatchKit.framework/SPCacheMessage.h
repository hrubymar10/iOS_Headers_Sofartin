/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPCacheMessage : NSObject {
    NSData *_assetData;
    NSString *_assetKey;
    unsigned long long _cacheType;
    unsigned long long _error;
    NSString *_gizmoCacheIdentifier;
    int _messageType;
    SPAssetCacheSyncData *_syncData;
}

@property(assign,retain) NSData * assetData;
@property(assign,retain) NSString * assetKey;
@property(assign,readwrite) unsigned long long cacheType;
@property(assign,readwrite) unsigned long long error;
@property(assign,retain) NSString * gizmoCacheIdentifier;
@property(assign,readwrite) int messageType;
@property(assign,retain) SPAssetCacheSyncData * syncData;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;

- (void).cxx_destruct;
- (id)assetData;
- (id)assetKey;
- (unsigned long long)cacheType;
- (unsigned long long)error;
- (id)gizmoCacheIdentifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (int)messageType;
- (void)setAssetData:(id)arg1;
- (void)setAssetKey:(id)arg1;
- (void)setCacheType:(unsigned long long)arg1;
- (void)setError:(unsigned long long)arg1;
- (void)setGizmoCacheIdentifier:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setSyncData:(id)arg1;
- (id)syncData;

@end
