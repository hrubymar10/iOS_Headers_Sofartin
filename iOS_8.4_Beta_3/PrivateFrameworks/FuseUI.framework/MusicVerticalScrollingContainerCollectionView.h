/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerCollectionView : UICollectionView {
    struct { 
        unsigned int didLayoutSubviews : 1; 
    } _delegateRespondsToSelector;
    bool _performingLayout;
}

@property (nonatomic) <MusicVerticalScrollingContainerCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (bool)isPerformingLayout;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;

@end
