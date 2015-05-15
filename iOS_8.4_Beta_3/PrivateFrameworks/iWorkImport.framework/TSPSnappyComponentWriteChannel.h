/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    char *_uncompressedBuffer;
    unsigned long long _uncompressedLength;
    <TSPComponentWriteChannel> *_writeChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1;
- (void)writeBlock;
- (void)writeData:(id)arg1;

@end
