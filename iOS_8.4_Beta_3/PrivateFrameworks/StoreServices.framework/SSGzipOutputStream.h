/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSGzipOutputStream : NSOutputStream {
    NSOutputStream *_actualOutputStream;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    } _stream;
    unsigned long long _streamContentLength;
    NSError *_streamError;
    char *_streamOutBuffer;
    unsigned long long _streamOutBufferSize;
}

- (long long)_consumeStreamOutput:(bool)arg1;
- (void)_setStreamError:(int)arg1 context:(id)arg2;
- (void)close;
- (void)dealloc;
- (bool)hasSpaceAvailable;
- (id)init;
- (id)initToFileAtPath:(id)arg1 append:(bool)arg2;
- (id)initToMemory;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (unsigned long long)streamContentLength;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
