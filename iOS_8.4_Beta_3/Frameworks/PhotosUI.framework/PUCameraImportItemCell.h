/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraImportItemCell : UICollectionViewCell {
    UIImageView *_badgeImageView;
    long long _badgeType;
    PUPhotoView *_photoView;
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic) long long badgeType;
@property (nonatomic, retain) PUPhotoView *photoView;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_createSpinnerIfNecessary;
- (id)badgeImageView;
- (long long)badgeType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photoView;
- (void)prepareForReuse;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeType:(long long)arg1;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 fillMode:(long long)arg3;
- (void)setPhotoView:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;

@end
