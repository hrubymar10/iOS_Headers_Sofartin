/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel> {
    NSURL *_URL;
    id _handler;
    bool _isClosed;
    NSObject<OS_dispatch_queue> *_queue;
    TSUFileIOChannel *_writeChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)arg1 queue:(id)arg2 handler:(id)arg3;
- (void)writeData:(id)arg1;

@end
