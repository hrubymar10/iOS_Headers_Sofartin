/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate> {
    bool _didDisappearUnderModalTransition;
    bool _isModalTransition;
    UIView *_viewToRemoveForSlideShow;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (bool)_isPerformingModalTransitionFromCamera;
- (void)beginSlideshowByRemovingView:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoAtIndexPath:(id)arg1 inAssetCollections:(id)arg2 dataSource:(id)arg3 lockStatusBar:(bool)arg4 delayImageLoading:(bool)arg5;
- (bool)isModalTransitioning;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end