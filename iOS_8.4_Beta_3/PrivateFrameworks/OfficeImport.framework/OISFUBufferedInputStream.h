/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {
    char *mBuffer;
    long long mBufferEnd;
    long long mBufferOffset;
    unsigned long long mBufferSize;
    long long mBufferStart;
    <SFUInputStream> *mStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithStream:(id)arg1;
- (id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;
- (long long)offset;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (void)seekToOffset:(long long)arg1;
- (bool)seekWithinBufferToOffset:(long long)arg1;

@end
