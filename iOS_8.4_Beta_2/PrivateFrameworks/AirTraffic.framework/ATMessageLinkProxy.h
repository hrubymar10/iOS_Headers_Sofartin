/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATMessageLinkProxy : NSObject <ATMessageLink, ATMessageLinkObserver, ATMessageLinkRequestHandler, NSSecureCoding> {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    int _endpointType;
    bool _initialized;
    NSString *_libraryIdentifier;
    NSHashTable *_observers;
    bool _open;
    NSMutableDictionary *_requestHandlers;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) int endpointType;
@property(assign,readonly) unsigned long long hash;
@property(getter=isInitialized,assign,readwrite) bool initialized;
@property(assign,copy) NSString * libraryIdentifier;
@property(getter=isOpen,assign,readwrite) bool open;
@property(assign,readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)endpointType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (bool)isInitialized;
- (bool)isOpen;
- (id)libraryIdentifier;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 completion:(id)arg3;
- (void)messageLinkWasClosed:(id)arg1;
- (void)messageLinkWasInitialized:(id)arg1;
- (void)messageLinkWasOpened:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeRequestHandlerForDataClass:(id)arg1;
- (void)sendRequest:(id)arg1 withCompletion:(id)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id)arg2;
- (void)setEndpointType:(int)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setLibraryIdentifier:(id)arg1;
- (void)setOpen:(bool)arg1;

@end
