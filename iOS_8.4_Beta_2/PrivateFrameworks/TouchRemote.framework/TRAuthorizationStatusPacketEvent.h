/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent {
    long long _authorizationStatus;
}

@property(assign,readonly) long long authorizationStatus;

+ (unsigned int)_packetEventType;

- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (long long)authorizationStatus;
- (id)description;
- (id)initWithAuthorizationStatus:(long long)arg1;

@end
