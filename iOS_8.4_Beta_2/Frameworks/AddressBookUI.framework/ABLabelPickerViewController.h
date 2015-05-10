/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabelPickerViewController : ABPickerViewController {
    NSArray *_additionalLabels;
    void *_addressBook;
    bool _didCreateNewLabel;
    long long _itemIndex;
    ABItemLabelPicker *_labelPicker;
    ABPropertyGroup *_propertyGroup;
    NSString *_selectedLabel;
}

@property(assign,readwrite) bool didCreateNewLabel;
@property(assign,retain) NSString * selectedLabel;

- (bool)_allowsAutorotation;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)dealloc;
- (bool)didCreateNewLabel;
- (struct CGSize { double x1; double x2; })fullScreenContentSize;
- (id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(long long)arg3 additionalLabels:(id)arg4;
- (void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(bool)arg2 animate:(bool)arg3;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (bool)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (id)labelPicker;
- (void)loadView;
- (id)selectedLabel;
- (void)setDelegate:(id)arg1;
- (void)setDidCreateNewLabel:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSelectedLabel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
