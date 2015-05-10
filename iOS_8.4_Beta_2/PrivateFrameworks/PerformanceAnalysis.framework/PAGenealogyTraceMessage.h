/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyTraceMessage : PAGenealogyTimestampedMessage <PASerializable> {
    unsigned int _binaryOffset;
    NSUUID *_binaryUuid;
    void *_buffer;
    unsigned long long _bufferLength;
    NSString *_message;
    unsigned long long _traceId;
}

@property(assign,readonly) unsigned int binaryOffset;
@property(assign,readonly) NSUUID * binaryUuid;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned int)binaryOffset;
- (id)binaryUuid;
- (void)dealloc;
- (id)initWithId:(unsigned long long)arg1 andOffset:(unsigned int)arg2 intoBinaryWithUUID:(id)arg3 withBuffer:(const void*)arg4 ofLength:(unsigned long long)arg5 atMachTime:(double)arg6 withActivityId:(unsigned long long)arg7;
- (id)initWithSerializedGenealogyTraceMessage:(const struct { unsigned long long x1; double x2; unsigned long long x3; unsigned long long x4; long long x5; unsigned int x6; unsigned long long x7; }*)arg1;
- (id)message;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
