/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {
    NSURL *_URL;
    bool _didEndWriteOperation;
    TSPObject *_documentObject;
    TSPPackageWriter *_documentPackageWriter;
    NSString *_documentPasswordHint;
    TSPDocumentProperties *_documentProperties;
    TSPDocumentRevision *_documentRevision;
    NSUUID *_documentUUID;
    SFUCryptoKey *_encryptionKey;
    NSURL *_originalSupportURL;
    long long _packageType;
    NSData *_passwordVerifier;
    NSProgress *_progress;
    NSURL *_relativeURLForExternalData;
    unsigned long long _saveToken;
    bool _shouldLeavePendingEndSave;
    TSPObject *_supportObject;
    TSPPackageWriter *_supportPackageWriter;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) bool didEndWriteOperation;
@property (nonatomic, retain) TSPObject *documentObject;
@property (nonatomic, retain) TSPPackageWriter *documentPackageWriter;
@property (nonatomic, copy) NSString *documentPasswordHint;
@property (nonatomic, retain) TSPDocumentProperties *documentProperties;
@property (nonatomic, retain) TSPDocumentRevision *documentRevision;
@property (nonatomic, copy) NSUUID *documentUUID;
@property (nonatomic, retain) SFUCryptoKey *encryptionKey;
@property (nonatomic, copy) NSURL *originalSupportURL;
@property (nonatomic, readonly) long long packageType;
@property (nonatomic, retain) NSData *passwordVerifier;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSURL *relativeURLForExternalData;
@property (nonatomic) unsigned long long saveToken;
@property (nonatomic) bool shouldLeavePendingEndSave;
@property (nonatomic, retain) TSPObject *supportObject;
@property (nonatomic, retain) TSPPackageWriter *supportPackageWriter;

- (void).cxx_destruct;
- (id)URL;
- (bool)didEndWriteOperation;
- (id)documentObject;
- (id)documentPackageWriter;
- (id)documentPasswordHint;
- (id)documentProperties;
- (id)documentRevision;
- (id)documentUUID;
- (id)encryptionKey;
- (id)init;
- (id)initWithURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;
- (id)originalSupportURL;
- (long long)packageType;
- (id)passwordVerifier;
- (id)progress;
- (id)relativeURLForExternalData;
- (unsigned long long)saveToken;
- (void)setDidEndWriteOperation:(bool)arg1;
- (void)setDocumentObject:(id)arg1;
- (void)setDocumentPackageWriter:(id)arg1;
- (void)setDocumentPasswordHint:(id)arg1;
- (void)setDocumentProperties:(id)arg1;
- (void)setDocumentRevision:(id)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setOriginalSupportURL:(id)arg1;
- (void)setPasswordVerifier:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRelativeURLForExternalData:(id)arg1;
- (void)setSaveToken:(unsigned long long)arg1;
- (void)setShouldLeavePendingEndSave:(bool)arg1;
- (void)setSupportObject:(id)arg1;
- (void)setSupportPackageWriter:(id)arg1;
- (bool)shouldLeavePendingEndSave;
- (id)supportObject;
- (id)supportPackageWriter;

@end
