/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIObjectPickerViewController : UIViewController {
    SAUIDomainObjectPicker *_picker;
    <SiriUIObjectPickerViewControllerDelegate> *_pickerDelegate;
}

@property(getter=_picker,assign,readonly) SAUIDomainObjectPicker * picker;
@property(assign,readwrite) <SiriUIObjectPickerViewControllerDelegate> * pickerDelegate;

+ (id)pickerControllerWithPicker:(id)arg1;

- (void).cxx_destruct;
- (id)_picker;
- (id)initWithPicker:(id)arg1;
- (id)pickerDelegate;
- (void)setPickerDelegate:(id)arg1;
- (void)showPicker:(id)arg1;

@end
