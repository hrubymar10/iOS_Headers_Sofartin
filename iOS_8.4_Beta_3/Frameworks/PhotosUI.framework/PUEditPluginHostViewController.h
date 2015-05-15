/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditPluginHostViewController : UIViewController <PLDismissableViewController> {
    bool __didHandleCancel;
    bool __didHandleDone;
    id __disablingIdleTimerToken;
    bool __extensionDidBeginContentEditing;
    UIViewController *__remoteViewController;
    <NSCopying> *__request;
    <PUEditPluginHostViewControllerDataSource> *_dataSource;
    <PUEditPluginHostViewControllerDelegate> *_delegate;
    PUEditPlugin *_plugin;
}

@property(setter=_setDidHandleCancel:,assign,readwrite) bool _didHandleCancel;
@property(setter=_setDidHandleDone:,assign,readwrite) bool _didHandleDone;
@property(setter=_setDisablingIdleTimerToken:,assign,retain) id _disablingIdleTimerToken;
@property(setter=_setExtensionDidBeginContentEditing:,assign,readwrite) bool _extensionDidBeginContentEditing;
@property(setter=_setRemoteViewController:,assign,retain) UIViewController * _remoteViewController;
@property(setter=_setRequest:,assign,copy) <NSCopying> * _request;
@property(assign,readwrite) <PUEditPluginHostViewControllerDataSource> * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PUEditPluginHostViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) PUEditPlugin * plugin;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_beginContentEditingWithCompletionHandler:(id)arg1 timeout:(double)arg2;
- (void)_beginDisablingIdleTimer;
- (bool)_didHandleCancel;
- (bool)_didHandleDone;
- (id)_disablingIdleTimerToken;
- (void)_dismiss;
- (void)_endDisablingIdleTimerIfNecessary;
- (bool)_extensionDidBeginContentEditing;
- (id)_extensionVendorProxy;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (id)_hostContext;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(id)arg1 timeout:(double)arg2;
- (id)_remoteViewController;
- (id)_request;
- (void)_setDidHandleCancel:(bool)arg1;
- (void)_setDidHandleDone:(bool)arg1;
- (void)_setDisablingIdleTimerToken:(id)arg1;
- (void)_setExtensionDidBeginContentEditing:(bool)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRequest:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithPlugin:(id)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(id)arg1;
- (void)loadView;
- (id)plugin;
- (bool)prefersStatusBarHidden;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id)arg2 timeout:(double)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
