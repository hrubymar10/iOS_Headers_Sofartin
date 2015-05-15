/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent {
    long long _commandType;
    unsigned long long _sessionID;
    NSString *_text;
}

@property(assign,readonly) long long commandType;
@property(assign,readonly) unsigned long long sessionID;
@property(assign,readonly) NSString * text;

+ (unsigned int)_packetEventType;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (long long)commandType;
- (id)description;
- (id)initWithCommandType:(long long)arg1 sessionID:(unsigned long long)arg2 text:(id)arg3;
- (unsigned long long)sessionID;
- (id)text;

@end
