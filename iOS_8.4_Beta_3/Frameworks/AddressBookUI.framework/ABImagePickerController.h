/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABImagePickerController : ABContentController <ABMultipleSourceImagePickerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIImagePickerControllerDelegate, UIModalViewDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate> {
    bool _allowsEditingExistingPhoto;
    NSDictionary *_animationContextDictionary;
    bool _applyImageChangesToAllPeople;
    CAKeyframeAnimation *_bounceAnimation;
    bool _canChooseFromMultiplePhotos;
    bool _canChoosePhoto;
    bool _confirmingDelete;
    bool _editingImage;
    bool _hasExistingPhoto;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
    UIImagePickerController *_imagePicker;
    NSArray *_people;
    UIPopoverController *_popoverPresenter;
    NSArray *_writablePeople;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ABPersonImageDataDelegate> *imageDataDelegate;
@property (readonly) Class superclass;

- (id)_createImagePicker;
- (id)_createImagePickerForEditingImageData:(id)arg1 shouldSaveFullSize:(bool)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_formatStringForSource:(void*)arg1 withSuffix:(bool)arg2 useAbbreviatedStrings:(bool)arg3;
- (bool)_hasMultipleWritablePeople;
- (id)_removePreviousSheet;
- (void)_showActionSheet:(id)arg1 previousOwner:(id)arg2;
- (void)_showImagePickerWithPriorConfirmation:(bool)arg1;
- (void)_tearDownImagePickerController;
- (id)ab_windowContentViewForView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addButtonForSource:(bool)arg1 suffix:(long long)arg2 name:(id)arg3 indexInAllPeople:(long long)arg4 toArray:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)animationDidStopAfterDelay:(id)arg1;
- (void)back:(bool)arg1 save:(bool)arg2;
- (id)buttonTitlesAndIndicesForPickingPreferredPhoto;
- (bool)canTakePhoto;
- (void)cancelPicker;
- (void)chooseExisting;
- (void)choosePhoto;
- (id)contentView;
- (void)dealloc;
- (void)delayedPerform:(SEL)arg1;
- (void)delayedPerform:(SEL)arg1 withObject:(id)arg2;
- (void)deletePhoto:(bool)arg1;
- (void)deletePhotoNoConfirm;
- (void)doEditPhoto;
- (void)editPhoto;
- (bool)hasMultipleActions;
- (id)imageDataDelegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2;
- (void)multipleSourcePicker:(id)arg1 didSelectPerson:(id)arg2;
- (void)multipleSourcePickerDidSelectPhotoPicker:(id)arg1;
- (void)orderOut:(id)arg1;
- (id)popoverPresenterForViewController:(id)arg1;
- (void)releaseImagePicker;
- (void)reload;
- (void)resume;
- (void)setImageDataDelegate:(id)arg1;
- (void)suspend;
- (void)takePhoto;
- (void)usePhotoFromPerson:(id)arg1;

@end
