/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    NSString *_clientName;
    int _clientProcessID;
    PHContentEditingOutput *_contentEditingOutput;
    bool _didChangeAdjustments;
    NSString *_editorBundleID;
    NSURL *_editorBundleURL;
    bool _entitled;
    PHChangeRequestHelper *_helper;
    NSData *_imageDataForInsertion;
    UIImage *_imageForInsertion;
    NSString *_imageTypeForInsertion;
    NSURL *_imageURLForInsertion;
    NSIndexSet *_supportedEditOperations;
    CLLocation *_updatedLocation;
    NSURL *_videoURLForInsertion;
}

@property(assign,readonly) NSString * clientName;
@property(assign,readonly) int clientProcessID;
@property(assign,retain) PHContentEditingOutput * contentEditingOutput;
@property(assign,retain) NSDate * creationDate;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isEntitled,assign,readonly) bool entitled;
@property(getter=isFavorite,assign,readwrite) bool favorite;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) PHChangeRequestHelper * helper;
@property(getter=isHidden,assign,readwrite) bool hidden;
@property(assign,retain) NSData * imageDataForInsertion;
@property(assign,retain) UIImage * imageForInsertion;
@property(assign,retain) NSString * imageTypeForInsertion;
@property(assign,retain) NSURL * imageURLForInsertion;
@property(assign,retain) CLLocation * location;
@property(assign,readonly) NSString * managedEntityName;
@property(assign,retain) NSDate * modificationDate;
@property(getter=isMutated,assign,readonly) bool mutated;
@property(getter=isNew,assign,readonly) bool new;
@property(assign,readonly) NSManagedObjectID * objectID;
@property(assign,readonly) PHObjectPlaceholder * placeholderForCreatedAsset;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSIndexSet * supportedEditOperations;
@property(assign,readonly) NSString * uuid;
@property(assign,retain) NSURL * videoURLForInsertion;

+ (id)_allAssetEditOperations;
+ (void)_createAssetFromImageData:(id)arg1 imageType:(id)arg2 uuid:(id)arg3 creationDate:(id)arg4;
+ (void)_createAssetFromVideoURL:(id)arg1 uuid:(id)arg2;
+ (id)changeRequestForAsset:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (void)deleteAssets:(id)arg1;

- (void).cxx_destruct;
- (long long)_mediaTypeForCreatedAsset;
- (bool)_validateContentEditingOutput:(id)arg1 error:(id*)arg2;
- (bool)_validateContentURL:(id)arg1 error:(id*)arg2 writeAccessRequired:(bool)arg3;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (bool)canGenerateUUIDLocally;
- (id)clientName;
- (int)clientProcessID;
- (id)contentEditingOutput;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)creationDate;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)imageDataForInsertion;
- (id)imageForInsertion;
- (id)imageTypeForInsertion;
- (id)imageURLForInsertion;
- (id)initForNewObject;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 entitled:(bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isEntitled;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isHiding;
- (bool)isMutated;
- (bool)isNew;
- (bool)isRevertingContentToOriginal;
- (id)location;
- (id)managedEntityName;
- (id)modificationDate;
- (id)mutations;
- (id)objectID;
- (id)placeholderForCreatedAsset;
- (void)revertAssetContentToOriginal;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(bool)arg5 fullSizeRenderSize:(struct CGSize { double x1; double x2; })arg6;
- (void)setContentEditingOutput:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImageDataForInsertion:(id)arg1;
- (void)setImageForInsertion:(id)arg1;
- (void)setImageTypeForInsertion:(id)arg1;
- (void)setImageURLForInsertion:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setSupportedEditOperations:(id)arg1;
- (void)setVideoURLForInsertion:(id)arg1;
- (id)supportedEditOperations;
- (id)uuid;
- (bool)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2;
- (bool)validateImageDataForAssetCreation:(id)arg1 error:(id*)arg2;
- (bool)validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (bool)validateVideoURLForAssetCreation:(id)arg1 error:(id*)arg2;
- (bool)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (id)videoURLForInsertion;

@end
