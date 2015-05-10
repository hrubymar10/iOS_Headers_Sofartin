/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {
    _UIInputViewControllerState *_cachedState;
    <_UIIVCInterface> *_forwardingInterface;
    <_UIIVCResponseDelegate> *_responseDelegate;
}

@property(getter=_cachedState,setter=_setCachedState:,assign,retain) _UIInputViewControllerState * cachedState;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) <_UIIVCInterface> * forwardingInterface;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) <_UIIVCResponseDelegate> * responseDelegate;
@property(assign,readonly) Class superclass;

- (id)_cachedState;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_setCachedState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)dealloc;
- (id)forwardingInterface;
- (id)init;
- (id)responseDelegate;
- (void)setForwardingInterface:(id)arg1;
- (void)setResponseDelegate:(id)arg1;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id)arg2;

@end
