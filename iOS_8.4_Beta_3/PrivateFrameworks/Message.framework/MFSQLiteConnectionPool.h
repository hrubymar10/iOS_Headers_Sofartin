/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLiteConnectionPool : NSObject {
    NSObject<OS_dispatch_semaphore> *_backgroundReaderSemaphore;
    int _backgroundReadersWaiting;
    NSMutableSet *_cache;
    unsigned long long _cacheGeneration;
    NSLock *_cacheLock;
    unsigned long long _cacheSize;
    NSLock *_checkoutLock;
    struct __CFDictionary { } *_checkoutMap;
    <MFSQLiteConnectionPoolDelegate> *_delegate;
    unsigned long long _maxConcurrentBackgroundReaders;
    unsigned long long _maxConcurrentWriters;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    int _writersWaiting;
}

@property(assign,readonly) unsigned long long backgroundReadersWaiting;
@property(assign,readwrite) unsigned long long cacheSize;
@property(assign,readwrite) <MFSQLiteConnectionPoolDelegate> * delegate;
@property(assign,readonly) unsigned long long maxConcurrentBackgroundReaders;
@property(assign,readonly) unsigned long long maxConcurrentWriters;
@property(assign,readonly) unsigned long long writersWaiting;

- (id)_connectionWithType:(unsigned long long)arg1;
- (id)_semaphoreForConnectionType:(unsigned long long)arg1 waitCounter:(int**)arg2;
- (id)backgroundReaderConnection;
- (unsigned long long)backgroundReadersWaiting;
- (unsigned long long)cacheSize;
- (void)checkInConnection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (unsigned long long)maxConcurrentBackgroundReaders;
- (unsigned long long)maxConcurrentReaders;
- (unsigned long long)maxConcurrentWriters;
- (id)readerConnection;
- (void)setCacheSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)writerConnection;
- (unsigned long long)writersWaiting;

@end