/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewControllerKeyboardSupport : NSObject {
    double _adjustmentForKeyboard;
    unsigned int _registeredForNotifications;
    UITableViewController *_tableViewController;
    unsigned int _viewIsDisappearing;
}

@property(assign,readwrite) double adjustmentForKeyboard;
@property(assign,readwrite) bool registeredForNotifications;
@property(assign,readwrite) bool viewIsDisappearing;

- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (double)adjustmentForKeyboard;
- (id)initWithTableViewController:(id)arg1;
- (bool)registeredForNotifications;
- (void)setAdjustmentForKeyboard:(double)arg1;
- (void)setRegisteredForNotifications:(bool)arg1;
- (void)setViewIsDisappearing:(bool)arg1;
- (bool)viewIsDisappearing;

@end