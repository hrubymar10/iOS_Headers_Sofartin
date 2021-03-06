/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUCZCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    MPUCZCollectionView *_collectionView;
    long long _coverCountPerColumn;
    MPUDataSource *_dataSource;
    <MPUCZCollectionViewControllerDelegate> *_delegate;
    struct CGSize { 
        double width; 
        double height; 
    } _itemSize;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic) long long coverCountPerColumn;
@property (nonatomic, retain) MPUDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUCZCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginPreloadingAlbums;
- (id)_collectionViewLayoutForColumnCount:(unsigned long long)arg1;
- (void)_dataSourceDidInvalidateNotification:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)coverCountPerColumn;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithDataSource:(id)arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (struct CGSize { double x1; double x2; })itemSizeForCoverCount:(unsigned long long)arg1;
- (void)loadView;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)setCoverCountPerColumn:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
