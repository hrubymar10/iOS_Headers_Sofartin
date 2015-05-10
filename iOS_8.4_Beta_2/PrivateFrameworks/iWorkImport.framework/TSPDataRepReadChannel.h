/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {
    <SFUInputStream> *_inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
    SFUDataRepresentation *_representation;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (void)readWithHandler:(id)arg1;

@end