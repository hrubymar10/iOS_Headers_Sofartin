/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol> {
    id _playSoundAndLEDCompletion;
    id _playSoundCompletion;
    NSXPCConnection *_serverConnection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id playSoundAndLEDCompletion;
@property(assign,copy) id playSoundCompletion;
@property(assign,retain) NSXPCConnection * serverConnection;
@property(assign,readonly) Class superclass;

+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)applicationIdentifierWithReply:(id)arg1;
- (id)init;
- (id)playSoundAndLEDCompletion;
- (void)playSoundAndLightsOnCompanionWithCompletion:(id)arg1;
- (id)playSoundCompletion;
- (void)playSoundOnCompanionWithCompletion:(id)arg1;
- (void)playedSound:(bool)arg1;
- (void)playedSoundAndLED:(bool)arg1;
- (id)serverConnection;
- (void)setPlaySoundAndLEDCompletion:(id)arg1;
- (void)setPlaySoundCompletion:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end