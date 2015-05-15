/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter> {
    DDAction *_action;
    DDActionController *_actionController;
    bool _proxyConfigured;
    bool _waitingForRemoteConfiguration;
}

@property(assign,retain) DDAction * action;
@property(assign,readwrite) DDActionController * actionController;

+ (id)exportedInterface;
+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)serviceViewControllerInterface;

- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;
- (id)action;
- (id)actionController;
- (void)actionDidFinish;
- (void)getIsBeingPresentedInPopover:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setActionController:(id)arg1;
- (void)viewControllerReadyAndIsModal:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
