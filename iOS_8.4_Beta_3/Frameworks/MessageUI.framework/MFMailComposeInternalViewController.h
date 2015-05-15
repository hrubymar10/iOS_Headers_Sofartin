/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate> {
    NSMutableArray *_attachments;
    id _autorotationDelegate;
    _UIAsyncInvocation *_cancellationInvocation;
    int _composeResult;
    NSError *_composeResultError;
    NSMutableDictionary *_compositionValues;
    unsigned int _compositionValuesAreFinalized;
    unsigned int _delegateRespondsToBodyFinishedLoadingWithResult;
    unsigned int _didAppear;
    unsigned int _didEndDelayedPresentation;
    unsigned int _didFinish;
    unsigned int _hasDelayedPresentation;
    unsigned int _isAppearing;
    <MFMailComposeViewControllerDelegate> *_mailComposeDelegate;
    NSString *_placeholderSubject;
    MFMailComposePlaceholderViewController *_placeholderViewController;
    double _presentationDelayBeganTimestamp;
    unsigned int _remoteViewControllerIsConfigured;
    MFMailComposeRemoteViewController *_serviceViewController;
}

@property(assign,readwrite) id autorotationDelegate;
@property(assign,readwrite) <MFMailComposeViewControllerDelegate> * mailComposeDelegate;

- (void)_beginDelayingCompositionPresenation;
- (void)_cancelComposition:(id)arg1;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_configureRemoteViewContoller;
- (double)_delayedPresentationTimeout;
- (void)_didEndDelayingCompositionPresentation;
- (void)_endDelayingCompositionPresentation;
- (void)_finishServiceViewControllerRequestWithSuccess:(bool)arg1;
- (void)_loadContentViewControllerForcingPlaceholder:(bool)arg1;
- (void)_notifyBodyDidFinishLoadingWithResult:(bool)arg1;
- (void)_notifyCompositionDidFinish;
- (void)_serviceViewControllerReady:(id)arg1 error:(id)arg2;
- (void)_setCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)_setPlaceHolderSubject:(id)arg1;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)autorotationDelegate;
- (void)autosaveWithHandler:(id)arg1;
- (void)compositionFinishedWithResult:(int)arg1 error:(id)arg2;
- (void)compositionViewServiceTerminatedWithError:(id)arg1;
- (void)dealloc;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)mailComposeDelegate;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (void)setShowKeyboardImmediately:(bool)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end