/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleThreadData : NSObject <PASerializable> {
    unsigned long long continuation;
    int currentScheduledPriority;
    unsigned long long dispatchQueueId;
    bool ioPassive;
    unsigned char ioTier;
    bool isSuspended;
    PASampleFrame *leafFrame;
    int schedulerFlags;
    BOOL ss_flags;
    int state;
    int staticPriority;
    unsigned long long systemTimeInNs;
    unsigned long long threadId;
    unsigned int threadQos;
    unsigned long long userTimeInNs;
    unsigned long long waitEvent;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool hasDispatchQueue;
@property(assign,readonly) bool hasDispatchSerial;
@property(assign,readonly) bool hasValidPowerstatsFlags;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isAbortingInterruptibleWaits;
@property(assign,readonly) bool isAbortingInterruptibleWaitsAtSafePoints;
@property(assign,readonly) bool isDarwinBG;
@property(assign,readonly) bool isHaltedAtTermination;
@property(assign,readonly) bool isProcessorIdleThread;
@property(assign,readonly) bool isRunning;
@property(assign,readonly) bool isStopped;
@property(assign,readonly) bool isWaiting;
@property(assign,readonly) bool isWaitingUninterruptibly;
@property(assign,readonly) unsigned int powerstatsFlags;
@property(assign,readonly) bool stackTracesHaveNoFramePointers;
@property(assign,readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)dealloc;
- (bool)hasDispatchQueue;
- (bool)hasDispatchSerial;
- (bool)hasValidPowerstatsFlags;
- (unsigned long long)hash;
- (id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2;
- (bool)isAbortingInterruptibleWaits;
- (bool)isAbortingInterruptibleWaitsAtSafePoints;
- (bool)isDarwinBG;
- (bool)isEqual:(id)arg1;
- (bool)isHaltedAtTermination;
- (bool)isProcessorIdleThread;
- (bool)isRunning;
- (bool)isStackEqualTo:(id)arg1;
- (bool)isStopped;
- (bool)isWaiting;
- (bool)isWaitingUninterruptibly;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned int)powerstatsFlags;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)stack;
- (bool)stackTracesHaveNoFramePointers;

@end
