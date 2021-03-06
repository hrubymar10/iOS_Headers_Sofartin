/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISharingViewController : UIViewController {
    NSString *_appName;
    NSString *_auxiliaryActionTitle;
    bool _collaborationUIEnabled;
    NSString *_headerActionTitle;
    NSString *_headerSubtitle;
    NSString *_initialHeaderSubtitle;
    NSString *_mailSubject;
    NSString *_mailTemplate;
    NSString *_messageTemplate;
    _UIShareInvitationRemoteViewController *_remoteViewController;
    _UIRemoteViewService *_remoteViewService;
    UIImage *_thumbnail;
    <_UISharingViewControllerDelegatePrivate> *_weak_delegate;
}

@property (getter=_privateDelegate, setter=_setPrivateDelegate:, nonatomic) <_UISharingViewControllerDelegate> *_privateDelegate;
@property (getter=_appName, setter=_setAppName:, nonatomic, copy) NSString *appName;
@property (getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:, nonatomic, copy) NSString *auxiliaryActionTitle;
@property (getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:, nonatomic) bool collaborationUIEnabled;
@property (nonatomic) <_UISharingViewControllerDelegate> *delegate;
@property (getter=_headerActionTitle, setter=_setHeaderActionTitle:, nonatomic, copy) NSString *headerActionTitle;
@property (getter=_headerSubtitle, setter=_setHeaderSubtitle:, nonatomic, copy) NSString *headerSubtitle;
@property (getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:, nonatomic, copy) NSString *initialHeaderSubtitle;
@property (getter=_mailSubject, setter=_setMailSubject:, nonatomic, copy) NSString *mailSubject;
@property (getter=_mailTemplate, setter=_setMailTemplate:, nonatomic, copy) NSString *mailTemplate;
@property (getter=_messageTemplate, setter=_setMessageTemplate:, nonatomic, copy) NSString *messageTemplate;
@property (getter=_remoteViewController, setter=_setRemoteViewController:, nonatomic, retain) _UIShareInvitationRemoteViewController *remoteViewController;
@property (nonatomic, retain) _UIRemoteViewService *remoteViewService;
@property (getter=_thumbnail, setter=_setThumbnail:, nonatomic, copy) UIImage *thumbnail;

- (id)_appName;
- (id)_auxiliaryActionTitle;
- (bool)_collaborationUIEnabled;
- (id)_headerActionTitle;
- (id)_headerSubtitle;
- (id)_initialHeaderSubtitle;
- (id)_mailSubject;
- (id)_mailTemplate;
- (id)_messageTemplate;
- (void)_performAuxiliaryActionWithCompletion:(id)arg1;
- (void)_performHeaderActionWithCompletion:(id)arg1;
- (id)_privateDelegate;
- (id)_remoteViewController;
- (void)_setAppName:(id)arg1;
- (void)_setAuxiliaryActionTitle:(id)arg1;
- (void)_setCollaborationUIEnabled:(bool)arg1;
- (void)_setHeaderActionTitle:(id)arg1;
- (void)_setHeaderSubtitle:(id)arg1;
- (void)_setInitialHeaderSubtitle:(id)arg1;
- (void)_setMailSubject:(id)arg1;
- (void)_setMailSubject:(id)arg1 template:(id)arg2;
- (void)_setMailTemplate:(id)arg1;
- (void)_setMessageTemplate:(id)arg1;
- (void)_setPrivateDelegate:(id)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setThumbnail:(id)arg1;
- (void)_shareDidChange;
- (void)_shareWasMadePrivate;
- (id)_thumbnail;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)remoteViewService;
- (void)setDelegate:(id)arg1;
- (void)setRemoteViewService:(id)arg1;

@end
