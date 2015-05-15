/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISlideshowGalleryBarView : UIView {
    <SKUISlideshowGalleryBarViewDelegate> *_delegate;
    NSMutableArray *_imageViews;
    UIView *_imageViewsContainer;
    unsigned long long _numberOfImages;
    unsigned long long _selectedImageIndex;
    UIToolbar *_toolbarView;
}

@property (nonatomic) <SKUISlideshowGalleryBarViewDelegate> *delegate;
@property (nonatomic) unsigned long long numberOfImages;
@property (nonatomic) unsigned long long selectedImageIndex;

- (void).cxx_destruct;
- (void)_handleTouch:(id)arg1 withEvent:(id)arg2;
- (id)_newImageView;
- (id)delegate;
- (id)imageAtIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfImages;
- (unsigned long long)selectedImageIndex;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 atIndex:(long long)arg2;
- (void)setNumberOfImages:(unsigned long long)arg1;
- (void)setSelectedImageIndex:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
