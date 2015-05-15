/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageStore : NSObject <NSCopying> {
    MFMessageStoreObjectCache *_objectCache;
    NSMutableSet *_uniqueStrings;
}

@property(assign,retain) MFMessageStoreObjectCache * objectCache;
@property(assign,copy) NSString * storagePath;

+ (Class)classForMimePart;
+ (Class)headersClass;
+ (void)setDefaultMessageHeadersClass:(Class)arg1;

- (id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(bool)arg2 updateFlags:(bool)arg3;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(bool)arg3 partial:(bool*)arg4;
- (void)_flushAllCaches;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(bool)arg3;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (id)bestAlternativeForPart:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(bool*)arg2 isPartial:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (bool)bodyFetchRequiresNetworkActivity;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(bool)arg2 updateFlags:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5;
- (bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(bool)arg5 didDownload:(bool*)arg6;
- (bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withConsumer:(id)arg3 downloadIfNecessary:(bool)arg4;
- (void)dealloc;
- (id)decryptedTopLevelPartForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5;
- (bool)hasCompleteDataForMimePart:(id)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(bool)arg2;
- (id)init;
- (id)newObjectCache;
- (id)objectCache;
- (void)setMessageClass:(Class)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3 forMessage:(id)arg4;
- (void)setStoragePath:(id)arg1;
- (id)storagePath;
- (id)uniquedString:(id)arg1;
- (bool)wantsLineEndingConversionForMIMEPart:(id)arg1;

@end
