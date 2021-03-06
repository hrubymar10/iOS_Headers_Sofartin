/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    bool _clearCurrentPrinter;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    bool _loaded;
    PKPrinter *_lockedPrinter;
    double _maximumPopoverHeight;
    NSMutableArray *_otherPrinters;
    <UIPrinterBrowserOwner> *_ownerPanelViewController;
    NSMutableArray *_preferredPrinters;
    PKPrinterBrowser *_printerBrowser;
    UIPrinterSearchingView *_searchingView;
    bool _shouldFilterPrinters;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) double maximumPopoverHeight;
@property(assign,readonly) Class superclass;

- (void)addPrinter:(id)arg1 moreComing:(bool)arg2;
- (void)adjustPopoverSize;
- (void)dealloc;
- (id)initWithOwnerViewController:(id)arg1;
- (void)loadView;
- (double)maximumPopoverHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)printerAtIndexPath:(id)arg1;
- (void)removePrinter:(id)arg1 moreGoing:(bool)arg2;
- (void)selectPrinter:(id)arg1;
- (void)setMaximumPopoverHeight:(double)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showCancelButton;
- (void)startPrinterBrowser;
- (void)stopPrinterBrowser;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSearching;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willEnterForeground;

@end
