/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewReorderedItem : NSObject {
    UICollectionViewCell *_cell;
    NSIndexPath *_originalIndexPath;
    NSIndexPath *_targetIndexPath;
}

@property(assign,readonly) UICollectionViewCell * cell;
@property(assign,retain) NSIndexPath * originalIndexPath;
@property(assign,retain) NSIndexPath * targetIndexPath;

- (id)cell;
- (void)dealloc;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;
- (id)originalIndexPath;
- (void)setOriginalIndexPath:(id)arg1;
- (void)setTargetIndexPath:(id)arg1;
- (id)targetIndexPath;

@end
