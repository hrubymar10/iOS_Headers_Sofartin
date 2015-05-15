/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionController : NSObject {
    NSMutableDictionary *_accessTokensByName;
    RCCaptureSession *_activeCaptureSession;
    RCComposition *_composition;
    bool _hasStartedRecording;
    NSMutableArray *_undoableCompositionItemStack;
}

@property (nonatomic, readonly) RCCaptureSession *activeCaptureSession;
@property (nonatomic, retain) RCComposition *composition;
@property (nonatomic, readonly) unsigned long long countOfUndoableCompositions;
@property (nonatomic, readonly) bool isTopUndoableCompositionFromCapture;
@property (nonatomic, readonly) NSURL *savedRecordingURI;

+ (id)compositionControllerForComposedAVURL:(id)arg1;

- (void).cxx_destruct;
- (id)_activitySourceRecording;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(bool)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(bool)arg1;
- (void)_endAccessSessionWithToken:(id)arg1;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(struct { double x1; double x2; })arg1 isOverdub:(bool)arg2;
- (void)_reloadComposition;
- (id)activeCaptureSession;
- (void)activeRecordingSessionWillFinish;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)beginAccessSessionToExportWithAssetReadyBlock:(id)arg1;
- (void)beginAccessSessionToPlayTimeRange:(struct { double x1; double x2; })arg1 readyToPlayBlock:(id)arg2;
- (void)beginAccessSessionToTrimAsCopy:(bool)arg1 assetReadyBlock:(id)arg2;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(struct { double x1; double x2; })arg2 isUndoable:(bool)arg3 isOverdub:(bool)arg4 sessionPreparedBlock:(id)arg5 sessionFinishedBlock:(id)arg6;
- (id)composition;
- (unsigned long long)countOfUndoableCompositions;
- (void)deleteCompositionFromFileSystem;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)endAccessSessions;
- (void)endEditing;
- (void)endPreviewAccessSession;
- (void)endTrimAccessSession;
- (void)finalizingComposedAssetWithCompletionHandler:(id)arg1;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (bool)isTopUndoableCompositionFromCapture;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(id)arg2;
- (void)performCompositionUndoWithCompletionBlock:(id)arg1;
- (void)prepareToBeginEditingWithReadyBlock:(id)arg1;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(bool)arg1 composeWaveform:(bool)arg2 canGenerateWaveformByProcessingAVURL:(bool)arg3 completionBlock:(id)arg4;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)sanitizeWithCompletionBlock:(id)arg1;
- (id)savedRecordingURI;
- (void)setComposition:(id)arg1;

@end
