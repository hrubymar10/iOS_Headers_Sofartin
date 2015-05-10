/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosPickerViewController : UIViewController <PLAssetContainerListChangeObserver, PUSessionInfoObserver, UITabBarControllerDelegate> {
    PUTabbedLibraryViewController *__tabbedLibraryViewController;
    id _completionHandler;
    int _currentContentMode;
    PUPhotosPickerSessionInfo *_photosPickerSessionInfo;
    PUPhotosPickerViewControllerSpec *_spec;
}

@property(setter=_setTabbedLibraryViewController:,assign,retain) PUTabbedLibraryViewController * _tabbedLibraryViewController;
@property(assign,copy) id completionHandler;
@property(assign,readwrite) int currentContentMode;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithSpec:(id)arg1 targetAlbum:(struct NSObject { Class x1; }*)arg2 orTargetAlbumName:(id)arg3 isLocal:(bool)arg4;
- (void)_setTabbedLibraryViewController:(id)arg1;
- (id)_tabbedLibraryViewController;
- (void)assetContainerListDidChange:(id)arg1;
- (id)completionHandler;
- (int)currentContentMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithSpec:(id)arg1 targetAlbum:(struct NSObject { Class x1; }*)arg2;
- (id)initWithSpec:(id)arg1 targetAlbumName:(id)arg2 isLocal:(bool)arg3;
- (void)loadView;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setCurrentContentMode:(int)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;

@end
