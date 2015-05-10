/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {
    bool _connected;
    id _connectedHandler;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataReceived;
    NSMutableData *_dataToSend;
    NSMutableData *_dataToSendHoldingQueue;
    NSInputStream *_inputStream;
    NSString *_localServiceName;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSOutputStream *_outputStream;
    bool _readyToWrite;
    id _receiveDataHandler;
    NSMutableArray *_receivedDataHoldingQueue;
    NSString *_remoteServiceName;
    bool _shouldSendHello;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property(assign,copy) id connectedHandler;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSInputStream * inputStream;
@property(assign,copy) NSString * localServiceName;
@property(assign,retain) NSOutputStream * outputStream;
@property(assign,copy) id receiveDataHandler;
@property(assign,copy) NSString * remoteServiceName;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * syncQueue;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * targetQueue;

+ (void)checkConstants;
+ (unsigned long long)receiveDataLimit;
+ (unsigned long long)sendDataLimit;

- (void)attachInputStream:(id)arg1 outputStream:(id)arg2;
- (void)connectToNetService:(id)arg1;
- (id)connectedHandler;
- (void)dealloc;
- (id)initWithLocalServiceName:(id)arg1;
- (id)inputStream;
- (void)invalidate;
- (id)localServiceName;
- (id)outputStream;
- (id)receiveDataHandler;
- (id)remoteServiceName;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setConnectedHandler:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setLocalServiceName:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setReceiveDataHandler:(id)arg1;
- (void)setRemoteServiceName:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setupInputStream:(id)arg1 outputStream:(id)arg2;
- (bool)shouldDecideAboutConnection;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)stringForStreamEventCode:(unsigned long long)arg1;
- (void)syncAcceptedConnection;
- (void)syncAppendDataToSend:(id)arg1;
- (void)syncCloseConnectionNow;
- (void)syncHandleInputStreamEvent:(unsigned long long)arg1;
- (void)syncHandleOutputStreamEvent:(unsigned long long)arg1;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (id)syncQueue;
- (void)syncReadFromInputStream;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)syncSendAccept;
- (void)syncSendData;
- (void)syncSendHello;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (id)targetQueue;

@end
