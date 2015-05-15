/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate> {
    bool _deallocating;
    PSSpecifier *_specifier;
    PSStackPushAnimationController *_stackAnimationController;
    NSMutableSet *_tasks;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (bool)processedBundle:(id)arg1 parentController:(id)arg2 parentSpecifier:(id)arg3 bundleControllers:(id*)arg4 settings:(id)arg5;
+ (id)readPreferenceValue:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
+ (void)writePreference:(id)arg1;

- (void)_delayedControllerReleaseAfterPop:(id)arg1;
- (void)_setNavigationBarHidden:(bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)addTask:(id)arg1;
- (id)aggregateDictionaryPath;
- (bool)busy;
- (bool)canBeShownFromSuspendedState;
- (id)contentViewForTopController;
- (void)dealloc;
- (bool)deallocating;
- (void)didDismissFormSheetView;
- (void)didDismissPopupView;
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)handleURL:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)parentController;
- (id)popToRootViewControllerAnimated:(bool)arg1;
- (id)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)pushController:(id)arg1;
- (void)pushController:(id)arg1 animate:(bool)arg2;
- (void)pushControllersAsStack:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)rootController;
- (void)sendWillBecomeActive;
- (void)sendWillResignActive;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(long long)arg2 rightButton:(id)arg3 withStyle:(long long)arg4;
- (id)specifier;
- (id)specifiers;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)statusBarWillChangeHeight:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)suspend;
- (void)taskFinished:(id)arg1;
- (bool)taskIsRunning:(id)arg1;
- (id)tasksDescription;
- (void)viewDidDisappear:(bool)arg1;
- (void)willBecomeActive;
- (void)willDismissFormSheetView;
- (void)willDismissPopupView;
- (void)willResignActive;
- (void)willUnlock;

@end
