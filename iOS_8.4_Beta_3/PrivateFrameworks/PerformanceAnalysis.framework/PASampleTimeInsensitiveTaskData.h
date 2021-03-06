/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleTimeInsensitiveTaskData : NSObject <PASerializable> {
    bool _allowsIdleExit;
    struct _CSArchitecture { 
        int cpu_type; 
        int cpu_subtype; 
    } _architecture;
    NSString *_bundleName;
    NSSet *_cachedDonatingPids;
    PASampleTaskDataPrivateData *_cachedPrivateData;
    bool _didExec;
    bool _gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem;
    NSArray *_imageInfos;
    bool _isDirty;
    bool _isThirdParty;
    bool _isUnresponsive;
    NSString *_mainBinaryPath;
    NSString *_name;
    int _pid;
    int _ppid;
    NSMutableSet *_rootFrames;
    int _rpid;
    unsigned long long _sharedCacheOffset;
    NSUUID *_sharedCacheUuid;
    double _timeOfLastResponse;
    unsigned int _uid;
    unsigned long long _uniqueId;
    bool _usesSuddenTermination;
    bool _workQueueExceededConstrainedThreadLimit;
    bool _workQueueExceededTotalThreadLimit;
    PASampleTaskData *mostRecentTask;
}

@property (readonly) bool allowsIdleExit;
@property (readonly) struct _CSArchitecture { int x1; int x2; } architecture;
@property (readonly) NSString *bundleName;
@property (retain) NSSet *cachedDonatingPids;
@property (retain) PASampleTaskDataPrivateData *cachedPrivateData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didExec;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *imageInfos;
@property (readonly) bool isDirty;
@property (readonly) bool isThirdParty;
@property (readonly) bool isUnresponsive;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) unsigned long long sharedCacheOffset;
@property (readonly) NSUUID *sharedCacheUuid;
@property (readonly) Class superclass;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniqueId;
@property (readonly) bool usesSuddenTermination;
@property (readonly) bool workQueueExceededConstrainedThreadLimit;
@property (readonly) bool workQueueExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void)_gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWithSampleTimeSeriesDataStore:(id)arg1;
- (void)_gatherTimeCriticalAuxiliaryInfoFromLiveSystem;
- (id)_initWithSerializedTimeInsensitiveTaskData:(const struct { unsigned long long x1; int x2; int x3; int x4; unsigned int x5; long long x6; long long x7; unsigned long long x8; long long x9; unsigned long long x10; long long x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; double x18; unsigned long long x19; unsigned long long x20; bool x21; struct _CSArchitecture { int x_22_1_1; int x_22_1_2; } x22; }*)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)addStack:(id)arg1;
- (bool)allowsIdleExit;
- (struct _CSArchitecture { int x1; int x2; })architecture;
- (id)bundleName;
- (id)cachedDonatingPids;
- (id)cachedPrivateData;
- (bool)correspondsToStackshotTask:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (bool)didExec;
- (id)imageInfos;
- (id)initWithStackshotTask:(id)arg1;
- (bool)isDirty;
- (bool)isThirdParty;
- (bool)isUnresponsive;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (id)name;
- (int)pid;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (int)ppid;
- (id)rootFrames;
- (int)rpid;
- (void)setArchitecture:(struct _CSArchitecture { int x1; int x2; })arg1;
- (void)setCachedDonatingPids:(id)arg1;
- (void)setCachedPrivateData:(id)arg1;
- (void)setDidExec:(bool)arg1;
- (unsigned long long)sharedCacheOffset;
- (id)sharedCacheUuid;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned long long)uniqueId;
- (bool)usesSuddenTermination;
- (bool)workQueueExceededConstrainedThreadLimit;
- (bool)workQueueExceededTotalThreadLimit;

@end
