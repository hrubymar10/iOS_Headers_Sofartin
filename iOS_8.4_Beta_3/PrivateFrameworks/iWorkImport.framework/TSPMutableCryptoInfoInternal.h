/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPMutableCryptoInfoInternal : TSPCryptoInfoInternal <TSPMutableCryptoInfo>

@property (nonatomic, readonly) NSArray *blockInfos;
@property (nonatomic, readonly) SFUCryptoKey *cryptoKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long decodedLength;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long preferredBlockSize;
@property (readonly) Class superclass;

- (void)addBlockInfo:(id)arg1;
- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4;
- (void)reset;

@end
