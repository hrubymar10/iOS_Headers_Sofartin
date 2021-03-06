/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate> {
    NSMutableArray *_attemptedInterfaces;
    NSNumber *_chosenInterface;
    GKDiscoveryPeerConnection *_connection;
    NSString *_deviceID;
    double _discoveryTimeStamp;
    NSMutableSet *_interfaces;
    NSMutableArray *_orderedInterfaces;
    NSString *_playerID;
    id _resolveTimeoutHandler;
    GKSimpleTimer *_resolveTimer;
    NSMutableArray *_sendDataBuffer;
    NSString *_serviceName;
    bool _shouldSignalDiscovery;
    int _state;
    NSObject<OS_dispatch_queue> *_syncQueue;
    GKDiscoveryPeerConnection *_trialConnection;
}

@property(assign,retain) NSMutableArray * attemptedInterfaces;
@property(assign,retain) NSNumber * chosenInterface;
@property(assign,retain) GKDiscoveryPeerConnection * connection;
@property(assign,copy) NSString * deviceID;
@property(assign,readwrite) double discoveryTimeStamp;
@property(assign,retain) NSMutableSet * interfaces;
@property(assign,retain) NSMutableArray * orderedInterfaces;
@property(assign,copy) NSString * playerID;
@property(assign,copy) id resolveTimeoutHandler;
@property(assign,retain) GKSimpleTimer * resolveTimer;
@property(assign,retain) NSMutableArray * sendDataBuffer;
@property(assign,copy) NSString * serviceName;
@property(assign,readwrite) bool shouldSignalDiscovery;
@property(assign,readwrite) int state;
@property(assign,readonly) NSObject<OS_dispatch_queue> * syncQueue;
@property(assign,retain) GKDiscoveryPeerConnection * trialConnection;

- (id)attemptedInterfaces;
- (id)chosenInterface;
- (void)cleanUpForBrowse;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (void)didLoseInterface:(id)arg1;
- (double)discoveryTimeStamp;
- (void)flushDataBuffer;
- (id)initWithServiceName:(id)arg1;
- (id)interfaces;
- (void)invalidate;
- (id)nextInterfaceIndex;
- (id)orderedInterfaces;
- (bool)parseServiceNameForInit:(id)arg1;
- (id)playerID;
- (id)resolveTimeoutHandler;
- (id)resolveTimer;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (id)sendDataBuffer;
- (id)serviceName;
- (void)setAttemptedInterfaces:(id)arg1;
- (void)setChosenInterface:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDiscoveryTimeStamp:(double)arg1;
- (void)setInterfaces:(id)arg1;
- (void)setOrderedInterfaces:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setResolveTimeoutHandler:(id)arg1;
- (void)setResolveTimer:(id)arg1;
- (void)setSendDataBuffer:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldSignalDiscovery:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTrialConnection:(id)arg1;
- (bool)shouldSignalDiscovery;
- (void)startResolveTimerWithHandler:(id)arg1;
- (int)state;
- (void)stopResolveTimer;
- (id)stringForState:(int)arg1;
- (id)syncQueue;
- (void)timeout:(id)arg1;
- (id)trialConnection;

@end
