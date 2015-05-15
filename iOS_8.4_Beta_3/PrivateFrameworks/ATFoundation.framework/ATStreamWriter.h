/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATStreamWriter : NSObject <NSStreamDelegate> {
    unsigned long long _bytesWritten;
    id _canWriteDataBlock;
    bool _closeOnStop;
    bool _compressed;
    id _didEncounterErrorBlock;
    id _didFinishWritingBlock;
    NSInputStream *_inputStream;
    unsigned long long _maximumBufferSize;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_queue;
    double _timestamp;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_zstreamp;
}

@property(assign,readwrite) unsigned long long bytesWritten;
@property(assign,copy) id canWriteDataBlock;
@property(getter=isCompressed,assign,readwrite) bool compressed;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) id didEncounterErrorBlock;
@property(assign,copy) id didFinishWritingBlock;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSInputStream * inputStream;
@property(assign,readwrite) unsigned long long maximumBufferSize;
@property(assign,retain) NSOutputStream * outputStream;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) double timestamp;

- (void).cxx_destruct;
- (id)_decompressData:(id)arg1;
- (unsigned long long)bytesWritten;
- (id)canWriteDataBlock;
- (void)dealloc;
- (id)didEncounterErrorBlock;
- (id)didFinishWritingBlock;
- (id)init;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)inputStream;
- (bool)isCompressed;
- (unsigned long long)maximumBufferSize;
- (id)outputStream;
- (id)queue;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setCanWriteDataBlock:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDidEncounterErrorBlock:(id)arg1;
- (void)setDidFinishWritingBlock:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setMaximumBufferSize:(unsigned long long)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)start;
- (void)stop;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (double)timestamp;
- (bool)writeAllData:(id)arg1 error:(id*)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(id)arg2;
- (void)writeStreamError:(struct { long long x1; int x2; })arg1;

@end
