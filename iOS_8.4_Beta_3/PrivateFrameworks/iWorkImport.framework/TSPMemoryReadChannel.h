/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMemoryReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_data> *_dispatchData;
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
- (id)init;
- (id)initWithDispatchData:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (bool)isValid;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(id)arg3;
- (void)readWithHandler:(id)arg1;
- (void)setLowWater:(unsigned long long)arg1;

@end
