/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCShareMemoViewController : UIActivityViewController {
    RCCompositionController *_compositionController;
}

@property (nonatomic, readonly) RCCompositionController *compositionController;

+ (id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 dismissHandler:(id)arg2;
+ (id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1;
+ (void)prepareToShareComposition:(id)arg1 ignoringInteraction:(bool)arg2 shouldContinuePreparingBlock:(id)arg3 preparedHandler:(id)arg4;
+ (void)presentInViewController:(id)arg1 composition:(id)arg2 ignoringInteraction:(bool)arg3 shouldContinuePreparingBlock:(id)arg4 preparedToPresentBlock:(id)arg5;
+ (id)unsupportedActivityTypes;

- (void).cxx_destruct;
- (id)compositionController;
- (id)initWithCompositionController:(id)arg1;
- (bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(bool)arg1;

@end
