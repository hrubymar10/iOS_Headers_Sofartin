/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol> {
    bool _ATCRunning;
    NSXPCConnection *_connection;
    <ATStatusObserverDelegate> *_delegate;
    int _notifyToken;
    bool _resumed;
}

@property(assign,readwrite) bool ATCRunning;
@property(assign,retain) NSXPCConnection * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <ATStatusObserverDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) int notifyToken;
@property(assign,readwrite) bool resumed;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (bool)ATCRunning;
- (id)connection;
- (id)delegate;
- (void)fetchAllStatusWithCompletion:(id)arg1;
- (id)init;
- (int)notifyToken;
- (void)resume;
- (bool)resumed;
- (void)setATCRunning:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setResumed:(bool)arg1;
- (void)suspend;
- (void)updateWithStatus:(id)arg1;

@end
