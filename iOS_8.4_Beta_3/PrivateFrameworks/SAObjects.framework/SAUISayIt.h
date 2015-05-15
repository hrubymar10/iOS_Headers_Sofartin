/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISayIt : SABaseClientBoundCommand

@property(assign,retain) <SAAceSerializable> * context;
@property(assign,copy) NSNumber * listenAfterSpeaking;
@property(assign,copy) NSString * message;

+ (id)sayIt;
+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;

- (bool)_afui_isUsefulUserResultCommand;
- (id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (id)message;
- (bool)requiresResponse;
- (void)setContext:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setMessage:(id)arg1;

@end