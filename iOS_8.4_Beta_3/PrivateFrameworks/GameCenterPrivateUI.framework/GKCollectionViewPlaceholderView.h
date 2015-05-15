/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionViewPlaceholderView : UICollectionReusableView <GKStateMachineDelegate> {
    long long _alignment;
    NSArray *_cachedConstraints;
    NSString *_errorMessage;
    NSString *_errorTitle;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderContentStateMachine *_loadingMachine;
    SEL _noContentButtonAction;
    id _noContentButtonTarget;
    NSString *_noContentButtonTitle;
    NSString *_noContentMessage;
    NSString *_noContentTitle;
    GKPlaceholderView *_placeholderView;
}

@property(assign,readwrite) long long alignment;
@property(assign,retain) NSArray * cachedConstraints;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * errorMessage;
@property(assign,retain) NSString * errorTitle;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) UIActivityIndicatorView * loadingIndicatorView;
@property(assign,retain) GKPlaceholderContentStateMachine * loadingMachine;
@property(assign,retain) NSString * loadingState;
@property(assign,readwrite) SEL noContentButtonAction;
@property(assign,readwrite) id noContentButtonTarget;
@property(assign,retain) NSString * noContentButtonTitle;
@property(assign,retain) NSString * noContentMessage;
@property(assign,retain) NSString * noContentTitle;
@property(assign,retain) GKPlaceholderView * placeholderView;
@property(assign,readonly) Class superclass;

- (long long)alignment;
- (void)buttonPressed;
- (id)cachedConstraints;
- (void)dealloc;
- (void)delayedShowLoadingIndicator;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitErrorState;
- (void)didExitLoadingState;
- (void)didExitNoContentState;
- (id)errorMessage;
- (id)errorTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)loadingIndicatorView;
- (id)loadingMachine;
- (id)loadingState;
- (SEL)noContentButtonAction;
- (id)noContentButtonTarget;
- (id)noContentButtonTitle;
- (id)noContentMessage;
- (id)noContentTitle;
- (id)placeholderView;
- (void)setAlignment:(long long)arg1;
- (void)setCachedConstraints:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setLoadingMachine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setNoContentButtonAction:(SEL)arg1;
- (void)setNoContentButtonTarget:(id)arg1;
- (void)setNoContentButtonTitle:(id)arg1;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)updateConstraints;

@end