/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAWDL : NSObject <XPCClientDelegate> {
    XPCClient *_connection;
    <WPAWDLDelegate> *_delegate;
    NSObject<OS_xpc_object> *_server;
    long long _state;
}

@property(assign,retain) XPCClient * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <WPAWDLDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_xpc_object> * server;
@property(assign,readwrite) long long state;
@property(assign,readonly) Class superclass;

+ (id)generateDataFromEmails:(id)arg1;
+ (id)hashEmail:(id)arg1;

- (void).cxx_destruct;
- (void)allowAWDLConnection;
- (void)cancelAWDLConnection;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3;
- (void)initXPCHandler:(id)arg1;
- (void)messageArrived:(id)arg1;
- (id)server;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setState:(long long)arg1;
- (void)startConnectionlessAWDLServiceAdvertisingWithData:(id)arg1;
- (void)startConnectionlessAWDLServiceScanning;
- (long long)state;
- (void)stopConnectionlessAWDLServiceAdvertising;
- (void)stopConnectionlessAWDLServiceScanning;
- (void)updateState:(long long)arg1;

@end
