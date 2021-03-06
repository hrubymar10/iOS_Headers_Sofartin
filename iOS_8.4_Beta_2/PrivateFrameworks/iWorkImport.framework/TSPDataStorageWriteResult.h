/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataStorageWriteResult : NSObject {
    bool _didCopyDataToPackage;
    <TSPCryptoInfo> *_encryptionInfo;
    NSString *_filename;
    bool _isMissingData;
}

@property(assign,readonly) bool didCopyDataToPackage;
@property(assign,readonly) <TSPCryptoInfo> * encryptionInfo;
@property(assign,readonly) NSString * filename;
@property(assign,readonly) bool isMissingData;

- (void).cxx_destruct;
- (bool)didCopyDataToPackage;
- (id)encryptionInfo;
- (id)filename;
- (id)initWithFilename:(id)arg1 encryptionInfo:(id)arg2 didCopyDataToPackage:(bool)arg3 isMissingData:(bool)arg4;
- (bool)isMissingData;

@end
