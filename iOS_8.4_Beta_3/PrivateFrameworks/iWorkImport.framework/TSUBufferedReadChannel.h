/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {
    NSArray *_blockInfos;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
    bool _isStreamOutputDone;
    NSObject<OS_dispatch_queue> *_readQueue;
    unsigned long long _sourceLength;
    long long _sourceOffset;
    unsigned long long _sourceReadBufferSize;
    <TSUReadChannel> *_sourceReadChannel;
    NSError *_sourceReadChannelError;
    unsigned long long _streamOutputLength;
    long long _streamOutputOffset;
    unsigned long long _streamOutputOutstandingLength;
    <TSUStreamReadChannel> *_streamReadChannel;
    id _streamReadChannelBlock;
    id _streamReadChannelSourceHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(bool*)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2;
- (void)addBarrier:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(id)arg3;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(id)arg4;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id)arg3;
- (void)readWithHandler:(id)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)setStreamReadChannelSourceHandler:(id)arg1;

@end
