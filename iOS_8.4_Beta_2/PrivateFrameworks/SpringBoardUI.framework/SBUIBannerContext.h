/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerContext : NSObject {
    bool _isValid;
    SBUIBannerItem *_item;
    NSString *_presentingActionIdentifier;
    bool _requestsModalPresentation;
    <SBUIBannerSource> *_source;
    <SBUIBannerTarget> *_target;
}

@property(assign,readonly) SBUIBannerAction * interactiveAction;
@property(assign,retain) SBUIBannerItem * item;
@property(assign,copy) NSString * presentingActionIdentifier;
@property(assign,readwrite) bool requestsModalPresentation;
@property(assign,retain) <SBUIBannerSource> * source;
@property(assign,retain) <SBUIBannerTarget> * target;
@property(getter=isValid,assign,readonly) bool valid;

- (void)dealloc;
- (id)description;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3;
- (id)initWithItem:(id)arg1 source:(id)arg2 target:(id)arg3 presentingActionIdentifier:(id)arg4 requestModalPresentation:(bool)arg5;
- (id)interactiveAction;
- (void)invalidate;
- (bool)isValid;
- (id)item;
- (id)presentingActionIdentifier;
- (bool)requestsModalPresentation;
- (void)setPresentingActionIdentifier:(id)arg1;
- (void)setRequestsModalPresentation:(bool)arg1;
- (id)source;
- (id)target;

@end
