/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingViewControllerSpec : NSObject

@property(assign,readonly) double interItemSpacing;
@property(assign,readonly) unsigned long long selectionBadgeCorner;
@property(assign,readonly) struct UIOffset { double x1; double x2; } selectionBadgeOffset;
@property(assign,readonly) struct CGSize { double x1; double x2; } selectionBadgeSize;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewLayoutContentInsetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)embedsActivityViewForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 horizontalSizeClass:(long long)arg2 verticalSizeClass:(long long)arg3;
- (double)interItemSpacing;
- (bool)maximizeImageHeightForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)selectionBadgeCorner;
- (struct UIOffset { double x1; double x2; })selectionBadgeOffset;
- (struct CGSize { double x1; double x2; })selectionBadgeSize;

@end
