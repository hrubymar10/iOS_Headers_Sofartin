/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTaskData : NSObject <PASerializable> {
    NSSet *_donatingPids;
    PASampleTaskDataPrivateData *_privateData;
    PASampleTimeInsensitiveTaskData *_timeInsensitiveTaskData;
    NSArray *sampleThreadsArray;
}

@property (readonly) bool allowsIdleExit;
@property (readonly) NSString *bundleName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSSet *donatingPids;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *imageInfos;
@property (readonly) bool isBoosted;
@property (readonly) bool isDarwinBG;
@property (readonly) bool isDarwinExtBG;
@property (readonly) bool isDirty;
@property (readonly) bool isForeground;
@property (readonly) bool isFrozen;
@property (readonly) bool isNonVisible;
@property (readonly) bool isPidSuspended;
@property (readonly) bool isSuppressed;
@property (readonly) bool isTaskResourceFlagged;
@property (readonly) bool isTerminatedSnapshot;
@property (readonly) bool isThirdParty;
@property (readonly) bool isTimerThrottled;
@property (readonly) bool isUnresponsive;
@property (readonly) bool isVisible;
@property (readonly) unsigned int latency_qos;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned long long sharedCacheLength;
@property (readonly) unsigned long long sharedCacheOffset;
@property (readonly) unsigned long long sharedCacheStart;
@property (readonly) NSUUID *sharedCacheUUID;
@property (readonly) unsigned int ss_flags;
@property (readonly) Class superclass;
@property (readonly) int suspendCount;
@property (readonly) int taskSizeInPages;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniqueId;
@property (readonly) bool usesSuddenTermination;
@property (readonly) bool workQueueExceededConstrainedThreadLimit;
@property (readonly) bool workQueueExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (bool)allowsIdleExit;
- (id)architectureString;
- (id)bundleName;
- (void)dealloc;
- (id)description;
- (id)donatingPids;
- (id)imageInfos;
- (id)initWithStackshotTask:(id)arg1 andTimeInsensitiveTaskData:(id)arg2;
- (bool)isBoosted;
- (bool)isDarwinBG;
- (bool)isDarwinExtBG;
- (bool)isDirty;
- (bool)isForeground;
- (bool)isFrozen;
- (bool)isNonVisible;
- (bool)isPidSuspended;
- (bool)isSameAsTask:(id)arg1;
- (bool)isSuppressed;
- (bool)isTaskResourceFlagged;
- (bool)isTerminatedSnapshot;
- (bool)isThirdParty;
- (bool)isTimerThrottled;
- (bool)isUnresponsive;
- (bool)isVisible;
- (unsigned int)latency_qos;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (id)name;
- (int)numberOfCopyOnWritePageFaults;
- (int)numberOfPageFaults;
- (int)numberOfPageIns;
- (int)pid;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (int)ppid;
- (int)rpid;
- (void)setDonatingPids:(id)arg1;
- (unsigned long long)sharedCacheLength;
- (unsigned long long)sharedCacheOffset;
- (unsigned long long)sharedCacheStart;
- (id)sharedCacheUUID;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned int)ss_flags;
- (int)suspendCount;
- (int)taskSizeInPages;
- (id)timeInsensitiveTaskData;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned long long)uniqueId;
- (bool)usesSuddenTermination;
- (bool)workQueueExceededConstrainedThreadLimit;
- (bool)workQueueExceededTotalThreadLimit;

@end
