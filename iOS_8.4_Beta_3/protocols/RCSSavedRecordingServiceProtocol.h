/* Generated by RuntimeBrowser.
 */

@protocol RCSSavedRecordingServiceProtocol <NSObject>

@required

- (oneway void)disableOrphanHandlingWithCompletionBlock:(id)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(NSURL *)arg1 completionBlock:(id)arg2;
- (oneway void)enableOrphanHandlingWithCompletionBlock:(id)arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(NSURL *)arg1;
- (oneway void)endAccessSessionWithToken:(RCSSavedRecordingAccessToken *)arg1;
- (oneway void)fetchExportingCompositionAVURLs:(id)arg1;
- (oneway void)prepareToCaptureToCompositionAVURL:(NSURL *)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToExportCompositionAVURL:(NSURL *)arg1 cacheWaveform:(bool)arg2 accessRequestHandler:(id)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(NSURL *)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToTrimCompositionAVURL:(NSURL *)arg1 accessRequestHandler:(id)arg2;

@end
