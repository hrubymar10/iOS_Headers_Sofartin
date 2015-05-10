/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualLibraryUpdateAlertAction : UIAlertAction {
    bool _isDeleteLibraryUpdate;
}

@property(assign,readonly) bool isDeleteLibraryUpdate;

+ (void)_showDeleteConfirmationActionAlertControllerWithTitle:(id)arg1 deleteActionTitle:(id)arg2 presentingViewController:(id)arg3 existingAlertController:(id)arg4 existingPresentationSourceView:(id)arg5 existingPresentationSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 existingPresentationPermittedArrowDirections:(unsigned long long)arg7 deletionHandler:(id)arg8;
+ (void)getContextualLibraryAddRemoveAction:(id*)arg1 keepLocalAction:(id*)arg2 forEntityValueContext:(id)arg3 alertController:(id)arg4 didDismissHandler:(id)arg5;

- (bool)isDeleteLibraryUpdate;

@end
