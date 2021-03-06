/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPairingAgent : NSObject {
    <CBPairingAgentDelegate> *_delegate;
    <CBPairingAgentParentDelegate> *_parentManager;
    bool _useOOBMode;
}

@property (nonatomic) <CBPairingAgentDelegate> *delegate;
@property (nonatomic) bool useOOBMode;

- (id)delegate;
- (void)handlePairingCompleted:(id)arg1;
- (void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2;
- (void)handlePairingRequested:(id)arg1;
- (void)handleUnpaired:(id)arg1;
- (id)initWithParentManager:(id)arg1;
- (bool)isPeerCloudPaired:(id)arg1;
- (bool)isPeerPaired:(id)arg1;
- (void)pairPeer:(id)arg1;
- (void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(bool)arg3 data:(id)arg4;
- (id)retrieveOOBDataForPeer:(id)arg1;
- (id)retrievePairedPeers;
- (void)setDelegate:(id)arg1;
- (void)setOOBPairingEnabled:(bool)arg1 forPeer:(id)arg2;
- (void)setOrphan;
- (void)setUseOOBMode:(bool)arg1;
- (void)unpairPeer:(id)arg1;
- (void)updateRegistration;
- (bool)useOOBMode;

@end
