/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser {
    struct BonjourBrowser { } *_bonjourBrowser;
    <HAPAccessoryServerBrowserDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableSet *_discoveredAccessoryServers;
}

@property(assign,readwrite) <HAPAccessoryServerBrowserDelegate> * delegate;
@property(assign,retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property(assign,retain) NSMutableSet * discoveredAccessoryServers;

- (void).cxx_destruct;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (int)_initializeAndStartBonjourBrowser;
- (void)_invalidateUnpairedAccessoryServers;
- (int)_server:(id*)arg1 forBonjourDevice:(id)arg2;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscoveredAccessoryServers:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;

@end
