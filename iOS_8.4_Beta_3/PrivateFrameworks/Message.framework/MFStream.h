/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFStream : NSObject <NSStreamDelegate> {
    char *_buffer;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    id _callback;
    unsigned long long _capacity;
    bool _dispatchedBytesAvailable;
    bool _enableThroughputMonitoring;
    NSError *_error;
    unsigned long long _length;
    NSObject<OS_dispatch_queue> *_location;
    NSMutableDictionary *_properties;
    NSInputStream *_rStream;
    bool _streamCanRead;
    bool _streamCanWrite;
    NSOutputStream *_wStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) NSError *streamError;
@property (readonly) Class superclass;

+ (id)_networkDispatchQueue;
+ (id)networkThread;
+ (void)setNetworkThread:(id)arg1;

- (void)_closeAndReleaseStream:(id)arg1 logMessage:(id)arg2;
- (id)_copyPropertyForKey:(id)arg1;
- (void)_readBytesFromStream;
- (void)close;
- (void)dealloc;
- (void)enableThroughputMonitoring:(bool)arg1;
- (id)init;
- (id)initCallBack:(id)arg1 onDispatchQueue:(id)arg2;
- (bool)isOpen;
- (void)openToHostName:(id)arg1 port:(long long)arg2;
- (id)propertyForKey:(id)arg1;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
