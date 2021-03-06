/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAMountSnapshot : NSObject <PASerializable> {
    NSArray *_blockedThreadIDs;
    double _machTimestampOfLastResponse;
    double _machTimestampWhenMeasured;
}

@property(assign,readonly) NSArray * blockedThreadIDs;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isUnresponsive;
@property(assign,readonly) double machTimestampOfLastResponse;
@property(assign,readonly) double machTimestampWhenMeasured;
@property(assign,readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)blockedThreadIDs;
- (void)dealloc;
- (id)initWithSerializedMountSnapshot:(const struct { unsigned long long x1; double x2; double x3; unsigned int x4; }*)arg1;
- (id)initWithStatus:(struct netfs_status { unsigned int x1; BOOL x2[512]; unsigned int x3; unsigned int x4; unsigned long long x5[0]; }*)arg1 atMachTime:(double)arg2;
- (bool)isBlockingThread:(unsigned long long)arg1;
- (bool)isUnresponsive;
- (double)machTimestampOfLastResponse;
- (double)machTimestampWhenMeasured;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
