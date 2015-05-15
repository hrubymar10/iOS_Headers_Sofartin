/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
    char **_authTokens;
    <MSPublishStorageProtocolDelegate> *_delegate;
    unsigned int *_itemFlags;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    long long _itemsInFlight;
    const char **_signatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPublishStorageProtocolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (void)_putItemsFailure;
- (void)_requestCompleted;
- (void)computeHashForAsset:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
