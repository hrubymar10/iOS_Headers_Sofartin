/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUMemoryOutputStream : NSObject <SFUOutputStream> {
    NSMutableData *mData;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (bool)canCreateInputStream;
- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)inputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
