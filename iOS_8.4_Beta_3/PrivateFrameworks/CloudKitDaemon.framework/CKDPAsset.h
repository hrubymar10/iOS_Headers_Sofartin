/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAsset : PBCodable <NSCopying> {
    NSString *_contentBaseURL;
    NSData *_data;
    NSString *_derivedContentType;
    NSString *_downloadBaseURL;
    NSData *_downloadRequest;
    NSString *_downloadToken;
    long long _downloadURLExpiration;
    struct { 
        unsigned int downloadURLExpiration : 1; 
        unsigned int size : 1; 
    } _has;
    NSData *_header;
    NSString *_owner;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordId;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSData *_signature;
    long long _size;
    NSString *_uploadReceipt;
}

@property (nonatomic, retain) NSString *contentBaseURL;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *derivedContentType;
@property (nonatomic, retain) NSString *downloadBaseURL;
@property (nonatomic, retain) NSData *downloadRequest;
@property (nonatomic, retain) NSString *downloadToken;
@property (nonatomic) long long downloadURLExpiration;
@property (nonatomic, readonly) bool hasContentBaseURL;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasDerivedContentType;
@property (nonatomic, readonly) bool hasDownloadBaseURL;
@property (nonatomic, readonly) bool hasDownloadRequest;
@property (nonatomic, readonly) bool hasDownloadToken;
@property (nonatomic) bool hasDownloadURLExpiration;
@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic, readonly) bool hasOwner;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasRecordId;
@property (nonatomic, readonly) bool hasReferenceSignature;
@property (nonatomic, readonly) bool hasRequestor;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasUploadReceipt;
@property (nonatomic, retain) NSData *header;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordId;
@property (nonatomic, retain) NSData *referenceSignature;
@property (nonatomic, retain) NSString *requestor;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) long long size;
@property (nonatomic, retain) NSString *uploadReceipt;

- (void).cxx_destruct;
- (id)contentBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)derivedContentType;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadBaseURL;
- (id)downloadRequest;
- (id)downloadToken;
- (long long)downloadURLExpiration;
- (bool)hasContentBaseURL;
- (bool)hasData;
- (bool)hasDerivedContentType;
- (bool)hasDownloadBaseURL;
- (bool)hasDownloadRequest;
- (bool)hasDownloadToken;
- (bool)hasDownloadURLExpiration;
- (bool)hasHeader;
- (bool)hasOwner;
- (bool)hasProtectionInfo;
- (bool)hasRecordId;
- (bool)hasReferenceSignature;
- (bool)hasRequestor;
- (bool)hasSignature;
- (bool)hasSize;
- (bool)hasUploadReceipt;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)owner;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (id)recordId;
- (id)referenceSignature;
- (id)requestor;
- (void)setContentBaseURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDerivedContentType:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setDownloadRequest:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setDownloadURLExpiration:(long long)arg1;
- (void)setHasDownloadURLExpiration:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (id)signature;
- (long long)size;
- (id)uploadReceipt;
- (void)writeTo:(id)arg1;

@end
