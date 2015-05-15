/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerViewController : UIViewController <_UIDocumentPickerServiceInvalidating> {
    UIViewController<_UIDocumentPickerContainedViewController> *_childViewController;
    _UIDocumentPickerContainerModel *_model;
    bool _rootContainer;
    _UINavigationControllerPalette *_searchPalette;
    _UIDocumentPickerViewServiceViewController *_weak_serviceViewController;
}

@property(assign,retain) UIViewController<_UIDocumentPickerContainedViewController> * childViewController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) _UIDocumentPickerContainerModel * model;
@property(getter=isRootContainer,assign,readwrite) bool rootContainer;
@property(assign,retain) _UINavigationControllerPalette * searchPalette;
@property(assign,readwrite) <_UIDocumentPickerServiceViewController> * serviceViewController;
@property(assign,readonly) Class superclass;

- (id)_mangledFilenameForURL:(id)arg1;
- (void)_pickCurrentLocationForUpload:(id)arg1;
- (void)_sortOrderViewChanged:(id)arg1;
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;
- (void)_updateForServiceView;
- (id)childViewController;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)ensureChildViewController;
- (id)initWithModel:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (bool)isRootContainer;
- (id)model;
- (id)searchPalette;
- (id)serviceViewController;
- (void)setChildViewController:(id)arg1;
- (void)setChildViewController:(id)arg1 animated:(bool)arg2;
- (void)setModel:(id)arg1;
- (void)setRootContainer:(bool)arg1;
- (void)setSearchPalette:(id)arg1;
- (void)setServiceViewController:(id)arg1;
- (void)setupPalettes;
- (void)teardownPalettes;
- (id)url;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
