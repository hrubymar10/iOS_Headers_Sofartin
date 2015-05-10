/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKLoadableContentViewController : GKViewController <GKStateMachineDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    GKLoadableContentStateMachine *_loadingMachine;
    NSArray *_viewsToHideWhileLoading;
}

@property(assign,retain) UIActivityIndicatorView * activityIndicator;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) GKLoadableContentStateMachine * loadingMachine;
@property(assign,retain) NSString * loadingState;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSArray * viewsToHideWhileLoading;

- (id)activityIndicator;
- (void)dealloc;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didExitLoadedState;
- (void)didExitLoadingState;
- (id)init;
- (id)loadingMachine;
- (id)loadingState;
- (void)setActivityIndicator:(id)arg1;
- (void)setLoadingMachine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setViewsToHideWhileLoading:(id)arg1;
- (id)viewsToHideWhileLoading;

@end