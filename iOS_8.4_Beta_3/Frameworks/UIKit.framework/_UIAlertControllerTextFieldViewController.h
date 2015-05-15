/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerTextFieldViewController : UITableViewController {
    <_UIAlertControllerTextFieldViewControllerContaining> *_container;
    bool _textFieldsCanBecomeFirstResponder;
    NSMutableArray *textFieldViews;
    NSMutableArray *textFields;
}

@property (nonatomic) <_UIAlertControllerTextFieldViewControllerContaining> *container;
@property (readonly) NSArray *textFields;
@property (nonatomic) bool textFieldsCanBecomeFirstResponder;

- (double)_bottomMarginForTextFields;
- (void)_returnKeyPressedInTextField:(id)arg1;
- (void)_updatePreferredContentSize;
- (id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(bool)arg2;
- (id)container;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfTextFields;
- (void)removeAllTextFields;
- (void)setContainer:(id)arg1;
- (void)setTextFieldsCanBecomeFirstResponder:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)textFieldAtIndex:(long long)arg1;
- (id)textFields;
- (bool)textFieldsCanBecomeFirstResponder;
- (void)viewWillAppear:(bool)arg1;

@end
