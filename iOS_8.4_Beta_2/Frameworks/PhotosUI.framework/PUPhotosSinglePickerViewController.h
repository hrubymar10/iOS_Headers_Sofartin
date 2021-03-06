/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSinglePickerViewController : PUPhotosGridViewController {
    UIBarButtonItem *_cancelButton;
    id _completionHandler;
    UIBarButtonItem *_doneButton;
}

@property(assign,copy) id completionHandler;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (id)completionHandler;
- (void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out bool*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5;
- (id)initWithSpec:(id)arg1;
- (id)newGridLayout;
- (void)setCompletionHandler:(id)arg1;
- (void)updateNavigationBarAnimated:(bool)arg1;

@end
