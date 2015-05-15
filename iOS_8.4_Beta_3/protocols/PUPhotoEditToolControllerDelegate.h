/* Generated by RuntimeBrowser.
 */

@protocol PUPhotoEditToolControllerDelegate <NSObject>

@required

- (void)toolController:(PUPhotoEditToolController *)arg1 didChangePreferredPreviewViewInsetsAnimated:(bool)arg2;
- (void)toolController:(PUPhotoEditToolController *)arg1 updateModelDependentControlsAnimated:(bool)arg2;
- (CIImage *)toolControllerBaseCIImage:(PUPhotoEditToolController *)arg1;
- (UIImage *)toolControllerBaseImage:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeIsPerformingLiveInteraction:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangePreferredAlternateToolbarButton:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangePreferredRenderMode:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidChangeWantsDefaultPreviewView:(PUPhotoEditToolController *)arg1;
- (void)toolControllerDidFinish:(PUPhotoEditToolController *)arg1;
- (UIScrollView *)toolControllerImageScrollView:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerMainContainerView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditRenderer *)toolControllerMainRenderer:(PUPhotoEditToolController *)arg1;
- (struct CGSize { double x1; double x2; })toolControllerOriginalImageSize:(PUPhotoEditToolController *)arg1;
- (UIView *)toolControllerPreviewView:(PUPhotoEditToolController *)arg1;
- (PLPhotoEditModel *)toolControllerUneditedPhotoEditModel:(PUPhotoEditToolController *)arg1;

@end