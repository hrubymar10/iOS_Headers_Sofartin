/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {
    CPLEngineFileStorage *_fileStorage;
    NSMutableSet *_identitiesToCommit;
    NSMutableSet *_identitiesToDelete;
    NSURL *_tempFolderURL;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) CPLEngineFileStorage * fileStorage;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) CPLPlatformObject * platformObject;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (bool)compactWithError:(id*)arg1;
- (id)createFileURLForUploadForResource:(id)arg1 error:(id*)arg2;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2;
- (id)fileStorage;
- (bool)hasResource:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)markResourceAsUploaded:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (bool)markResourceDoesNotNeedToBeUploaded:(id)arg1 error:(id*)arg2;
- (bool)markResourceFailedToUpload:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (bool)openWithError:(id*)arg1;
- (bool)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3;
- (bool)resetWithError:(id*)arg1;
- (id)retainFileURLForResource:(id)arg1 error:(id*)arg2;
- (unsigned long long)sizeOfResourcesToUpload;
- (bool)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (bool)storeResource:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)storeResourceForUpload:(id)arg1 error:(id*)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
