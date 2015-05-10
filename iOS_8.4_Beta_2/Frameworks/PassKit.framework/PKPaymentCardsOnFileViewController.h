/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentCardsOnFileViewController : PKPaymentSetupTableViewController {
    NSArray *_cardsOnFile;
    PKPaymentWebService *_paymentWebService;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
}

- (void)_presentCardDetailsControllerForCredential:(id)arg1;
- (void)_presentManualAddController;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(long long)arg3 delegate:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
