/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {
    NSArray *_blockInfos;
    struct _CCCryptor { } *_cryptor;
    SFUCryptoKey *_decryptionKey;
    NSObject<OS_dispatch_data> *_holdData;
    unsigned long long _initialBytesIgnored;
    char *_iv;
    unsigned long long _ivRead;
    unsigned long long _nextBlockIndex;
    <TSUStreamReadChannel> *_readChannel;
    unsigned long long _remainingBlockSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_readBlocksWithHandler:(id)arg1;
- (void)_resetCryptor;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 blockInfos:(id)arg3;
- (void)readWithHandler:(id)arg1;

@end
