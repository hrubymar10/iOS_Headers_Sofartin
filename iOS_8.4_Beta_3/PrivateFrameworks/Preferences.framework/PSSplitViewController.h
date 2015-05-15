/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSplitViewController : UISplitViewController {
    PSRootController *_containerNavigationController;
    <PSSplitViewControllerNavigationDelegate> *_navigationDelegate;
}

@property(assign,retain) PSRootController * containerNavigationController;
@property(assign,readwrite) <PSSplitViewControllerNavigationDelegate> * navigationDelegate;

- (id)childViewControllerForStatusBarStyle;
- (id)containerNavigationController;
- (void)dealloc;
- (id)navigationDelegate;
- (void)popRecursivelyToRootController;
- (void)setContainerNavigationController:(id)arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)setupControllerForToolbar:(id)arg1;
- (void)showInitialViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
