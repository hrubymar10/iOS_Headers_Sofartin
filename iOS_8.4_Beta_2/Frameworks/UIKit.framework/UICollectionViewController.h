/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int useLayoutToLayoutNavigationTransitions : 1; 
    } _collectionViewControllerFlags;
    UICollectionViewLayout *_layout;
}

@property(assign,readwrite) bool clearsSelectionOnViewWillAppear;
@property(assign,retain) UICollectionView * collectionView;
@property(assign,readonly) UICollectionViewLayout * collectionViewLayout;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool useLayoutToLayoutNavigationTransitions;

- (void)__viewWillAppear:(bool)arg1;
- (id)_animatorForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_clearSharedView;
- (id)_newCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)_setSharedCollectionView:(id)arg1;
- (void)_setUseLayoutToLayoutNavigationTransitions:(bool)arg1 withCheck:(bool)arg2;
- (id)_uiCollectionView;
- (id)_wrappingView;
- (bool)clearsSelectionOnViewWillAppear;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewLayout;
- (id)contentScrollView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)loadView;
- (id)preferredFocusedItem;
- (void)setClearsSelectionOnViewWillAppear:(bool)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setUseLayoutToLayoutNavigationTransitions:(bool)arg1;
- (void)setView:(id)arg1;
- (bool)shouldCrossFadeBottomBars;
- (bool)shouldCrossFadeNavigationBar;
- (bool)useLayoutToLayoutNavigationTransitions;
- (void)viewWillUnload;

@end
