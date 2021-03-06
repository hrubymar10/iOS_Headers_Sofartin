/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSQuotaInfo : NSObject {
    NSMutableDictionary *_mediaKindDict;
    unsigned long long _totalStorage;
    unsigned long long _usedStorage;
}

@property(assign,readwrite) unsigned long long totalStorage;
@property(assign,readwrite) unsigned long long usedStorage;

- (void)dealloc;
- (id)init;
- (void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2;
- (void)setTotalStorage:(unsigned long long)arg1;
- (void)setUsedStorage:(unsigned long long)arg1;
- (unsigned long long)storageInUseForMediaKind:(long long)arg1;
- (unsigned long long)totalStorage;
- (unsigned long long)usedStorage;

@end
