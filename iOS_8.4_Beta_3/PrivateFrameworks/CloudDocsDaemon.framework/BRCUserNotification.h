/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserNotification : NSObject {
    struct __CFUserNotification { } *_cfUserNotification;
    NSMutableDictionary *_dialogInfo;
    NSObject<OS_dispatch_source> *_displaySource;
    unsigned long long _nextDisplayBeginTime;
    id _progressSubscriber;
    struct __CFRunLoopSource { } *_source;
}

- (void).cxx_destruct;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 options:(id)arg3 userReplyBlock:(id)arg4;
- (void)_displayDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(id)arg3;
- (void)_hideCurrentDialog;
- (id)_localizationKey:(id)arg1 forDocumentKindOfApplication:(id)arg2;
- (id)_localizationKey:(id)arg1 forOSAndDocumentKindOfApplication:(id)arg2;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2;
- (void)_updateDialogWithType:(unsigned long long)arg1 dict:(id)arg2 userReplyBlock:(id)arg3;
- (void)close;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)showErrorApplicationNotInstalledForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorApplicationProfileDisabledForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorDeviceOfflineForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorItemIsNoLongerSharedForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorParticipantLimitReachedForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorSaveShareForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorSetupiCloudForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErrorTurnOniCloudDriveForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showErroriCloudNotReachableForShareURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showGenericErrorForURL:(id)arg1 userReplyBlock:(id)arg2;
- (void)showShareConnectingUndeterminedProgressWithUserCancelReplyBlock:(id)arg1;
- (void)showShareDownloadingProgressForDocument:(id)arg1 withUserCancelReplyBlock:(id)arg2;
- (void)showShareDownloadingUndeterminedProgressWithUserCancelReplyBlock:(id)arg1;
- (void)showShareOpenDialogForShareURL:(id)arg1 shareInfo:(id)arg2 userReplyBlock:(id)arg3;
- (void)updateUndeterminedProgressCancelBlock:(id)arg1;

@end
