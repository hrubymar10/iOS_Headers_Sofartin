/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate> {
    TSPObjectContext *_context;
    bool _resetObjectUUIDs;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (long long)componentWriterMode;
- (id)createMetadataForRootObject:(id)arg1 dataArchiver:(id)arg2 objectUUIDToIdentifierDictionary:(id)arg3 externalReferences:(id)arg4 weakExternalReferences:(id)arg5 lazyReferences:(id)arg6 dataReferences:(id)arg7 error:(id*)arg8;
- (void)encodeDeepCopyOfObject:(id)arg1 options:(id)arg2 completion:(id)arg3;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)skipMetadataObjectSerialization;

@end
