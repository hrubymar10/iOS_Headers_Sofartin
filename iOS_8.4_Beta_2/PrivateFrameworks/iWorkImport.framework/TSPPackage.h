/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackage : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SFUCryptoKey *_decryptionKey;
    TSPDocumentProperties *_documentProperties;
    <TSPFileCoordinatorDelegate> *_fileCoordinatorDelegate;
    unsigned long long _fileFormatVersion;
    struct { 
        unsigned int isLazyLoadingDocumentProperties : 1; 
        unsigned int isLazyLoadingZip : 1; 
    } _flags;
    bool _isClosed;
    NSError *_lastReloadError;
    NSHashTable *_packageDatas;
    unsigned char _packageIdentifier;
    TSUZipFileArchive *_zipArchive;
}

@property(assign,readonly) TSUZipFileArchive * componentZipArchive;
@property(assign,readonly) SFUCryptoKey * decryptionKey;
@property(assign,readonly) TSPDocumentProperties * documentProperties;
@property(assign,readonly) <TSPFileCoordinatorDelegate> * fileCoordinatorDelegate;
@property(assign,readonly) unsigned long long fileFormatVersion;
@property(assign,readonly) bool isClosed;
@property(assign,readonly) bool isPasswordProtected;
@property(assign,readonly) NSError * lastReloadError;
@property(assign,readonly) unsigned char packageIdentifier;
@property(assign,readonly) long long packageType;
@property(assign,readonly) NSString * passwordHint;
@property(assign,readonly) NSData * passwordVerifier;
@property(assign,retain) TSUZipFileArchive * zipArchive;

+ (id)dataEntryPathForFilename:(id)arg1;
+ (bool)isValidPackageAtURL:(id)arg1;
+ (id)newLazyPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4;
+ (id)newPackageWithURL:(id)arg1 packageIdentifier:(unsigned char)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 error:(id*)arg5;
+ (id)objectArchiveEntryPathForPackageLocator:(id)arg1;
+ (unsigned long long)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)checkPassword:(id)arg1;
- (id)componentZipArchive;
- (bool)containsData:(id)arg1;
- (void)copyComponent:(id)arg1 toPackageURL:(id)arg2 packageLocator:(id)arg3 zipFileWriter:(id)arg4 encryptionKey:(id)arg5 completion:(id)arg6;
- (id)dataAtRelativePath:(id)arg1 allowDecryption:(bool)arg2 error:(id*)arg3;
- (id)decryptionKey;
- (void)didCloseDocument;
- (void)didReadFileFormatVersion:(unsigned long long)arg1;
- (void)didReferenceData:(id)arg1;
- (bool)didReloadZipArchive:(id)arg1 error:(id*)arg2;
- (void)didRetrieveDecryptionKey:(id)arg1;
- (id)documentProperties;
- (unsigned long long)encodedLengthForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (void)enumerateDatasUsingBlock:(id)arg1;
- (id)fileCoordinatorDelegate;
- (unsigned long long)fileFormatVersion;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(bool)arg6;
- (id)initWithURL:(id)arg1 zipArchiveOrNil:(id)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(id)arg4 decryptionKey:(id)arg5 fileCoordinatorDelegate:(id)arg6 error:(id*)arg7;
- (bool)isClosed;
- (bool)isPasswordProtected;
- (id)keyFromPassword:(id)arg1;
- (id)keyFromPassword:(id)arg1 passwordVerifier:(id)arg2;
- (id)lastReloadError;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (id)newRawReadChannelForComponent:(id)arg1;
- (id)newReadChannelForComponent:(id)arg1;
- (id)newZipArchiveFromPackageURL:(id)arg1 isLazyLoading:(bool)arg2 error:(id*)arg3;
- (unsigned char)packageIdentifier;
- (long long)packageType;
- (id)passwordHint;
- (id)passwordVerifier;
- (void)peformSynchronousAccessToZipArchive:(id)arg1;
- (void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;
- (bool)reloadZipArchiveIfNeededWithURLImpl:(id)arg1 isLazyLoading:(bool)arg2 error:(id*)arg3;
- (void)setZipArchive:(id)arg1;
- (id)zipArchive;

@end
