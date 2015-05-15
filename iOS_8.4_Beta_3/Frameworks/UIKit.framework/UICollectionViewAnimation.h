/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewAnimation : NSObject {
    id _animationBlock;
    struct { 
        unsigned int animateFromCurrentPosition : 1; 
        unsigned int deleteAterAnimation : 1; 
        unsigned int rasterizeAfterAnimation : 1; 
        unsigned int resetRasterizationAfterAnimation : 1; 
    } _collectionViewAnimationFlags;
    NSMutableArray *_completionHandlers;
    double _endFraction;
    UICollectionViewLayoutAttributes *_finalLayoutAttributes;
    double _startFraction;
    NSMutableArray *_startupHandlers;
    UICollectionReusableView *_view;
    int _viewType;
}

@property(assign,readonly) bool animateFromCurrentPosition;
@property(assign,readonly) bool deleteAfterAnimation;
@property(assign,readonly) double endFraction;
@property(assign,readonly) UICollectionViewLayoutAttributes * finalLayoutAttributes;
@property(assign,readwrite) bool rasterizeAfterAnimation;
@property(assign,readwrite) bool resetRasterizationAfterAnimation;
@property(assign,readonly) double startFraction;
@property(assign,readonly) UICollectionReusableView * view;
@property(assign,readonly) int viewType;

- (void)addCompletionHandler:(id)arg1;
- (void)addStartupHandler:(id)arg1;
- (bool)animateFromCurrentPosition;
- (void)dealloc;
- (bool)deleteAfterAnimation;
- (id)description;
- (double)endFraction;
- (id)finalLayoutAttributes;
- (id)initWithView:(id)arg1 viewType:(int)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(bool)arg6 deleteAfterAnimation:(bool)arg7 customAnimations:(id)arg8;
- (bool)rasterizeAfterAnimation;
- (bool)resetRasterizationAfterAnimation;
- (void)setRasterizeAfterAnimation:(bool)arg1;
- (void)setResetRasterizationAfterAnimation:(bool)arg1;
- (void)start;
- (double)startFraction;
- (id)view;
- (int)viewType;

@end
