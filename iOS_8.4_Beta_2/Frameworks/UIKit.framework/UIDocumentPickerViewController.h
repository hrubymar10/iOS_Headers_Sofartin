/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {
    unsigned long long _documentPickerMode;
    _UIDocumentPickerRemoteViewController *_remoteViewController;
    _UIRemoteViewService *_remoteViewService;
    NSMutableArray *_stitchingTokens;
    NSURL *_uploadURL;
    <UIDocumentPickerDelegate> *_weak_delegate;
}

@property(assign,readwrite) <UIDocumentPickerDelegate> * delegate;
@property(assign,readwrite) unsigned long long documentPickerMode;
@property(getter=_remoteViewController,setter=_setRemoteViewController:,assign,retain) _UIDocumentPickerRemoteViewController * remoteViewController;
@property(assign,retain) _UIRemoteViewService * remoteViewService;
@property(assign,retain) NSMutableArray * stitchingTokens;
@property(assign,copy) NSURL * uploadURL;

+ (id)_extension;
+ (id)_identifier;
+ (id)image;
+ (id)localizedName;
+ (id)supportedContentTypes;
+ (unsigned long long)supportedModes;

- (void)_callDelegateWithSelectedURLAndDismiss:(id)arg1;
- (void)_commonInitWithCompletion:(id)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_finishStitching;
- (id)_initWithRemoteViewController:(id)arg1 inMode:(unsigned long long)arg2 uploadURLOrNil:(id)arg3;
- (void)_prepareForDeletionIfNecessary;
- (id)_remoteViewController;
- (void)_setRemoteViewController:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)addAuxiliaryOptionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)documentPickerMode;
- (id)initForSelectingDocumentMatchingTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithExistingDocumentAtURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)remoteViewService;
- (void)setDelegate:(id)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)setRemoteViewService:(id)arg1;
- (void)setStitchingTokens:(id)arg1;
- (void)setUploadURL:(id)arg1;
- (id)stitchingTokens;
- (id)uploadURL;

@end