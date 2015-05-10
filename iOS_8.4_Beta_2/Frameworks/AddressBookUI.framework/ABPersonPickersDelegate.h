/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonPickersDelegate : NSObject <ABImagePickerControllerDelegate, ABPickerViewControllerDelegate> {
    ABPersonTableViewDataSource *_dataSource;
    ABPersonViewControllerHelper *_helper;
    ABImagePickerController *_imagePicker;
    ABStyleProvider *_styleProvider;
}

@property(assign,readwrite) ABPersonTableViewDataSource * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) ABPersonViewControllerHelper * helper;
@property(assign,readonly) ABImagePickerController * imagePicker;
@property(assign,readwrite) bool popoverSizeUpdatesDisabled;
@property(assign,retain) ABStyleProvider * styleProvider;
@property(assign,readonly) Class superclass;

- (id)_contentViewForPicker:(id)arg1;
- (void)_dismissCountryPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissProfilesPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissPropertyPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissRingtonePicker:(id)arg1 afterSelectingItem:(id)arg2;
- (id)_propertyGroupForPicker:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)finishTearingDownImagePickerController;
- (id)helper;
- (id)imagePicker;
- (void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2;
- (bool)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2;
- (id)personImageView;
- (bool)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2;
- (bool)pickerViewControllerShouldDismissKeyboard:(id)arg1;
- (bool)popoverSizeUpdatesDisabled;
- (void)removeImagePickerControllerFromUI;
- (id)selectedPeople;
- (void)setDataSource:(id)arg1;
- (void)setHelper:(id)arg1;
- (void)setPopoverSizeUpdatesDisabled:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)showImageMenuForHelper:(id)arg1;
- (id)styleProvider;

@end
