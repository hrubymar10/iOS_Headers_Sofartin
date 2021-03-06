/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABVibrationPickerController : UINavigationController {
    CNContactStyle *_contactStyle;
    TKVibrationPickerViewController *_vibrationPicker;
}

@property(assign,retain) CNContactStyle * contactStyle;
@property(assign,readwrite) <ABPickerControllerDelegate> * delegate;
@property(assign,readonly) TKVibrationPickerViewController * vibrationPicker;

- (void)cancelButton:(id)arg1;
- (id)contactStyle;
- (void)dealloc;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(int)arg1 selectedVibrationIdentifier:(id)arg2;
- (void)setContactStyle:(id)arg1;
- (id)vibrationPicker;

@end
