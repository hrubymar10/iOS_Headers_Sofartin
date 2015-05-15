/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSPutRequestInfo : PBCodable <NSCopying> {
    NSMutableArray *_authHttpInfos;
    NSMutableArray *_cancelErrors;
    int _cancelledErrorCode;
    NSString *_cancelledErrorDomain;
    NSMutableArray *_chunkingInfos;
    int _chunksUploaded;
    NSString *_clientId;
    NSMutableArray *_completeHttpInfos;
    NSMutableArray *_containerHttpInfos;
    long long _duration;
    NSMutableArray *_errors;
    struct { 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int cancelledErrorCode : 1; 
        unsigned int chunksUploaded : 1; 
        unsigned int itemCount : 1; 
        unsigned int itemsAlreadyPresentCount : 1; 
        unsigned int itemsNotPresentCount : 1; 
        unsigned int itemsPartiallyPresentCount : 1; 
        unsigned int requestErrorCode : 1; 
    } _has;
    int _itemCount;
    int _itemsAlreadyPresentCount;
    int _itemsNotPresentCount;
    int _itemsPartiallyPresentCount;
    int _requestErrorCode;
    NSString *_requestErrorDomain;
    long long _startTime;
    long long _timestamp;
}

@property(assign,retain) NSMutableArray * authHttpInfos;
@property(assign,retain) NSMutableArray * cancelErrors;
@property(assign,readwrite) int cancelledErrorCode;
@property(assign,retain) NSString * cancelledErrorDomain;
@property(assign,retain) NSMutableArray * chunkingInfos;
@property(assign,readwrite) int chunksUploaded;
@property(assign,retain) NSString * clientId;
@property(assign,retain) NSMutableArray * completeHttpInfos;
@property(assign,retain) NSMutableArray * containerHttpInfos;
@property(assign,readwrite) long long duration;
@property(assign,retain) NSMutableArray * errors;
@property(assign,readwrite) bool hasCancelledErrorCode;
@property(assign,readonly) bool hasCancelledErrorDomain;
@property(assign,readwrite) bool hasChunksUploaded;
@property(assign,readonly) bool hasClientId;
@property(assign,readwrite) bool hasDuration;
@property(assign,readwrite) bool hasItemCount;
@property(assign,readwrite) bool hasItemsAlreadyPresentCount;
@property(assign,readwrite) bool hasItemsNotPresentCount;
@property(assign,readwrite) bool hasItemsPartiallyPresentCount;
@property(assign,readwrite) bool hasRequestErrorCode;
@property(assign,readonly) bool hasRequestErrorDomain;
@property(assign,readwrite) bool hasStartTime;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) int itemCount;
@property(assign,readwrite) int itemsAlreadyPresentCount;
@property(assign,readwrite) int itemsNotPresentCount;
@property(assign,readwrite) int itemsPartiallyPresentCount;
@property(assign,readwrite) int requestErrorCode;
@property(assign,retain) NSString * requestErrorDomain;
@property(assign,readwrite) long long startTime;
@property(assign,readwrite) long long timestamp;

- (void)addAuthHttpInfos:(id)arg1;
- (void)addCancelError:(id)arg1;
- (void)addChunkingInfos:(id)arg1;
- (void)addCompleteHttpInfos:(id)arg1;
- (void)addContainerHttpInfos:(id)arg1;
- (void)addError:(id)arg1;
- (id)authHttpInfos;
- (id)authHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)authHttpInfosCount;
- (id)cancelErrorAtIndex:(unsigned long long)arg1;
- (id)cancelErrors;
- (unsigned long long)cancelErrorsCount;
- (int)cancelledErrorCode;
- (id)cancelledErrorDomain;
- (id)chunkingInfos;
- (id)chunkingInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)chunkingInfosCount;
- (int)chunksUploaded;
- (void)clearAuthHttpInfos;
- (void)clearCancelErrors;
- (void)clearChunkingInfos;
- (void)clearCompleteHttpInfos;
- (void)clearContainerHttpInfos;
- (void)clearErrors;
- (id)clientId;
- (id)completeHttpInfos;
- (id)completeHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)completeHttpInfosCount;
- (id)containerHttpInfos;
- (id)containerHttpInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerHttpInfosCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)duration;
- (id)errorAtIndex:(unsigned long long)arg1;
- (id)errors;
- (unsigned long long)errorsCount;
- (bool)hasCancelledErrorCode;
- (bool)hasCancelledErrorDomain;
- (bool)hasChunksUploaded;
- (bool)hasClientId;
- (bool)hasDuration;
- (bool)hasItemCount;
- (bool)hasItemsAlreadyPresentCount;
- (bool)hasItemsNotPresentCount;
- (bool)hasItemsPartiallyPresentCount;
- (bool)hasRequestErrorCode;
- (bool)hasRequestErrorDomain;
- (bool)hasStartTime;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)itemCount;
- (int)itemsAlreadyPresentCount;
- (int)itemsNotPresentCount;
- (int)itemsPartiallyPresentCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestErrorCode;
- (id)requestErrorDomain;
- (void)setAuthHttpInfos:(id)arg1;
- (void)setCancelErrors:(id)arg1;
- (void)setCancelledErrorCode:(int)arg1;
- (void)setCancelledErrorDomain:(id)arg1;
- (void)setChunkingInfos:(id)arg1;
- (void)setChunksUploaded:(int)arg1;
- (void)setClientId:(id)arg1;
- (void)setCompleteHttpInfos:(id)arg1;
- (void)setContainerHttpInfos:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setErrors:(id)arg1;
- (void)setHasCancelledErrorCode:(bool)arg1;
- (void)setHasChunksUploaded:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasItemCount:(bool)arg1;
- (void)setHasItemsAlreadyPresentCount:(bool)arg1;
- (void)setHasItemsNotPresentCount:(bool)arg1;
- (void)setHasItemsPartiallyPresentCount:(bool)arg1;
- (void)setHasRequestErrorCode:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setItemCount:(int)arg1;
- (void)setItemsAlreadyPresentCount:(int)arg1;
- (void)setItemsNotPresentCount:(int)arg1;
- (void)setItemsPartiallyPresentCount:(int)arg1;
- (void)setRequestErrorCode:(int)arg1;
- (void)setRequestErrorDomain:(id)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)startTime;
- (long long)timestamp;
- (void)writeTo:(id)arg1;

@end