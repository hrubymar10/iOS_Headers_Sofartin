/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDSource : NSObject {
    const char *_actualPath;
    unsigned int _byHost;
    unsigned int _checkedForNonPrefsPlist;
    unsigned int _dirty;
    struct __CFString { } *_domain;
    short _generationShmemIndex;
    unsigned int _hasDrainedPendingChangesSinceLastReplyToOwner;
    unsigned int _lastEgid;
    unsigned int _lastEuid;
    unsigned int _managed;
    unsigned int _neverCache;
    int _owner;
    const char *_pathToTemporaryFileToWriteTo;
    struct __CFArray { } *_pendingChangesQueue;
    CFPDDataBuffer *_plist;
    BOOL _plistAccessingCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _restrictedReadability;
    struct __CFString { } *_userName;
    unsigned int _waitingForDeviceUnlock;
}

+ (void)synchronousWithSourceCache:(id)arg1;
+ (void)withSourceCache:(id)arg1;
+ (void)withSourceForDomain:(struct __CFString { }*)arg1 inContainer:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 byHost:(bool)arg4 managed:(bool)arg5 synchronously:(bool)arg6 perform:(id)arg7;

- (unsigned char)_backingPlistChangedSinceLastSync:(unsigned long long*)arg1;
- (bool)acceptLocalMessage:(id)arg1 withReply:(struct __CFDictionary { }*)arg2 inode:(unsigned long long*)arg3;
- (id)acceptMessage:(id)arg1;
- (void)addOwner:(id)arg1;
- (void)autosync:(bool)arg1;
- (void)beginAccessingPlist;
- (bool)byHost;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPath;
- (void)cacheActualPathCreatingIfNecessary:(bool)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)clearCache;
- (bool)clearCacheIfStale:(unsigned long long*)arg1;
- (struct __CFString { }*)container;
- (void)dealloc;
- (struct __CFString { }*)debugDump;
- (id)description;
- (struct __CFString { }*)domain;
- (void)drainPendingChanges;
- (void)endAccessingPlist;
- (void)enqueueNewKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (bool)getUncanonicalizedPath:(char *)arg1;
- (bool)hasEverHadMultipleOwners;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 byHost:(bool)arg3 managed:(bool)arg4 shmemIndex:(short)arg5;
- (void)lockedAsync:(id)arg1;
- (void)lockedSync:(id)arg1;
- (bool)managed;
- (void)noteAccessed;
- (id)propertyList;
- (id)propertyListWithoutDrainingPendingChanges;
- (void)removeOwner;
- (void)setDirty:(bool)arg1;
- (void)setPlist:(id)arg1;
- (short)shmemIndex;
- (void)transitionToMultiOwner;
- (void)updateShmemEntry;
- (struct __CFString { }*)user;
- (int)validateMessage:(id)arg1 withNewKey:(struct __CFString { }*)arg2 newValue:(void*)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (bool)validateReadAccessToken:(int)arg1;
- (bool)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (bool)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2 targetingContainer:(bool*)arg3;
- (void)writeToDisk:(bool)arg1;

@end
