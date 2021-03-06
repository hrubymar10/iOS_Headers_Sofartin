/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFileIOChannel : NSObject <TSURandomWriteChannel, TSUReadChannel, TSUStreamWriteChannel> {
    NSObject<OS_dispatch_io> *_channel;
    bool _isClosed;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isValid;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(id)arg1;
- (void)close;
- (id)createRandomAccessChannel;
- (void)dealloc;
- (id)initForRandomWritingURL:(id)arg1 error:(id*)arg2;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(id)arg3;
- (id)initForReadingURL:(id)arg1 error:(id*)arg2;
- (id)initForStreamWritingURL:(id)arg1 error:(id*)arg2;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id*)arg5;
- (id)initWithType:(unsigned long long)arg1 channel:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(id)arg4;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id)arg3;
- (void)readWithHandler:(id)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(id)arg4;
- (void)writeData:(id)arg1 queue:(id)arg2 handler:(id)arg3;

@end
