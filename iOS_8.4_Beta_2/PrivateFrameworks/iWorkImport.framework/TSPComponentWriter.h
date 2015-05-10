/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentWriter : NSObject {
    NSHashTable *_analyzedCommandToModelReferences;
    NSHashTable *_archivedObjects;
    NSMapTable *_archivedObjectsDictionary;
    TSPArchiverManager *_archiverManager;
    NSHashTable *_commandToModelReferences;
    TSPComponent *_component;
    NSHashTable *_dataReferences;
    <TSPComponentWriterDelegate> *_delegate;
    NSObject<OS_dispatch_semaphore> *_delegateSemaphore;
    NSHashTable *_externalReferences;
    struct { 
        unsigned int success : 1; 
        unsigned int isErrorRecoverable : 1; 
        unsigned int delegateRespondsToNeedsDocumentRecovery : 1; 
        unsigned int delegateRespondsToLocatorForClaimingComponent : 1; 
        unsigned int delegateRespondsToObjectBelongsToLinkedComponent : 1; 
        unsigned int delegateRespondsToExternalPackageDidWriteObject : 1; 
        unsigned int delegateRespondsToShouldDelayWritingObject : 1; 
    } _flags;
    NSObject<OS_dispatch_queue> *_globalConcurrentQueue;
    NSHashTable *_indirectCommandToModelExternalReferences;
    NSHashTable *_lazyReferences;
    NSString *_locator;
    long long _mode;
    NSHashTable *_newCommandToModelReferences;
    struct vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry> > { 
        struct ObjectStackEntry {} *__begin_; 
        struct ObjectStackEntry {} *__end_; 
        struct __compressed_pair<TSP::ObjectStackEntry *, std::__1::allocator<TSP::ObjectStackEntry> > { 
            struct ObjectStackEntry {} *__first_; 
        } __end_cap_; 
    } _objectStack;
    NSMutableDictionary *_objectUUIDToIdentifierDictionary;
    unsigned char _packageIdentifier;
    unsigned long long _readVersion;
    TSPObject *_rootObject;
    NSHashTable *_weakReferences;
    <TSPComponentWriteChannel> *_writeChannel;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSObject<OS_dispatch_queue> *_writeQueue;
    unsigned long long _writeVersion;
}

@property(assign,readonly) TSPComponent * component;
@property(assign,readonly) unsigned long long readVersion;
@property(assign,readonly) unsigned long long writeVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCommandToModelReferences:(id)arg1 parentObject:(id)arg2;
- (void)analyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(bool)arg2 archiver:(id)arg3 completion:(id)arg4;
- (bool)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2;
- (id)commandToModelReferencesToWrite;
- (id)component;
- (id)init;
- (id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 writeChannel:(id)arg7 archiverManager:(id)arg8;
- (bool)isObjectExternal:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 validateAmbiguousObjectOwnership:(bool)arg4 hasArchiverAccessLock:(bool)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(bool*)arg7;
- (bool)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id*)arg3 claimingPackageIdentifier:(unsigned char*)arg4 claimingComponentWillBeLinked:(bool*)arg5;
- (bool)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg1 archiverOrNil:(id)arg2 claimingComponentOrNil:(id)arg3 hasArchiverAccessLock:(bool)arg4 explicitComponentRootObject:(id*)arg5 claimingComponent:(id*)arg6 isOwnedByDifferentPackage:(bool*)arg7;
- (unsigned long long)readVersion;
- (bool)shouldAnalyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(bool)arg2;
- (bool)shouldDelayWritingObject:(id)arg1;
- (bool)shouldWriteObject:(id)arg1;
- (void)validateAmbiguousObjectOwnershipForObject:(id)arg1 explicitComponentRootObject:(id)arg2 parentObject:(id)arg3 claimingComponent:(id)arg4 claimingPackageIdentifier:(unsigned char)arg5 claimingComponentWillBeLinked:(bool)arg6;
- (void)validateExplicitComponentOwnershipForObject:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(bool)arg4;
- (bool)validateObjectContextForObject:(id)arg1;
- (void)writeArchiver:(id)arg1;
- (void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(id)arg4;
- (void)writeObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(bool)arg3 isAnalyzingExternalComponent:(bool)arg4 hasArchiverAccessLock:(bool)arg5 completion:(id)arg6;
- (unsigned long long)writeVersion;
- (void)writeWithCompletionQueue:(id)arg1 completion:(id)arg2;

@end
