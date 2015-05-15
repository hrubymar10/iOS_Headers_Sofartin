/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {
    <TSUStreamReadChannel> *_readChannel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;
- (bool)processData:(id*)arg1 isDone:(bool)arg2 handler:(id)arg3;
- (void)readWithHandler:(id)arg1;
- (id)uncompressData:(id)arg1;
- (id)uncompressDataFromSource:(struct SnappySource { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; unsigned long long x7; char *x8; }*)arg1;

@end
