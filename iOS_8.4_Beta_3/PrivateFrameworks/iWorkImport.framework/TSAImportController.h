/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAImportController : NSObject <NSFilePresenter, TSADocumentRootDelegate, TSKImportExportDelegate, TSPObjectContextDelegate> {
    NSMutableArray *_deferredWriters;
    <TSAImportDelegate> *_delegate;
    TSPObjectContext *_documentContext;
    NSString *_documentType;
    NSURL *_documentURL;
    NSError *_error;
    struct { 
        unsigned int success : 1; 
        unsigned int isPasswordProtected : 1; 
        unsigned int isCleanedUp : 1; 
        unsigned int isImportCancelled : 1; 
        unsigned int preserveDocumentAfterImport : 1; 
        unsigned int shouldNotifyProgress : 1; 
    } _flags;
    NSMutableSet *_importWarnings;
    <TSKImporter> *_importer;
    NSObject<OS_dispatch_group> *_passphraseCompletionGroup;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_presentedItemURL;
    TSUProgressContext *_progressContext;
    NSString *_sourcePath;
    TSUTemporaryDirectory *_temporaryDFFDirectory;
    TSUTemporaryDirectory *_temporaryDirectory;
}

@property (nonatomic, readonly) bool areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *baseUUIDForObjectUUID;
@property (nonatomic, readonly) TSKCollaborationState *collaborationState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultDraftName;
@property (nonatomic) <TSAImportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentCachePath;
@property (nonatomic, readonly) TSPObjectContext *documentContext;
@property (nonatomic, readonly) long long documentTypeCategory;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (nonatomic, readonly) bool hasWarnings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreDocumentSupport;
@property (nonatomic, readonly) <TSKImporter> *importer;
@property (nonatomic, readonly) bool importingDesignDemoDoc;
@property (nonatomic, readonly) bool isBrowsingVersions;
@property (nonatomic, readonly) bool isDocumentSupportTemporary;
@property (nonatomic, readonly) bool isImportCancelled;
@property (nonatomic, readonly) bool isInCollaborationMode;
@property (nonatomic, readonly) bool isInReadOnlyMode;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (nonatomic, readonly) NSString *name;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (nonatomic) bool preserveDocumentAfterImport;
@property (nonatomic, readonly) bool preserveDocumentRevisionIdentifierForSequenceZero;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (nonatomic, retain) TSUProgressContext *progressContext;
@property (nonatomic, readonly) NSString *sourcePath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *temporaryURL;

- (void)_beginImport;
- (void)_continueImportWithSuccess:(bool)arg1 error:(id)arg2 completedSteps:(int)arg3;
- (void)_performImportWithCompletedSteps:(int)arg1;
- (id)_prepareTemplate:(id)arg1;
- (bool)_saveContextToTemporaryURL:(id)arg1 passphrase:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id*)arg5;
- (void)_setPresentedItemURL:(id)arg1;
- (void)addIncompatibleMovieInfo:(id)arg1 withCompatibilityLevel:(long long)arg2;
- (void)addPersistenceWarnings:(id)arg1;
- (void)addWarning:(id)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (bool)areNewExternalReferencesToDataAllowed;
- (bool)beginImport;
- (void)beginImportAsync;
- (void)cancelImport;
- (void)dealloc;
- (id)defaultDraftName;
- (id)delegate;
- (void)didBeginImportToTemporaryURL:(id)arg1;
- (void)didSaveImportedDocumentWithPassphrase:(id)arg1;
- (id)documentContext;
- (long long)documentTypeCategory;
- (id)error;
- (void)finishImportWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)hasWarnings;
- (bool)ignoreDocumentSupport;
- (bool)import;
- (id)importer;
- (Class)importerClass;
- (id)initWithPath:(id)arg1 delegate:(id)arg2;
- (id)initWithPath:(id)arg1 documentType:(id)arg2 delegate:(id)arg3;
- (bool)isBrowsingVersions;
- (bool)isImportCancelled;
- (bool)isPasswordProtected;
- (id)makeObjectContextWithTemplateInfo:(id)arg1 error:(id*)arg2;
- (id)name;
- (bool)needsFileCoordination;
- (id)packageDataForWrite;
- (void)prepareForImportDisplayingProgress:(bool)arg1;
- (void)presentPersistenceError:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (bool)preserveDocumentAfterImport;
- (id)progressContext;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)removeFilePresenter;
- (void)removeWarning:(id)arg1;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPreserveDocumentAfterImport:(bool)arg1;
- (void)setProgressContext:(id)arg1;
- (void)showProgressIfNeededForURL:(id)arg1;
- (id)sourcePath;
- (id)templateInfoWithName:(id)arg1;
- (id)templateInfoWithName:(id)arg1 variantIndex:(unsigned long long)arg2;
- (id)temporaryURL;
- (id)warnings;
- (void)willSaveImportedDocument;

@end
