/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIMomentsGridViewController : PUPhotosGridViewController {
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    NSArray *__imagePickerMediaTypes;
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerMultipleSelectionDoneButton;
}

@property(assign,readonly) PUUIImagePickerControllerHelper * _imagePickerControllerHelper;
@property(setter=_setImagePickerMediaTypes:,assign,copy) NSArray * _imagePickerMediaTypes;

- (void).cxx_destruct;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (id)_imagePickerControllerHelper;
- (id)_imagePickerMediaTypes;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (bool)initiallyScrolledToBottom;
- (void)loadView;
- (id)newGridLayout;
- (void)viewDidLoad;

@end
