/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalSyncCacheItem : NSObject {
    NSMutableArray *_dismissalDictionariesAndFeeds;
    NSMutableDictionary *_dismissalIDToFeeds;
}

@property (nonatomic, readonly, retain) NSMutableArray *dismissalDictionariesAndFeeds;
@property (nonatomic, readonly, retain) NSMutableDictionary *dismissalIDToFeeds;

- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)dismissalDictionariesAndFeeds;
- (id)dismissalIDToFeeds;
- (id)findBulletinMatch:(id)arg1;
- (id)init;
- (id)purgeExpired;
- (void)removeBulletinMatch:(id)arg1;

@end
