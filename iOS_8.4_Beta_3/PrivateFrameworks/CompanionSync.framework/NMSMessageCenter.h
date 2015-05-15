/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSMessageCenter : NSObject <IDSServiceDelegate> {
    unsigned long long _currentBytesInFlight;
    <NMSMessageCenterDelegate> *_delegate;
    bool _delegateRequiresACKs;
    bool _enableTransmissionWindow;
    NSMutableDictionary *_errorHandlers;
    NSObject<OS_dispatch_source> *_expireTimer;
    NSString *_launchNotification;
    struct __CFString { } *_loggingFacility;
    unsigned long long _maxBytesInFlight;
    unsigned long long _maxMessagesInFlight;
    unsigned long long _minMessagesInFlight;
    NSDate *_nextExpireTimerFireDate;
    NSMutableDictionary *_pbMapping;
    NMSPersistentDictionary *_persistentContextStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_responseHandlers;
    IDSService *_service;
    NSString *_serviceIdentifier;
    NMSWindowData *_windowData;
    _NMSDispatchQueue *_windowQueue;
    double _windowResponseTimeout;
    NSObject<OS_dispatch_source> *_windowTimeout;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *actionQ;
@property (getter=_currentBytesInFlight, nonatomic, readonly) unsigned long long currentBytesInFlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NMSMessageCenterDelegate> *delegate;
@property (nonatomic) bool delegateRequiresACKs;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableTransmissionWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *idsService;
@property (nonatomic) unsigned long long maxBytesInFlight;
@property (nonatomic) unsigned long long maxMessagesInFlight;
@property (nonatomic) unsigned long long minMessagesInFlight;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSService *service;
@property (readonly) Class superclass;
@property (nonatomic) double windowResponseTimeout;

+ (bool)messageWindowCountEnabled;
+ (void)setMessageWindowCountEnabled:(bool)arg1;

- (void).cxx_destruct;
- (id)_buildDataForRequest:(id)arg1 options:(id*)arg2;
- (id)_buildDataForResponse:(id)arg1 options:(id*)arg2;
- (unsigned long long)_currentBytesInFlight;
- (id)_decodeIncomingRequestData:(id)arg1 context:(id)arg2;
- (void)_expireMessages;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (void)_obliterate;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (void)_sendResponse:(id)arg1;
- (void)_setNextWindowTimeoutFireDate;
- (void)_timeoutWindowedMessages;
- (void)_updateExpireTimerWithDate:(id)arg1;
- (id)actionQ;
- (void)addErrorHandlerForMessageID:(unsigned short)arg1 usingBlock:(id)arg2;
- (void)addRequestHandlerForMessageID:(unsigned short)arg1 usingBlock:(id)arg2;
- (void)addResponseHandler:(unsigned short)arg1 usingBlock:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)delegateRequiresACKs;
- (id)description;
- (void)dropExtantMessages;
- (bool)enableTransmissionWindow;
- (id)errorHandlers;
- (id)idsService;
- (id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheFolderPath:(id)arg3 loggingFacility:(struct __CFString { }*)arg4;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (unsigned long long)maxBytesInFlight;
- (unsigned long long)maxMessagesInFlight;
- (unsigned long long)minMessagesInFlight;
- (id)queue;
- (id)requestHandlers;
- (id)responseHandlers;
- (void)resume;
- (void)sendRequest:(id)arg1;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateRequiresACKs:(bool)arg1;
- (void)setEnableTransmissionWindow:(bool)arg1;
- (void)setMaxBytesInFlight:(unsigned long long)arg1;
- (void)setMaxMessagesInFlight:(unsigned long long)arg1;
- (void)setMinMessagesInFlight:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setService:(id)arg1;
- (void)setWindowResponseTimeout:(double)arg1;
- (double)windowResponseTimeout;

@end
