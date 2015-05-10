/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSaveOperationState : NSObject {
    NSMapTable *_newDataStorages;
    int _sampleID;
    long long _updateType;
}

@property(assign,readonly) bool preserveDocumentUUID;
@property(assign,readwrite) int sampleID;
@property(assign,readonly) bool shouldUpdate;
@property(assign,readonly) long long updateType;

- (void).cxx_destruct;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (void)enumerateDatasAndStoragesUsingBlock:(id)arg1;
- (bool)hasNewStorageForData:(id)arg1;
- (id)init;
- (id)initWithUpdateType:(long long)arg1;
- (bool)preserveDocumentUUID;
- (int)sampleID;
- (void)setSampleID:(int)arg1;
- (bool)shouldUpdate;
- (long long)updateType;

@end
