/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentMenuViewController : UIViewController <UIAlertControllerContaining, _UIDocumentPickerRemoteViewControllerContaining> {
    UIAlertController *_alertController;
    NSMutableArray *_auxiliaryOptions;
    bool _dismissDelegateCalled;
    unsigned long long _documentPickerMode;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    NSURL *_uploadURL;
    <UIDocumentMenuDelegate> *_weak_delegate;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, retain) NSMutableArray *auxiliaryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentMenuDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissDelegateCalled;
@property (nonatomic) unsigned long long documentPickerMode;
@property (readonly) unsigned long long hash;
@property (getter=_remoteViewController, setter=_setRemoteViewController:, nonatomic, retain) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uploadURL;

- (void)_commonInitWithCompletion:(id)arg1;
- (id)_containedAlertController;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)_remoteViewController;
- (bool)_requiresCustomPresentationController;
- (void)_setRemoteViewController:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(id)arg4;
- (id)alertController;
- (id)auxiliaryOptions;
- (void)dealloc;
- (id)delegate;
- (bool)dismissDelegateCalled;
- (unsigned long long)documentPickerMode;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (void)setAlertController:(id)arg1;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissDelegateCalled:(bool)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setUploadURL:(id)arg1;
- (id)uploadURL;
- (void)viewWillAppear:(bool)arg1;

@end
