/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABTonePickerViewController : ABPickerViewController {
    TKTonePickerViewController *_tonePickerViewController;
}

@property(assign,retain) TKTonePickerViewController * tonePickerViewController;

- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)cancelButtonClicked:(id)arg1;
- (id)init;
- (id)initWithAlertType:(int)arg1;
- (void)loadView;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)tonePickerViewController;

@end
