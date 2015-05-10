/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PushKit.framework/PushKit
 */

@interface PKPushRegistry : NSObject <PKVoIPXPCClient> {
    <PKPushRegistryDelegate> *_delegate;
    NSSet *_desiredPushTypes;
    NSMutableDictionary *_pushTypeToConnection;
    NSMutableDictionary *_pushTypeToToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,readwrite) <PKPushRegistryDelegate> * delegate;
@property(assign,copy) NSSet * desiredPushTypes;
@property(assign,retain) NSMutableDictionary * pushTypeToConnection;
@property(assign,retain) NSMutableDictionary * pushTypeToToken;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;

+ (id)pushTypeToMachServiceName;

- (void).cxx_destruct;
- (id)createConnectionForPushType:(id)arg1;
- (id)delegate;
- (id)desiredPushTypes;
- (id)initWithQueue:(id)arg1;
- (id)pushTokenForType:(id)arg1;
- (id)pushTypeToConnection;
- (id)pushTypeToToken;
- (id)queue;
- (void)registerForPushType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredPushTypes:(id)arg1;
- (void)setPushTypeToConnection:(id)arg1;
- (void)setPushTypeToToken:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterForPushType:(id)arg1;
- (void)voipPayloadReceived:(id)arg1;
- (void)voipRegistrationFailed;
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;

@end