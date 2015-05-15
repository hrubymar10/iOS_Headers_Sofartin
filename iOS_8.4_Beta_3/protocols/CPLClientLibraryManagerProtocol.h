/* Generated by RuntimeBrowser.
 */

@protocol CPLClientLibraryManagerProtocol <NSObject>

@required

- (void)backgroundDownloadDidFailForResource:(CPLResource *)arg1;
- (void)backgroundDownloadDidFinishForResource:(CPLResource *)arg1;
- (void)downloadDidFinishForResourceTransferTask:(NSString *)arg1 finalResource:(CPLResource *)arg2 withError:(NSError *)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(NSString *)arg2;
- (void)downloadDidStartForResourceTransferTask:(NSString *)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 numberOfImages:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 numberOfOtherItems:(unsigned long long)arg4;
- (void)libraryManagerDidUpdateStatusWithProperties:(NSDictionary *)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)uploadDidStartForResource:(CPLResource *)arg1 withResourceTransferTask:(NSString *)arg2;
- (void)uploadOfResource:(CPLResource *)arg1 didFinishForResourceTransferTask:(NSString *)arg2 withError:(NSError *)arg3;
- (void)uploadOfResource:(CPLResource *)arg1 didProgress:(float)arg2 forResourceTransferTask:(NSString *)arg3;

@end
