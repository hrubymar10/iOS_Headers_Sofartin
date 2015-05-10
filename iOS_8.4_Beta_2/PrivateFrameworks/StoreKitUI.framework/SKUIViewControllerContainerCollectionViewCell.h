/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell {
    NSIndexPath *_indexPath;
    bool _managesViewControllerViewLayout;
    UIViewController *_viewController;
}

@property(assign,readonly) NSIndexPath * indexPath;
@property(assign,readwrite) bool managesViewControllerViewLayout;
@property(assign,retain) UIViewController * viewController;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)managesViewControllerViewLayout;
- (void)setManagesViewControllerViewLayout:(bool)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
