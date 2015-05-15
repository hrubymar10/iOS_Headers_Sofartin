/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long packetNumber;
@property(assign,copy) NSArray * packets;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)speechPacket;
+ (id)speechPacketWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)packetNumber;
- (id)packets;
- (void)setPacketNumber:(long long)arg1;
- (void)setPackets:(id)arg1;

@end
