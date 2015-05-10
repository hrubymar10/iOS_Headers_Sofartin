/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {
    NSDictionary *_cachedDataMap;
    TSPObject *_cachedMetadataObject;
    TSPComponent *_component;
    TSPObjectContext *_context;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)cachedMetadataObject;
- (bool)canResolveExternalReferences;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (id)initWithContext:(id)arg1 cachedMetadataObject:(id)arg2 cachedDataMap:(id)arg3;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isFromCopy;
- (id)metadataComponent;
- (long long)objectIdentifierForUUID:(id)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (bool)processMetadataObject:(id)arg1 error:(id*)arg2;
- (id)rootObjectComponent;
- (bool)shouldResolveExternalReferencesUsingObjectUUID;

@end
