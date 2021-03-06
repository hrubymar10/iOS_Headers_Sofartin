/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerServiceInvalidating, _UIDocumentPickerViewControllerHost> {
    NSExtension *_extension;
    <NSCopying><NSObject> *_extensionRequestIdentifier;
    NSString *_identifier;
    UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *_publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying><NSObject> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_didSelectPicker;
- (void)_didSelectURLWrapper:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)identifier;
- (void)invalidate;
- (id)publicController;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPublicController:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
