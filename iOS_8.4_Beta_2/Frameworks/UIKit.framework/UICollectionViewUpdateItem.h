/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdateItem : NSObject {
    NSIndexPath *_finalIndexPath;
    id _gap;
    NSIndexPath *_initialIndexPath;
    long long _updateAction;
}

@property(getter=_action,assign,readonly) long long action;
@property(getter=_gap,setter=_setGap:,assign,readwrite) id gap;
@property(getter=_indexPath,assign,readonly) NSIndexPath * indexPath;
@property(assign,readonly) NSIndexPath * indexPathAfterUpdate;
@property(assign,readonly) NSIndexPath * indexPathBeforeUpdate;
@property(getter=_isSectionOperation,assign,readonly) bool isSectionOperation;
@property(getter=_newIndexPath,setter=_setNewIndexPath:,assign,retain) NSIndexPath * newIndexPath;
@property(assign,readonly) long long updateAction;

- (long long)_action;
- (id)_gap;
- (id)_indexPath;
- (bool)_isSectionOperation;
- (id)_newIndexPath;
- (void)_setGap:(id)arg1;
- (void)_setNewIndexPath:(id)arg1;
- (long long)compareIndexPaths:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (id)initWithAction:(long long)arg1 forIndexPath:(id)arg2;
- (id)initWithInitialIndexPath:(id)arg1 finalIndexPath:(id)arg2 updateAction:(long long)arg3;
- (id)initWithOldIndexPath:(id)arg1 newIndexPath:(id)arg2;
- (long long)inverseCompareIndexPaths:(id)arg1;
- (long long)updateAction;

@end
