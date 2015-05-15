/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterPickerController : NSObject {
    id _completionHandler;
    <UIPrinterPickerControllerDelegate> *_delegate;
    UIPrinter *_selectedPrinter;
    id _state;
}

@property(assign,readwrite) <UIPrinterPickerControllerDelegate> * delegate;
@property(assign,retain) UIPrinter * selectedPrinter;

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)arg1;

- (bool)_delegateFiltersPrinters;
- (id)_init;
- (void)_printerPickerDidDismiss;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (bool)_setupPickerPanel:(id)arg1;
- (bool)_shouldShowPrinter:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1;
- (id)init;
- (bool)presentAnimated:(bool)arg1 completionHandler:(id)arg2;
- (bool)presentFromBarButtonItem:(id)arg1 animated:(bool)arg2 completionHandler:(id)arg3;
- (bool)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3 completionHandler:(id)arg4;
- (oneway void)release;
- (id)selectedPrinter;
- (void)setDelegate:(id)arg1;
- (void)setSelectedPrinter:(id)arg1;

@end