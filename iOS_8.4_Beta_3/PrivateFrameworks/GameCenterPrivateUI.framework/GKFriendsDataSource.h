/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFriendsDataSource : GKBasicCollectionViewDataSource {
    long long _kind;
}

@property (nonatomic) long long kind;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)kind;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;
- (id)sectionTitle;
- (void)setKind:(long long)arg1;

@end
