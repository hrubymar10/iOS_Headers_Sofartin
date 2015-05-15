/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentCardManualEntryViewController : PKPaymentCardDetailsViewController <PKPaymentCameraCaptureViewControllerDelegate, UITextFieldDelegate> {
    UITableViewCell *_cardHolderNameCell;
    UITableViewCell *_cardNumberCell;
    UITextField *_cardNumberField;
    bool _cardNumberHasBecomeFirstResponder;
    NSDateFormatter *_dateFormatter;
    UITableViewCell *_expirationDateCell;
    UITextField *_expirationDateField;
    UIDatePicker *_expirationDatePicker;
    bool _hasScrolledToShowFields;
    bool _hasShown;
    bool _isCUPDebit;
    UITextField *_nameField;
    UIButton *_photoButton;
    UITableViewCell *_securityCodeCell;
    NSArray *_sortedCUPDebitBins;
    void *_unifiedMeCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_cameraCaptureCancelButtonPressed:(id)arg1;
- (void)_captureFromCamera:(id)arg1;
- (id)_cardHolderNameCell;
- (id)_cardNumberCell;
- (void)_checkAndAdjustForCUPDebit:(id)arg1;
- (void)_clearTextFieldColors;
- (id)_defaultCell;
- (void)_dismissCameraCaptureViewController:(id)arg1;
- (void)_displayNewExpiration:(id)arg1;
- (id)_expirationDateCell;
- (bool)_isCUPDebit:(id)arg1;
- (id)_name;
- (id)_securityCodeCell;
- (void)_setCUPDebitFieldsDisabled:(bool)arg1;
- (void)_updateTextField:(id)arg1 withDate:(id)arg2;
- (void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraCaptureViewControllerDidFail:(id)arg1;
- (void)dealloc;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)dummyTextField;
- (id)firstEmptyField;
- (void)handleNext:(id)arg1;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (bool)isComplete;
- (bool)isEmpty;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
