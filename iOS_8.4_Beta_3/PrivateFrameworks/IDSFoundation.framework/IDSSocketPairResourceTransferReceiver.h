/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferReceiver : NSObject {
    bool _compressed;
    bool _done;
    bool _expectsPeerResponse;
    int _fileDescriptor;
    NSString *_messageUUID;
    NSDictionary *_metadata;
    NSString *_peerResponseIdentifier;
    NSString *_resourcePath;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned long long _totalBytesExpected;
    unsigned long long _totalBytesReceived;
    bool _wantsAppAck;
}

@property (nonatomic, readonly) unsigned long long totalBytesReceived;

- (void)abortTransfer;
- (bool)appendMessage:(id)arg1;
- (void)dealloc;
- (id)finalizedMessageDictionaryIfDone;
- (id)initWithMessage:(id)arg1;
- (unsigned long long)totalBytesReceived;
- (bool)writeResourceData:(id)arg1;

@end
