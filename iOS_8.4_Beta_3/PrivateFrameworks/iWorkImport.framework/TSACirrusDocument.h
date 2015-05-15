/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate> {
    NSURL *_URL;
    TSPObjectContext *_context;
    NSString *_documentPasswordHint;
    bool _isClosed;
    TSUTemporaryDirectory *_tempDirForSupport;
}

@property(assign,copy) NSURL * URL;
@property(assign,readonly) bool areNewExternalReferencesToDataAllowed;
@property(assign,readonly) NSUUID * baseUUIDForObjectUUID;
@property(assign,readonly) TSKCollaborationState * collaborationState;
@property(assign,retain) TSPObjectContext * context;
@property(assign,copy) NSString * debugDescription;
@property(assign,readonly) NSString * defaultDraftName;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSString * documentCachePath;
@property(assign,readonly) NSString * documentPasswordHint;
@property(assign,readonly) TSADocumentRoot * documentRoot;
@property(assign,readonly) <NSFilePresenter> * filePresenter;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool ignoreDocumentSupport;
@property(assign,readonly) bool isDocumentSupportTemporary;
@property(assign,readonly) bool isInCollaborationMode;
@property(assign,readonly) bool isInReadOnlyMode;
@property(assign,readonly) NSString * name;
@property(assign,readonly) bool preserveDocumentRevisionIdentifierForSequenceZero;
@property(assign,readonly) bool skipDocumentUpgrade;
@property(assign,readonly) Class superclass;

- (id)URL;
- (void)close;
- (id)context;
- (void)dealloc;
- (id)documentCachePath;
- (void)documentDidLoad;
- (id)documentPasswordHint;
- (id)documentPasswordHintForWrite;
- (id)documentRoot;
- (id)initWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 error:(id*)arg4 passphrase:(id)arg5;
- (id)name;
- (void)presentPersistenceError:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)skipDocumentUpgrade;
- (id)supportDirectoryURL;

@end