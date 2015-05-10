/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPickerViewController : UITableViewController {
    void *_context;
    id _defaultValue;
    <ABPickerViewControllerDelegate> *_delegate;
    <ABPickerViewControllerDismissDelegate> *_dismissDelegate;
    SEL _selectionAction;
    <ABStyleProvider> *_styleProvider;
}

@property(assign,readonly) UIBarButtonItem * cancelBarButtonItem;
@property(assign,readwrite) void* context;
@property(assign,retain) id defaultValue;
@property(assign,readwrite) <ABPickerViewControllerDelegate> * delegate;
@property(assign,readwrite) <ABPickerViewControllerDismissDelegate> * dismissDelegate;
@property(assign,readonly) UIBarButtonItem * doneBarButtonItem;
@property(assign,readwrite) SEL selectionAction;
@property(assign,retain) <ABStyleProvider> * styleProvider;

- (bool)_allowsAutorotation;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)attemptDismissAfterSelectingItem:(id)arg1;
- (id)cancelBarButtonItem;
- (void)cancelButtonClicked:(id)arg1;
- (void*)context;
- (void)dealloc;
- (id)defaultValue;
- (id)delegate;
- (id)dismissDelegate;
- (id)doneBarButtonItem;
- (SEL)selectionAction;
- (void)setContext:(void*)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissDelegate:(id)arg1;
- (void)setSelectionAction:(SEL)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)viewDidLoad;

@end