/* Generated by RuntimeBrowser.
 */

@protocol UIDocumentInteractionControllerDelegatePrivate <UIDocumentInteractionControllerDelegate>

@optional

- (id)activityItemForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (NSArray *)additionalActivitiesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (UIImage *)documentInteractionControllerTransitionImageForPreview:(UIDocumentInteractionController *)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (NSURL *)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(UIDocumentInteractionController *)arg1;
- (void)documentInteractionControllerWillEndPreview:(UIDocumentInteractionController *)arg1;
- (LSDocumentProxy *)documentProxyForPreview:(UIDocumentInteractionController *)arg1 name:(NSString *)arg2 UTI:(NSString *)arg3;
- (NSArray *)excludedActivityTypesForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (UIPrintInfo *)printInfoForDocumentInteractionController:(UIDocumentInteractionController *)arg1;
- (bool)shouldBlockRemoteImagesInPreviewForDocumentInteractionController:(UIDocumentInteractionController *)arg1;

@end
