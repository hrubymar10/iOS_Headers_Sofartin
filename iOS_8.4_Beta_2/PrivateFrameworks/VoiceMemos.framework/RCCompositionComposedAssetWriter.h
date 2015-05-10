/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionComposedAssetWriter : NSObject {
    bool _canGenerateWaveform;
    bool _canGenerateWaveformByProcessingAVURL;
    bool _canSaveCompositionMetadata;
    RCComposition *_composition;
    AVAssetExportSession *_exportSession;
    RCWaveformDataSource *_waveformDataSource;
}

@property(assign,readwrite) bool canGenerateWaveform;
@property(assign,readwrite) bool canGenerateWaveformByProcessingAVURL;
@property(assign,readwrite) bool canSaveCompositionMetadata;
@property(assign,readonly) RCComposition * composition;
@property(assign,readonly) float progress;

- (void).cxx_destruct;
- (void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(id)arg1;
- (void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(id)arg1;
- (void)_writeCompositionWithCompletionHandler:(id)arg1;
- (bool)canGenerateWaveform;
- (bool)canGenerateWaveformByProcessingAVURL;
- (bool)canSaveCompositionMetadata;
- (void)cancel;
- (id)composition;
- (id)initWithComposition:(id)arg1;
- (float)progress;
- (void)setCanGenerateWaveform:(bool)arg1;
- (void)setCanGenerateWaveformByProcessingAVURL:(bool)arg1;
- (void)setCanSaveCompositionMetadata:(bool)arg1;
- (void)writeCompositionWithCompletionBlock:(id)arg1;

@end
