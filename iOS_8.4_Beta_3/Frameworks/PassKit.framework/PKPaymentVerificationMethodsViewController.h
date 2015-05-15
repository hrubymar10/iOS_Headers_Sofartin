/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupTableViewController {
    UIActivityIndicatorView *_activityIndicator;
    PKPaymentPass *_pass;
    UIImage *_passSnapshot;
    PKPaymentWebService *_paymentWebService;
    unsigned long long _selectedIndex;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSArray *_verificationChannels;
    id _verificationRequestHandler;
}

@property(assign,retain) UIImage * passSnapshot;
@property(assign,readwrite) <PKPaymentSetupViewControllerDelegate> * setupDelegate;
@property(assign,copy) id verificationRequestHandler;

- (id)_detailTextLabelForChanne:(id)arg1;
- (void)_disableCells;
- (void)_enableCells;
- (void)_showRequestError:(id)arg1;
- (void)_showSendCodeError:(id)arg1;
- (void)_terminateFlow;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passSnapshot;
- (void)send:(id)arg1;
- (void)setPassSnapshot:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setVerificationRequestHandler:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)verificationRequestHandler;
- (void)viewWillAppear:(bool)arg1;

@end
