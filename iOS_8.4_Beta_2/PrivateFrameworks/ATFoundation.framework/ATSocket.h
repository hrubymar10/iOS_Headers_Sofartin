/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATSocket : NSObject <NSSecureCoding> {
    NSMutableArray *_delegates;
    int _descriptor;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _readBuffer;
    long long _socketMode;
    NSObject<OS_dispatch_source> *_source;
    unsigned long long _suggestedBufferSize;
    int _transportUpdgradeExceptionCount;
    id _userInfo;
    char *_writeBuffer;
    unsigned int _writeBufferOffset;
    unsigned int _writeBufferSize;
}

@property(assign,readwrite) int descriptor;
@property(assign,readonly) NSObject<OS_dispatch_queue> * queue;
@property(assign,readwrite) long long socketMode;
@property(assign,readwrite) unsigned long long suggestedBufferSize;
@property(assign,readonly) int transportUpdgradeExceptionCount;
@property(assign,retain) id userInfo;
@property(assign,readwrite) unsigned int writeBufferSize;

+ (id)createBoundPair:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_flush;
- (int)_send:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)addDelegate:(id)arg1;
- (void)addTransportUpgradeException;
- (void)close;
- (void)closeDescriptor;
- (void)dealloc;
- (int)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)flush;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isOpen;
- (void)notifyHasDataAvailable:(const char *)arg1 length:(long long)arg2;
- (void)notifySocketDidClose;
- (bool)open;
- (id)queue;
- (int)recv:(char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)removeDelegate:(id)arg1;
- (void)removeTransportUpgradeException;
- (int)send:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)setDescriptor:(int)arg1;
- (void)setSocketMode:(long long)arg1;
- (void)setSuggestedBufferSize:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWriteBufferSize:(unsigned int)arg1;
- (long long)socketMode;
- (unsigned long long)suggestedBufferSize;
- (int)transportUpdgradeExceptionCount;
- (id)userInfo;
- (bool)writeAllData:(id)arg1 error:(id*)arg2;
- (unsigned int)writeBufferSize;
- (void)writeData:(id)arg1 withCompletion:(id)arg2;

@end