/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditSaveRequest : NSObject {
    double _beginTimestamp;
    id _completionHandler;
    PHContentEditingOutput *_contentEditingOutput;
    long long _currentState;
    PLPhotoEditModel *_editModel;
    PHAsset *_photo;
    long long _workImageVersion;
}

@property(assign,readonly) PHContentEditingOutput * contentEditingOutput;
@property(assign,readonly) long long currentState;
@property(assign,copy) PLPhotoEditModel * editModel;
@property(assign,readonly) PHAsset * photo;
@property(assign,readonly) long long workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (void)_renderAndSaveBaseImage:(id)arg1 withOrientation:(long long)arg2 orientationForModelData:(long long)arg3 baseImageURL:(id)arg4;
- (void)_transitionToState:(long long)arg1;
- (void)beginSaveOperationWithCompletionHandler:(id)arg1;
- (void)cancelSaveOperation;
- (id)contentEditingOutput;
- (long long)currentState;
- (id)editModel;
- (id)init;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (id)photo;
- (long long)workImageVersion;

@end