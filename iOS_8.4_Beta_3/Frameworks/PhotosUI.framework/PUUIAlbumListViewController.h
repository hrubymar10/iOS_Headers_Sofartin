/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIAlbumListViewController : PUAlbumListViewController {
    NSArray *__imagePickerMediaTypes;
    UIBarButtonItem *_imagePickerCancelButton;
}

@property(setter=_setImagePickerMediaTypes:,assign,copy) NSArray * _imagePickerMediaTypes;

- (void).cxx_destruct;
- (int)_defaultAlbumListFilter;
- (void)_handleImagePickerCancel:(id)arg1;
- (id)_imagePickerMediaTypes;
- (void)_setAlbumList:(struct NSObject { Class x1; }*)arg1 mediaTypes:(id)arg2;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (id)init;
- (void)loadView;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (bool)pu_wantsNavigationBarVisible;
- (void)setAlbumList:(id)arg1;
- (bool)shouldAllowEmailInAlbumSubtitle;
- (bool)shouldShowAllPhotosItem;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
