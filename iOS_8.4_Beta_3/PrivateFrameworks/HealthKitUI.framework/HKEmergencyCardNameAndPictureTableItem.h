/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    HKMedicalIDEditorNameAndPhotoCell *_cell;
    <HKEmergencyCardRowHeightChangeDelegate> *_rowHeightChangeDelegate;
    bool _showingDeletePhotoButton;
    bool _showingTakePhotoButton;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) <HKEmergencyCardRowHeightChangeDelegate> * rowHeightChangeDelegate;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cell;
- (void)_editPhotoTapped:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)commitEditing;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initInEditMode:(bool)arg1;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (id)rowHeightChangeDelegate;
- (void)setData:(id)arg1;
- (void)setRowHeightChangeDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)title;

@end