/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINViewController : UIViewController {
    UIPrinterSetupPINView *_PINView;
    UIPrinterSetupConnectingView *_connectingView;
    PKPrinter *_printer;
    UIScrollView *_scrollView;
}

@property(assign,retain) UIPrinterSetupPINView * PINView;
@property(assign,retain) UIPrinterSetupConnectingView * connectingView;
@property(assign,retain) PKPrinter * printer;
@property(assign,retain) UIScrollView * scrollView;

- (id)PINView;
- (void)connectToPrinter;
- (void)connected:(bool)arg1;
- (id)connectingView;
- (void)dealloc;
- (id)initWithPrinter:(id)arg1;
- (void)loadView;
- (id)printer;
- (id)scrollView;
- (void)setConnectingView:(id)arg1;
- (void)setPINView:(id)arg1;
- (void)setPrinter:(id)arg1;
- (void)setScrollView:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showFailure;
- (void)showSetup;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
