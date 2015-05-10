/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAMountStatusTracker : NSObject <PASerializable> {
    NSMutableDictionary *_mountStatusDict;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)dealloc;
- (unsigned long long)forEachMountBlockingThread:(unsigned long long)arg1 withSanitizedPaths:(bool)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 runBlock:(id)arg5;
- (unsigned long long)forEachUnresponsiveMountWithSanitizedPaths:(bool)arg1 BetweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(id)arg4;
- (id)init;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)takeCurrentMountStatusForMachTime:(double)arg1;

@end