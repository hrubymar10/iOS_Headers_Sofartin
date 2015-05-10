/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptViewController : SUScriptObject {
    NSArray *_scriptToolbarItems;
}

@property(assign,retain) id backgroundColor;
@property(assign,readonly) NSString * contextDictionary;
@property(assign,retain) SUScriptViewController * inputAccessoryViewController;
@property(assign,retain) NSString * modalPresentationStyle;
@property(assign,readonly) NSString * modalPresentationStyleNameFormSheet;
@property(assign,readonly) NSString * modalPresentationStyleNameFullScreen;
@property(assign,readonly) SUScriptViewController * modalViewController;
@property(assign,retain) UIViewController * nativeViewController;
@property(assign,readonly) SUScriptNavigationController * navigationController;
@property(assign,readonly) SUScriptNavigationItem * navigationItem;
@property(assign,readonly) SUScriptPopOver * popOver;
@property(assign,readonly) SUScriptViewController * presentingViewController;
@property(assign,retain) SUScriptSection * section;
@property(assign,readwrite) id showsLibraryButton;
@property(assign,readonly) SUScriptSplitViewController * splitViewController;
@property(assign,copy) id toolbarItems;
@property(assign,retain) id topBackgroundColor;
@property(assign,retain) SUScriptViewController * transientViewController;
@property(assign,readwrite) id usesBlurredBackground;
@property(assign,readonly) SUScriptViewController * volumeViewController;
@property(assign,readwrite) id wantsFullScreenLayout;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_dismissModalViewControllerAnimated:(bool)arg1;
- (void)_dismissModalViewControllerWithTransition:(id)arg1;
- (id)_parentViewControllerForVolumeViewController;
- (void)_presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (int)_transitionForString:(id)arg1;
- (void)addPassbookPassWithURL:(id)arg1;
- (id)attributeKeys;
- (id)backgroundColor;
- (id)contextDictionary;
- (void)dealloc;
- (void)dismissModalViewControllerAnimated:(bool)arg1;
- (void)dismissModalViewControllerWithTransition:(id)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)dismissVolumeViewControllerAnimated:(id)arg1;
- (bool)equals:(id)arg1;
- (id)inputAccessoryViewController;
- (id)modalPresentationStyle;
- (id)modalPresentationStyleNameFormSheet;
- (id)modalPresentationStyleNameFullScreen;
- (id)modalViewController;
- (id)nativeViewController;
- (id)navigationController;
- (id)navigationItem;
- (id)newNativeViewController;
- (id)newScriptColorWithValue:(id)arg1;
- (id)popOver;
- (void)presentModalViewController:(id)arg1 withTransition:(id)arg2;
- (void)presentVolumeViewController:(id)arg1 animated:(id)arg2;
- (id)presentingViewController;
- (void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3;
- (id)scriptAttributeKeys;
- (id)section;
- (void)setBackgroundColor:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setModalPresentationStyle:(id)arg1;
- (void)setNativeViewController:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShowsLibraryButton:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(bool)arg2;
- (void)setTopBackgroundColor:(id)arg1;
- (void)setTransientViewController:(id)arg1;
- (void)setUsesBlurredBackground:(id)arg1;
- (void)setWantsFullScreenLayout:(id)arg1;
- (id)showsLibraryButton;
- (id)splitViewController;
- (void)tearDownUserInterface;
- (id)toolbarItems;
- (id)topBackgroundColor;
- (id)transientViewController;
- (id)usesBlurredBackground;
- (id)volumeViewController;
- (id)wantsFullScreenLayout;

@end