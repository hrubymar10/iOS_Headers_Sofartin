/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultError : PBCodable <NSCopying> {
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorExtension *_extensionError;
    struct { 
        unsigned int retryAfterSeconds : 1; 
    } _has;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
}

@property(assign,retain) CKDPResponseOperationResultErrorClient * clientError;
@property(assign,retain) NSString * errorDescription;
@property(assign,retain) NSString * errorInternal;
@property(assign,retain) NSString * errorKey;
@property(assign,retain) CKDPResponseOperationResultErrorExtension * extensionError;
@property(assign,readonly) bool hasClientError;
@property(assign,readonly) bool hasErrorDescription;
@property(assign,readonly) bool hasErrorInternal;
@property(assign,readonly) bool hasErrorKey;
@property(assign,readonly) bool hasExtensionError;
@property(assign,readwrite) bool hasRetryAfterSeconds;
@property(assign,readonly) bool hasServerError;
@property(assign,readwrite) int retryAfterSeconds;
@property(assign,retain) CKDPResponseOperationResultErrorServer * serverError;

- (void).cxx_destruct;
- (id)clientError;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDescription;
- (id)errorInternal;
- (id)errorKey;
- (id)extensionError;
- (bool)hasClientError;
- (bool)hasErrorDescription;
- (bool)hasErrorInternal;
- (bool)hasErrorKey;
- (bool)hasExtensionError;
- (bool)hasRetryAfterSeconds;
- (bool)hasServerError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)retryAfterSeconds;
- (id)serverError;
- (void)setClientError:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorInternal:(id)arg1;
- (void)setErrorKey:(id)arg1;
- (void)setExtensionError:(id)arg1;
- (void)setHasRetryAfterSeconds:(bool)arg1;
- (void)setRetryAfterSeconds:(int)arg1;
- (void)setServerError:(id)arg1;
- (void)writeTo:(id)arg1;

@end
