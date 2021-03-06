/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDeletePhotosActionController : NSObject {
    UIBarButtonItem *__referenceBarButtonItem;
    long long _action;
    UIAlertController *_actionSheetController;
    NSArray *_additionalAssetsToDelete;
    NSArray *_assets;
    id _completionHandler;
    bool _handlesDuplicates;
    UIAlertController *_oneTimeConfirmation;
    UIAlertController *_overQuotaConfirmation;
    PLPhotoLibrary *_photoLibrary;
    UIViewController *_referenceViewController;
    id _willDeleteHandler;
}

@property(setter=_setReferenceBarButtonItem:,assign,retain) UIBarButtonItem * _referenceBarButtonItem;
@property(assign,readonly) long long action;
@property(assign,readonly) NSArray * assets;
@property(assign,readonly) bool handlesDuplicates;
@property(assign,readonly) PLPhotoLibrary * photoLibrary;

- (void)_actionSheetDeletePressed:(bool)arg1;
- (void)_didCompleteWithDestructiveAction:(bool)arg1;
- (void)_getDeleteActionSheetTitle:(id*)arg1 destructiveButtonTitle:(id*)arg2 cancelButtonTitle:(id*)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5;
- (void)_oneTimeAlertConfirmed;
- (void)_overQuotaAlertConfirmed:(bool)arg1;
- (id)_referenceBarButtonItem;
- (void)_setReferenceBarButtonItem:(id)arg1;
- (void)_setupActionSheet;
- (void)_setupOnetimeConfirmationSheet;
- (void)_setupOverQuotaConfirmationSheet;
- (void)_showOnetimeConfirmation;
- (void)_showOverQuotaConfirmationSheet;
- (long long)action;
- (id)assets;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;
- (bool)handlesDuplicates;
- (id)initWithPhotoLibrary:(id)arg1 assets:(id)arg2 action:(long long)arg3 handleDuplicates:(bool)arg4;
- (id)photoLibrary;
- (id)presentInViewController:(id)arg1 fromBarButtonItem:(id)arg2 willDeleteHAndler:(id)arg3 completionHandler:(id)arg4;
- (void)redisplayInViewController:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)runDestructiveActionWithCompletion:(id)arg1;

@end
